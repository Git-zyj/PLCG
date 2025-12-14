/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((var_16 ? (min(var_5, (~986493130))) : var_17));
    var_21 = var_18;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 = 986493130;
        arr_4 [i_0] = ((18446744073709551615 ? 47195 : 18313));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 4; i_3 < 14;i_3 += 1)
            {
                {
                    var_23 *= var_14;
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_24 |= (var_15 + 986493118);
                                var_25 = (((((var_8 ? var_10 : 0))) ? ((((((!(arr_6 [i_4])))) ^ ((min(var_7, var_19)))))) : var_13));
                                arr_21 [i_2] = (((50171 & 3643184770) ? (((min(var_7, var_1)))) : (((!(arr_10 [i_2] [i_4 + 1] [i_2]))))));
                            }
                        }
                    }
                    arr_22 [i_2] = (((((arr_12 [i_3 - 4] [i_3 - 2]) + 2147483647)) << (!var_17)));
                    arr_23 [i_2] = ((12394 ^ ((((-8511 ? 38 : var_10))))));
                }
            }
        }
        arr_24 [i_1] [i_1] = ((((((var_9 ? var_6 : var_13)) ? ((min(3308474165, var_13))) : (min(8602375603304598495, 8602375603304598495))))));
        arr_25 [i_1] |= 30952;
    }
    #pragma endscop
}
