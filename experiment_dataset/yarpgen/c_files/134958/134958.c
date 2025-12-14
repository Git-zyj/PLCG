/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_0;

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        var_20 = (((var_0 * var_1) ? var_4 : (((max(var_3, var_10)) * var_4))));
        var_21 = (((max((((var_1 ? var_7 : var_13))), (max(var_4, var_11)))) / var_4));
        var_22 = (((var_0 - var_14) - ((max(var_0, (var_15 && var_14))))));
        var_23 = ((159 ? -2081878553 : 28643));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_24 = (min(var_24, (max(var_4, ((((-10686 ? 248 : -1559)) * var_18))))));
        var_25 = (((((var_13 ? var_8 : var_7))) ? ((var_4 ? var_5 : var_0)) : (var_12 < var_14)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 9;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 10;i_3 += 1)
            {
                {
                    var_26 = (max((((-426077098 ? 56711 : -123667956))), (var_1 * var_12)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            {
                                arr_17 [2] [i_2] [i_3] [i_4] [i_3] = ((159 ? (((max(56711, 1)))) : -3595570819453524843));
                                var_27 |= var_2;
                                arr_18 [i_1] [i_3] [i_1] [6] [10] = ((((((var_4 ? var_8 : var_2)))) ? (max(((var_4 ? var_9 : var_17)), (((var_13 ? var_4 : var_0))))) : ((((((min(var_13, var_9))) || ((max(var_4, var_15)))))))));
                            }
                        }
                    }
                    var_28 = var_1;
                }
            }
        }
    }
    #pragma endscop
}
