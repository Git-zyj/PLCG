/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177216
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((47171 ? var_0 : var_7)))), 1109298214));
    var_19 = var_14;
    var_20 = (((((min(26132, 18365)) + ((var_6 ? var_14 : 255))))));

    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((222 ? var_2 : var_12)))) ? (((~var_0) ? ((var_17 ? var_9 : 1)) : -54313)) : ((((var_3 ? var_16 : var_4))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_21 = (((((max(6066, var_14)))) < var_10));
                    var_22 = var_2;
                    var_23 = (((((36962 ? 65535 : 63649))) ? var_3 : (~var_4)));
                }
            }
        }
        var_24 = var_3;
    }
    #pragma endscop
}
