/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = (min((arr_3 [i_1]), (((arr_1 [i_1]) ? ((1 / (arr_2 [i_2] [i_0]))) : (0 / var_10)))));
                    var_14 = var_4;
                    var_15 = (max(var_15, ((((-((8263928861407746650 ? (arr_6 [14] [14]) : 1)))) < ((((9219 || -3654) && (arr_5 [8] [8]))))))));
                }
            }
        }

        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            arr_9 [i_3] [i_0] = (arr_2 [i_0] [i_0]);
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        {
                            var_16 = (min(var_16, ((((1 % 1) && (((((-(arr_3 [i_5]))) | (arr_5 [i_5] [i_5])))))))));
                            var_17 += ((((246 < (max(var_11, var_0)))) ? ((max(var_3, (((arr_11 [13] [13]) || (arr_15 [i_3] [i_5] [i_4] [i_3] [18] [i_0])))))) : (min(((var_9 ? 15 : (arr_3 [i_5]))), 393777855))));
                        }
                    }
                }
            }
            arr_17 [i_3] [i_0] = (arr_12 [i_3] [i_3] [i_0] [i_0]);

            /* vectorizable */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                var_18 = var_2;
                arr_20 [i_7] [i_0] [i_0] [i_0] = var_10;
            }
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                var_19 = (min((min((arr_15 [i_3 - 1] [i_3] [i_3 + 1] [i_3] [i_3] [i_3 - 2]), -var_12)), (((var_9 ? (arr_15 [i_8] [i_8] [i_8] [i_3] [i_0] [i_0]) : (1 >> 1))))));
                var_20 = var_0;
                var_21 = ((((~(arr_3 [i_8])))) ? ((var_11 ? 29328 : var_0)) : ((((arr_6 [i_8] [i_8]) << (((arr_8 [i_8] [i_0]) - 12545))))));
                var_22 = (max(25616, ((-((9222 ? (arr_4 [i_8] [i_0]) : 12))))));
            }
        }
    }
    var_23 = var_1;
    var_24 = ((((((max(var_9, 1))))) && var_9));
    #pragma endscop
}
