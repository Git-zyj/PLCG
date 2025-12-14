/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((max(var_15, ((1 ? 24135 : 48248)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = 31;
                var_22 = (max(((((1287775950 && 31) > ((-1018297822858982322 ? 1623453505599118119 : var_5))))), (~18088)));
                var_23 *= (((max((max(6673330520612507558, 2018978960)), (((6673330520612507558 ? 8594 : var_6))))) >= (((0 ? (min(221, 3007191336)) : (!1623453505599118119))))));
                var_24 = (((min(var_9, (0 || 5765957486588350830)))) == (min((var_5 && 565677278), (35 + 5765957486588350830))));
            }
        }
    }
    #pragma endscop
}
