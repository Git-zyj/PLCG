/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = arr_4 [i_0] [i_1] [i_1];
                arr_5 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0])));
                var_15 = (((~var_5) ? (arr_2 [14] [i_1] [i_1]) : (((((arr_1 [i_0]) != (arr_4 [i_0] [i_0] [i_0])))))));
            }
        }
    }
    var_16 ^= (((((var_6 & 15650455168574423411) ? var_10 : (((15958354843204010428 ? 23 : 23))))) < var_1));
    var_17 = ((-(var_1 | var_5)));
    #pragma endscop
}
