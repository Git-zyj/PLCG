/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_19 = ((!(min(var_1, var_17))));
        arr_3 [i_0] = (max((arr_1 [i_0]), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = (arr_7 [i_0] [i_1 - 1] [i_0]);

                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        var_21 -= var_16;
                        var_22 = (min(var_22, 7237087543615711479));
                        var_23 += var_3;
                    }
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_24 = (arr_0 [i_0] [i_4]);
                        var_25 *= var_6;
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_26 = (arr_7 [6] [i_1] [i_0]);
                        var_27 = ((!(arr_11 [i_1 + 2] [i_0] [i_2 + 2])));
                        var_28 ^= var_8;
                        arr_15 [8] |= var_13;
                        var_29 = (max(var_29, var_18));
                    }
                }
            }
        }
    }
    var_30 = (!1);
    var_31 = var_4;
    #pragma endscop
}
