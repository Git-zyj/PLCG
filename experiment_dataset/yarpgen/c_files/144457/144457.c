/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144457
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += (max(var_13, (5417611834396224005 > 224)));
    var_21 = (46 * var_15);

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_22 += (arr_0 [i_0]);
        var_23 = (max(((var_15 ? var_11 : (arr_0 [i_0]))), 46));
        var_24 = 210;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (((((((-1141502205 ? var_18 : 25))))) - -7293435526531059285));
                    var_25 = (max((~7212), (((max(220, 497828845))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1 + 3] [i_2] [i_1 + 3] [i_3] = (!2305274509);
                        var_26 = (max(var_26, -44441));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        var_27 = var_1;
        var_28 = (arr_2 [0]);
    }
    #pragma endscop
}
