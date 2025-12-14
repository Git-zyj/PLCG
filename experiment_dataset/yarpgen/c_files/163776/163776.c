/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -1621651457;
    var_17 = var_6;
    var_18 -= ((((var_11 != var_7) <= 9420)) ? var_2 : ((var_11 ^ (~-47))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_19 = ((-((var_8 ? ((85517472 ? 4070286244 : 172)) : (1621651448 > var_11)))));
                    arr_6 [i_1] = (((arr_2 [i_1]) % ((((~105) ? ((((arr_0 [i_0] [i_2 + 1]) || (arr_2 [i_0])))) : (((arr_3 [i_0] [i_1] [i_2]) % 1621651452)))))));
                    var_20 -= (((4070286260 && 9292328201312851355) == ((var_8 ? (arr_5 [i_0] [0] [i_2 + 1]) : var_5))));
                }
            }
        }
    }
    #pragma endscop
}
