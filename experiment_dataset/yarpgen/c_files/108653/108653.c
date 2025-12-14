/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((0 ? 8 : ((((max(var_6, -8632811740740610968))) ? -63 : 65535))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((1 ? 1102760828 : 1));
                var_18 *= (17 + 6);
            }
        }
    }
    #pragma endscop
}
