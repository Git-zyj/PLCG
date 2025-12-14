/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((~(~13447116988031355372))), (((-(~var_2))))));
    var_20 = (max(var_2, ((((var_2 ? var_3 : var_10)) << ((((155 ? 2147483631 : var_8)) - 2147483594))))));
    var_21 = (33554431 >= 28350);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    var_22 &= (((((6213 ? 32212254720 : 1123368387))) ? (((((~(arr_1 [i_0] [i_1])))) ? ((var_4 ? 0 : var_17)) : -962088237)) : ((~(min((arr_3 [i_2] [i_0] [i_0]), 0))))));
                    arr_9 [10] [i_0] [10] [i_2] = (min((((!(max(1, 1))))), (arr_5 [i_0])));
                    var_23 = var_0;
                    arr_10 [i_0] [i_1] [i_2 - 1] = (max(var_10, (((!9264767330676464717) ? ((10283754188625667649 ? var_18 : 16322643258741707642)) : (!3667746821)))));
                }
            }
        }
    }
    var_24 |= ((((-840164772 ? (~939524096) : (!var_11))) & var_16));
    #pragma endscop
}
