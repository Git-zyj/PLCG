/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = var_8;
        var_20 *= (8191 % 1);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_21 ^= (!0);
                        var_22 *= (((0 ? 1 : 128)));
                        var_23 = 1;
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_24 = var_10;
                                var_25 = (min(var_25, (((1433563186077940773 ? 1 : 1)))));
                                arr_15 [4] [i_5] [i_5] [4] [i_5] [i_4] [8] |= var_9;
                            }
                        }
                    }
                    var_26 = 1;
                    var_27 = (24 ^ var_11);
                    var_28 = (((((1 ? var_0 : var_4))) != 1));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    {
                        arr_24 [i_0] [i_0] [12] [i_7] = -575334852396580864;
                        arr_25 [7] [i_6] [1] [i_6] [3] [i_7] = ((1 ? 1 : 65526));
                        var_29 = ((var_18 ? var_0 : var_7));
                    }
                }
            }
        }
        var_30 = (max(var_30, ((((((0 ? var_1 : 234))) ? (~1) : ((var_13 ? 8176 : 1)))))));
    }
    var_31 &= ((~((((!1) <= (!1))))));
    #pragma endscop
}
