/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 = (min(((var_10 & ((var_9 ? var_10 : var_11)))), var_12));
    var_22 = ((var_14 ? var_13 : var_15));
    var_23 = ((((var_11 ? var_11 : (((var_2 ? var_6 : var_11))))) > (((((max(var_8, var_19))) ? var_15 : (var_3 | var_15))))));

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_24 ^= ((((min((arr_1 [i_0 + 1] [i_0 + 1]), var_7))) ? var_6 : (((((arr_0 [14]) == (((1 ? var_1 : var_1)))))))));

        /* vectorizable */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        var_25 = (arr_2 [i_0]);

                        for (int i_4 = 1; i_4 < 21;i_4 += 1)
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = -1;
                            var_26 -= ((((((arr_10 [i_4] [1] [i_2] [i_1] [i_0]) ? (arr_0 [i_2]) : (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] [10])))) ? 25589 : ((1 ? (arr_5 [i_0 + 1] [i_1 - 2] [i_0 + 1]) : (arr_1 [i_0] [i_1])))));
                            arr_13 [i_0] [1] [18] [i_2] [i_4] = var_14;
                            var_27 *= (arr_3 [i_3] [i_3]);
                        }
                        var_28 = (((arr_5 [i_0] [i_1] [i_3]) ? 1 : ((561055762887163794 - (arr_3 [i_2] [i_3])))));
                    }
                }
            }
            var_29 = var_7;
            var_30 *= (((arr_8 [i_1 - 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_6 [i_1 + 1] [i_1 - 1] [i_0 + 1] [i_0]) : (arr_6 [i_1 - 2] [i_1 - 1] [i_0 + 1] [i_0])));
            var_31 = (((arr_2 [i_0]) & (((arr_5 [10] [20] [i_0]) ^ (arr_4 [i_0] [1] [i_1])))));
            var_32 = (((arr_7 [i_0 + 1] [i_1 - 2]) ? var_0 : (arr_10 [i_0] [i_1 - 2] [i_0 + 1] [15] [i_1 + 1])));
        }
    }
    #pragma endscop
}
