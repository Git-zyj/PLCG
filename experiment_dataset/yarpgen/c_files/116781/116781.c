/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_6 [10] [i_1] [i_2] [i_2] = ((((max(((27687 ? 2521719604578127200 : 28)), 28))) ? 32766 : ((((((var_18 ? var_0 : var_5))) || (((var_18 ? var_17 : var_17))))))));

                    /* vectorizable */
                    for (int i_3 = 4; i_3 < 14;i_3 += 1)
                    {
                        var_19 -= (-32 - var_12);
                        arr_10 [i_2] [i_1] = ((((32770 ? var_5 : (arr_3 [1]))) | (!66)));
                        var_20 *= (((4094533610985465705 << (((arr_5 [13] [i_2] [7] [i_0]) - 44486)))) << ((((var_15 ? -29 : 72)) + 57)));
                    }
                    var_21 = (min(var_21, (((1684072225934601386 ? -98 : 62331)))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_22 = ((!(((arr_12 [i_0] [i_2] [i_0]) < ((var_8 ? (arr_5 [i_0] [4] [i_0] [i_0]) : -28))))));
                                arr_16 [i_0] [i_4] [i_2] [i_2] [i_2] [i_4] = var_17;
                            }
                        }
                    }
                    var_23 = (!65051);
                }
            }
        }
    }
    var_24 = ((var_11 ^ (min((~var_11), var_8))));
    var_25 = var_7;
    #pragma endscop
}
