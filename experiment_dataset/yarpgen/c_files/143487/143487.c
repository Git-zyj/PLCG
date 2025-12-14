/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_20 ^= var_3;
                        var_21 = (((((var_16 * ((var_0 ? var_0 : var_2))))) ? (((var_11 / var_12) ? ((51450 ? 15872 : var_9)) : var_8)) : -var_13));
                        var_22 += ((((max(var_17, (!3218780195)))) ? 33301 : var_15));
                        var_23 = (min(var_23, (((32509 ? 3905966223566173272 : 1)))));
                    }
                    arr_12 [12] = ((((min(var_14, 6336))) << (((((arr_2 [i_0 - 1]) * 39372)) - 2601214273))));
                }
            }
        }
    }
    var_24 ^= var_7;
    var_25 += (((var_2 + var_6) ? (max(((max(1, var_19))), ((var_18 ? var_8 : var_5)))) : -10));
    var_26 *= -1;
    #pragma endscop
}
