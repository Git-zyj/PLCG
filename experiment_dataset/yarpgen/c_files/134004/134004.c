/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134004
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((max((arr_3 [i_0 + 1] [i_1 - 4]), 0)), 4294967295));
                var_16 = (arr_4 [i_0 + 1]);
                arr_7 [i_0 + 1] [i_0] = (((((-var_1 + 9223372036854775807) << (((~4) - 4294967291)))) != var_14));
            }
        }
    }
    #pragma endscop
}
