/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((~238) ? -1964651630365861416 : (~2753948136)))) ? -429361229 : 2590035249405480286));
    var_20 ^= 1460160911;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (~1541019160);
                var_22 = ((((((((-1564923759 ? 147 : -6999702477433540274))) ? ((3 ? 220 : 166)) : -3))) ? (((83 ? 2138064486 : (~29)))) : (((166 ? 3 : 218)))));
            }
        }
    }
    #pragma endscop
}
