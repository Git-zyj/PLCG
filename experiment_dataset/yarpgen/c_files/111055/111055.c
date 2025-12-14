/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1) /* same iter space */
                            {
                                arr_14 [i_3] = (max((arr_4 [i_0] [i_1]), (((-254108117104143831 >= ((max((arr_11 [i_1] [i_1] [i_3]), (arr_6 [i_0] [17])))))))));
                                arr_15 [i_0] [i_2] [i_3] = -1;
                                var_10 = (min((min((arr_6 [i_3 + 1] [i_3 + 1]), (arr_6 [i_3 - 1] [i_3 - 1]))), ((!(arr_6 [i_3 + 1] [i_3 - 1])))));
                                var_11 = 2954002269613189282;
                                arr_16 [i_4] [i_3] [i_3] [i_1] [i_3] [i_1] [i_0] = (max((max(8166914209997682920, 14)), (arr_5 [i_3] [i_3] [i_2] [i_3 - 1])));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_3] [i_0] [i_0] [i_0] = (((min((arr_5 [i_0] [i_0] [i_0] [i_0]), (max((arr_1 [10]), 16)))) >= (max((max((arr_3 [i_0] [i_0]), (arr_20 [i_0] [i_5] [i_2] [i_3] [i_5]))), ((max((arr_7 [i_3]), (arr_12 [i_0] [12] [i_2] [i_2] [i_5]))))))));
                                var_12 = (max((~-24), (min((arr_0 [i_0]), ((max((arr_7 [4]), (arr_5 [16] [16] [i_2] [16]))))))));
                                arr_22 [i_0] [i_1] [i_3] [i_3] [9] [i_3] = (min(((max(-19, (arr_18 [21] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))), ((~(arr_17 [i_3] [i_3 - 1] [i_3])))));
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                            {
                                var_13 = (arr_12 [18] [i_1] [i_3 + 1] [i_3] [i_3]);
                                var_14 = (max(var_14, (arr_7 [i_3])));
                                var_15 = (min((min((arr_6 [i_3] [i_0]), (arr_3 [i_3 + 1] [i_3 - 1]))), ((((arr_19 [i_0] [i_0]) && ((max(-1, (arr_24 [i_0] [i_1] [i_2] [i_6])))))))));
                            }
                            for (int i_7 = 1; i_7 < 21;i_7 += 1)
                            {
                                arr_28 [i_0] [i_1] [20] [i_3] = (min((max((arr_19 [23] [i_3 - 1]), (arr_19 [i_3] [i_3 - 1]))), (min((arr_19 [15] [i_3 - 1]), (arr_19 [i_3 - 1] [i_3 + 1])))));
                                var_16 = (arr_0 [i_7]);
                                arr_29 [i_3] [i_3] [i_2] [i_2] [11] [i_1] [i_3] = (arr_24 [i_0] [i_0] [i_0] [i_0]);
                            }
                            arr_30 [24] [i_3] [i_0] [i_0] = ((-(((18446744073709551615 > (((((arr_4 [15] [i_0]) && (arr_17 [i_3] [i_2] [i_0]))))))))));
                            var_17 = -39;
                            arr_31 [i_3] = arr_18 [i_0] [i_0] [i_0] [i_0] [i_0];
                        }
                    }
                }
                arr_32 [i_1] [i_0] = (max(((max(-3243172988659655763, -1))), (arr_26 [i_0] [7])));
                var_18 += arr_17 [i_1] [i_1] [i_0];
                var_19 += (min(((~(max(11, 7)))), 28));
                var_20 &= arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
            }
        }
    }
    var_21 = ((min(18446744073709551615, (0 <= var_9))));
    var_22 = var_3;
    var_23 &= (min((max((max(var_3, var_7)), ((max(var_8, var_4))))), var_9));
    #pragma endscop
}
