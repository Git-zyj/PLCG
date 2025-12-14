/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_12 -= ((((min(-184143301, 417180623))) ? (((-2388736626526808399 ? 417180634 : -1818188450))) : ((1 ? 743318184 : (((1 ? 2505 : 22714)))))));
                var_13 = ((((1818188441 ? 5414200115886525785 : 0)) << (((((min(-1186089496, 517282316)) + 1186089544)) - 48))));
            }
        }
    }
    var_14 -= ((((((14597126633605170895 ? 44786 : 536870911)))) ? 1 : ((((((-1818188454 + 2147483647) >> 0))) ? (3551649112 >> 0) : var_0))));
    var_15 = ((var_11 >> (((min(1, 743318203)) >> ((min(0, 1)))))));
    var_16 = (((((((5638735649979978331 ? 1 : 2869836837))) ? 65535 : var_11)) << (((-22720 + 9223372036854775807) >> ((((22714 << (65534 - 65524))) - 23259075))))));
    #pragma endscop
}
