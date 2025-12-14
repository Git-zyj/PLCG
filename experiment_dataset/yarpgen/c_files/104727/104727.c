/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((((min(var_6, var_3))) ? (!var_7) : (min(var_3, var_5)))), var_3));
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = max((arr_0 [i_0]), (min((arr_0 [i_0]), (arr_5 [i_1] [i_0] [i_0]))));
                var_18 = ((+(((arr_2 [i_0]) % ((max((arr_1 [i_0]), (arr_3 [i_0] [i_0]))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                arr_10 [i_2] = 1;

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_19 = (max((min((arr_16 [i_2] [i_2 + 1] [i_4]), (max((arr_9 [i_2] [i_2]), (arr_11 [i_2] [i_4] [21] [i_2]))))), ((max(((min((arr_8 [6]), (arr_9 [21] [i_2])))), (max((arr_12 [8] [i_2] [i_6 + 2]), (arr_6 [i_5] [i_3]))))))));
                                var_20 = (arr_12 [3] [i_2] [i_3]);
                            }
                        }
                    }
                    var_21 = (min(var_21, (((!((max((min((arr_11 [i_3] [20] [i_3] [i_3]), (arr_7 [17]))), (arr_13 [i_4] [i_3] [i_4] [i_3] [i_2])))))))));
                }
                arr_17 [i_2] = (min((((18446744073709551615 == 9) ? (arr_16 [i_2] [i_2 + 1] [i_2 - 1]) : (max((arr_14 [i_2] [i_2] [i_2] [12] [i_3]), (arr_15 [i_2]))))), (max((arr_7 [i_2]), (arr_16 [i_2] [i_3] [i_2])))));
                arr_18 [i_2] [i_2] [i_3] = ((((((arr_6 [i_2] [i_2]) ? (((arr_6 [i_2] [i_3]) + (arr_8 [i_3]))) : (((arr_6 [2] [i_3]) & (arr_6 [i_2] [i_2])))))) ? ((((arr_12 [i_2 - 1] [i_2] [i_2 - 1]) > (arr_12 [i_2 + 1] [i_2] [i_2 + 1])))) : ((((arr_15 [i_2]) || ((!(arr_12 [i_3] [i_2] [i_3]))))))));
            }
        }
    }
    var_22 = (min((max((min(18446744073709551606, 44)), 1)), ((var_2 ? (((max(var_14, var_9)))) : (var_3 & var_8)))));
    #pragma endscop
}
