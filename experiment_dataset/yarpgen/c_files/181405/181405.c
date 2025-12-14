/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_4 [2] &= (var_11 + var_7);
        var_13 = (((((var_6 & (~var_9)))) ? (((((var_11 >> (var_2 - 245)))) ? (var_4 ^ var_1) : (((52292 ? 52292 : 63083))))) : (((var_6 ? ((var_2 << (var_7 - 10776198576872402504))) : var_8)))));
    }

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_9 [6] [i_1] = ((((((var_7 ? var_7 : var_11)) ^ (~var_0))) << (var_9 - 6627)));
        var_14 = var_12;
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_13 [i_2] = ((-((var_7 / (((var_11 ? var_10 : var_9)))))));
        arr_14 [i_2] [i_2] = var_0;
        var_15 = (min(var_15, var_0));

        for (int i_3 = 3; i_3 < 16;i_3 += 1)
        {
            var_16 += var_1;

            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        {
                            arr_26 [i_3] [i_5] [12] [i_3] [i_3] = ((((var_3 != (var_9 * var_3))) ? (((var_5 > ((var_11 ? var_12 : var_10))))) : ((var_9 ^ (~var_3)))));
                            arr_27 [i_3] [1] = (((((var_1 ? var_12 : var_11))) && (~var_4)));
                            arr_28 [i_2] [7] [i_3] [i_2] [i_2] [7] = ((~((((var_0 >> (var_1 - 2431484977))) & ((var_0 ? var_3 : var_11))))));
                            var_17 += ((-(!var_9)));
                            var_18 = ((~((var_0 ? var_7 : var_12))));
                        }
                    }
                }
                arr_29 [14] [6] [i_4] |= var_0;
            }
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                var_19 -= ((+(((var_7 > var_2) ? (var_9 ^ var_2) : var_11))));
                var_20 = (max(var_20, ((((var_1 && var_8) ? ((var_4 ? var_5 : var_5)) : (!var_5))))));
                arr_32 [i_2] [i_3] [i_3 - 1] [i_2] &= ((-54 + 2147483647) << (63085 - 63085));
            }
        }
    }
    var_21 = var_8;
    #pragma endscop
}
