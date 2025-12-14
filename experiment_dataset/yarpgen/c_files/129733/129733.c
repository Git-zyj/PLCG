/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129733
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((((10983629150914000528 - 9223372036854775807) ? 9223372036854775807 : -1337)) << ((((((~((var_9 ? 0 : var_6)))) + 8)) - 7))));
    var_20 = (((((max(var_9, var_9)))) ? var_12 : var_18));
    var_21 = (min(var_21, 5492639499806722312));
    var_22 = (min(var_22, (((-1368 ? (((var_10 * -5492639499806722330) | var_17)) : var_17)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_23 = (arr_0 [i_0 + 1]);
        var_24 &= (arr_0 [i_0 + 2]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        var_25 = (min(var_25, ((((((((5492639499806722327 & (arr_4 [9] [i_2])))) ? (((arr_2 [i_1] [11]) + -1337)) : (((max(1, 1)))))) * (((((min(1, -5492639499806722330))) ? (arr_4 [i_1 + 1] [4]) : (-1326 % 5492639499806722330)))))))));
                        var_26 = (arr_1 [i_0] [i_1 + 1]);
                        var_27 = (arr_4 [i_0] [i_1]);
                    }
                    var_28 = (((arr_10 [i_0 + 2]) / (((arr_10 [i_0 + 2]) ? 1 : (arr_10 [i_0 - 1])))));
                }
            }
        }
    }
    #pragma endscop
}
