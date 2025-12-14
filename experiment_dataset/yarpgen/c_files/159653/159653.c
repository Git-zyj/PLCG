/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_2;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = ((((1 ? 1 : 202)) << 1));
        arr_4 [i_0] = (var_2 | var_4);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 *= ((-(arr_7 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((var_14 ? (arr_12 [i_0]) : (arr_11 [18] [i_1] [i_2] [i_1] [i_4]))))));
                                var_20 += (arr_11 [8] [10] [i_2] [i_3] [i_4]);
                                var_21 = var_13;
                                var_22 = (arr_2 [i_4]);
                                arr_15 [11] [i_2] [i_2] = 1;
                            }
                        }
                    }
                }
            }
        }
        var_23 += ((((2477026257 ? var_0 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [3] [i_0]))) & var_0));
        var_24 = ((2353809441 ? 0 : 7));
    }
    var_25 = (max(var_25, ((min(1006632960, 1)))));
    #pragma endscop
}
