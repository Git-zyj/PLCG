/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((((min(var_12, var_7))) ? ((var_10 >> (var_2 - 1200849121))) : ((var_9 ? var_3 : var_9))))) ? var_14 : (((var_7 ? ((var_1 ? var_11 : var_8)) : ((0 ? (-2147483647 - 1) : 4294967295)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_16 -= var_7;
                    var_17 = ((((max((min(var_9, var_7)), (max(var_4, var_7))))) ? ((var_6 ? (max(var_0, var_9)) : (((var_7 ? var_11 : var_6))))) : (((((min(var_4, var_11))) ? ((14336 ? 2147483647 : 0)) : var_13)))));

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] = (((((var_13 ? var_12 : var_8))) ? var_0 : (var_1 - var_7)));
                        var_18 = (min(var_18, ((((var_13 % var_12) ? ((var_4 ? var_13 : var_3)) : ((var_7 ? var_9 : var_7)))))));
                        var_19 -= (var_12 ? ((var_11 ? var_14 : var_1)) : var_3);
                        var_20 *= var_0;
                    }
                    arr_12 [8] [16] [i_1] = (min((((var_4 && var_7) ? var_0 : ((var_14 ? var_5 : var_9)))), (((((var_9 ? var_0 : var_10)) % (((-602676675 ? 1 : -13460))))))));
                }
            }
        }
    }
    var_21 *= (((((((-14347 ? 1 : 18446744073709551594))) ? ((var_2 ? var_12 : var_5)) : ((min(var_11, var_12))))) - var_3));
    #pragma endscop
}
