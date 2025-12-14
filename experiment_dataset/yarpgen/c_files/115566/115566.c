/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = ((min(-763074807512950770, (min(-4134253405987364436, var_16)))));
                    var_19 = var_15;
                    var_20 = ((((max((var_14 ^ var_10), (max(var_10, 8))))) ? ((((((-4179650772499888118 ? -4179650772499888118 : var_7)) + 9223372036854775807)) >> (var_16 & var_8))) : (max((~195), var_12))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            {
                var_21 = (((~var_2) | 3202435193694212891));
                var_22 = (max(((4893994449404587157 ? 15 : -844466506025517262)), (var_1 * 230)));
            }
        }
    }
    var_23 = (max(((-var_8 ? (var_9 != var_15) : var_0)), (max((var_17 + var_0), var_3))));
    #pragma endscop
}
