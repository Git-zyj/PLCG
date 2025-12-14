/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = (min(var_17, (((((max(var_16, var_10))) ? (((max(var_4, var_4)))) : (max(var_5, var_7)))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 4] |= (max((((max(var_13, var_7)))), (max(var_16, var_12))));
                    var_18 = (min(var_18, (((max(var_16, var_0))))));

                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        var_19 = ((-((max(((max(var_2, var_13))), (max(var_14, var_10)))))));
                        var_20 *= -var_2;
                        var_21 = ((((var_12 ? var_11 : var_9)) % (max(((var_1 ? var_4 : var_9)), var_9))));
                        var_22 = var_10;
                        var_23 = (max(var_23, (((((max(var_3, var_7))) ? var_2 : ((max(var_2, var_3))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 14;i_4 += 1)
                    {
                        var_24 = (min(var_24, ((((((var_9 ? var_0 : var_12))) ? (((var_14 + 2147483647) << (var_3 - 17))) : var_4)))));
                        var_25 = (max(var_25, -var_16));
                    }
                    for (int i_5 = 3; i_5 < 15;i_5 += 1)
                    {
                        var_26 = (~((var_1 ? var_1 : var_10)));
                        var_27 = ((-var_16 << ((((var_7 ? var_5 : (var_10 != var_11))) - 17593159602066924703))));
                        var_28 = (max(var_28, (((((max((max(var_6, var_10)), ((max(var_4, var_11)))))) ? (max(-var_14, ((max(var_8, var_10))))) : var_3)))));
                    }
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_29 -= ((((max(var_11, var_4))) ? (((max((max(var_10, var_0)), var_4)))) : -var_9));
                        var_30 = (!((max(var_10, var_5))));
                        var_31 |= ((var_2 ? (~var_14) : ((var_3 ? var_1 : (max(10, 72))))));
                        var_32 -= ((~((max(var_2, var_0)))));
                        arr_19 [i_6] [i_2] [i_1] [i_1] [i_0 + 1] = (max((max((max(var_10, var_5)), ((max(var_13, var_11))))), var_12));
                    }
                }
            }
        }
        arr_20 [i_0 - 1] = (max(((max(var_11, (max(var_7, var_8))))), (((((var_16 ? var_10 : var_7))) ? (max(var_15, var_13)) : ((max(4294967272, 32754)))))));
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 14;i_8 += 1)
        {
            {
                var_33 |= (var_14 * var_15);
                var_34 = var_3;
            }
        }
    }
    var_35 = var_12;
    #pragma endscop
}
