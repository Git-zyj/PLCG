/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((!var_11), ((((min(var_17, var_14))) ? var_9 : var_12))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_20 &= 16965;

                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_21 = 255;

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            arr_11 [1] [i_3] [i_2] [i_1] [i_0] = (min(var_8, (arr_3 [i_3 - 2] [i_0 - 1])));
                            arr_12 [i_2] = 1;
                        }
                        arr_13 [i_0] [i_1] [i_2] [4] [i_2] [4] = min((max((arr_0 [2]), ((18446744073709551615 ? 22 : 8292)))), var_14);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_22 = ((123 ? 15740 : 18446744073709551615));
                        arr_17 [i_0 - 1] [i_0] [4] [i_0 + 2] [i_2] [i_0 + 2] = ((~((5359000006254228267 ? 18446744073709551615 : 1))));
                    }
                    arr_18 [i_2] [i_1] [i_1] = (max(18020, 89));
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_23 = 7016486954186222231;
        var_24 = (min((max(18446744073709551594, (max(-40, var_12)))), -11407));
        var_25 += (((-((~(arr_19 [i_6]))))));
        var_26 += (arr_19 [i_6]);
    }
    #pragma endscop
}
