/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = (max((((-((13001755403290977193 ? 9082041766593990387 : var_2))))), 16889629840396224371));
    var_14 = 16889629840396224368;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = 1557114233313327245;
                var_16 = (min(var_16, 9215059470185877503));
                var_17 = ((max((max(17129803850558592773, 18446744073709551591), 17129803850558592773))));
            }
        }
    }
    #pragma endscop
}
