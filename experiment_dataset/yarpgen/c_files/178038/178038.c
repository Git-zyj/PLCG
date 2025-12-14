/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_16 -= ((((var_13 ^ 511) >= 511)));
                var_17 = ((-(((9576018083784861315 && (((var_4 ? var_4 : (arr_1 [i_0] [9])))))))));
                arr_5 [i_1] [i_1] [0] = ((!(arr_1 [i_0 - 1] [i_0 - 1])));
                var_18 = ((8870725989924690301 ? (arr_4 [i_0 - 1] [i_0 - 1]) : (max((arr_4 [i_0 - 1] [i_0 - 1]), (arr_4 [i_0 - 1] [i_0 - 1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {

                            for (int i_6 = 0; i_6 < 23;i_6 += 1)
                            {
                                arr_18 [i_2] [i_2] [i_2] = (arr_17 [i_2] [i_2] [i_4] [i_5] [i_6] [22] [7]);
                                arr_19 [i_2] [7] [i_2] [1] [i_2] = var_4;
                            }
                            for (int i_7 = 0; i_7 < 23;i_7 += 1)
                            {
                                var_19 = (min(var_19, ((1 >= ((~(((arr_9 [i_2] [i_3] [13]) % (arr_12 [i_5] [i_5] [i_5])))))))));
                                var_20 = 26891;
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 23;i_8 += 1)
                            {
                                arr_26 [i_2] [4] [i_5] [4] [i_8] [4] = ((~((17033 ? 17435 : var_5))));
                                arr_27 [15] = (arr_22 [i_2] [i_3] [i_3] [i_2] [i_8]);
                            }
                            arr_28 [i_5] [i_4] [17] [i_2] [i_2] [i_2] = (-((-(arr_13 [i_2] [i_2 - 1] [i_2]))));
                            var_21 -= (((min((arr_20 [i_2] [12] [22]), 1)) * (((var_9 == (~3740487457))))));
                        }
                    }
                }
                arr_29 [i_2] [i_2] [i_2] = (max(((((!(arr_13 [i_2] [i_2] [i_2]))) ? (var_13 / 13556157163858786407) : (((-1 ? 127 : 0))))), 0));
                arr_30 [i_2] [i_3] [i_3] = (((arr_6 [i_2 - 1]) == (((-(arr_9 [i_3] [14] [i_2 - 1]))))));
                var_22 = (min(var_22, (var_13 * -1)));
            }
        }
    }
    #pragma endscop
}
