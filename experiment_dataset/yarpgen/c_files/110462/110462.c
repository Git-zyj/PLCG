/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 411623862927104847;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_17 += ((~((-97 ? ((((arr_3 [i_0]) ? 65535 : 98))) : (min((arr_4 [i_0] [i_0] [i_1]), var_10))))));
                arr_7 [i_0] [i_0] [i_1] = (arr_6 [i_0]);
            }
        }
    }
    var_18 *= var_5;
    var_19 = 13;
    #pragma endscop
}
