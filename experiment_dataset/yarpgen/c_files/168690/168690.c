/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_16 = ((~((~(((arr_4 [i_4] [i_1] [i_2]) ? 33 : (arr_0 [i_0])))))));
                                var_17 = (!-1173472928);
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_18 = (arr_10 [i_1] [i_5] [i_2] [i_1] [i_1]);
                        arr_16 [i_0] [5] [i_5] [i_2] [i_2] [i_5] = (min(((-10842 ? (arr_15 [i_5] [i_1] [i_2]) : -966157356993053606)), 9));
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_19 |= (((arr_6 [i_6] [i_1]) ? (max(9667837821225153720, var_15)) : ((~(min(var_7, -10842))))));
                        arr_19 [i_0] [i_0] [i_0] [17] = ((-((((((arr_6 [i_1] [1]) ? (arr_7 [i_0] [0] [i_2] [i_6]) : var_4))) ? ((min(2492803212900359666, (arr_11 [17] [10] [17] [17] [i_6] [i_6])))) : 18446744073709551615))));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        arr_23 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7] = (var_2 ^ var_12);
                        var_20 = (var_7 <= var_4);
                        var_21 *= ((var_14 & ((var_3 ? var_6 : 0))));
                        var_22 = (min(var_22, (((-(65527 <= var_14))))));
                        var_23 &= (var_3 ? var_7 : (1116892707587883008 % 157));
                    }
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        var_24 = ((120 != ((~(arr_0 [i_1])))));
                        var_25 = (min(var_25, 16847827666932034719));
                    }
                }
            }
        }
    }
    var_26 = var_8;
    #pragma endscop
}
