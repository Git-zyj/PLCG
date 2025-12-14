/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = max((max((((948675329 ? var_1 : var_11))), (var_4 * var_5))), ((-(min(var_0, var_2)))));
    var_13 = ((var_11 ? -var_1 : ((3560057907065469154 ? 3605405139310060510 : 3560057907065469127))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = ((((((var_3 * (-32767 - 1)))) ? (max(var_9, var_11)) : -3560057907065469144)));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_1] [i_2] [i_0] = (((!(0 & var_3))));
                    var_15 = 18446744073709551595;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    var_16 -= var_7;
                    var_17 = var_4;
                    var_18 += (!(((((max(var_6, 3560057907065469127))) ? -422406045431413574 : 6968810551291409585))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            var_19 = ((((min(var_11, (arr_0 [i_1])))) || (!3560057907065469164)));
                            var_20 = (min(((var_0 ? ((min(var_0, var_11))) : var_2)), (!var_9)));
                            arr_16 [i_5] [i_5] [i_5] [i_4] [i_1] [i_0] = (((arr_11 [1] [1] [i_5]) ? -var_0 : ((((min(var_3, var_4))) ? -465 : (arr_13 [i_0] [i_1] [i_4] [13])))));
                        }
                    }
                }
                arr_17 [i_0] [i_0] [i_0] &= ((var_0 | (min(3560057907065469145, -3560057907065469127))));
                arr_18 [7] [7] = (-422406045431413574 | var_10);
            }
        }
    }
    var_21 = (max(var_21, ((max((((0 | var_4) ? (max(var_3, var_0)) : var_4)), (var_8 * 656081375))))));
    var_22 = var_4;
    #pragma endscop
}
