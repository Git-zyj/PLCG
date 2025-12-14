/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 9223372036854775805;
    var_15 = 918581773029245791;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 *= (((max((arr_1 [i_1]), (min((arr_2 [i_0]), (arr_3 [i_0]))))) < (arr_2 [i_0])));
                var_17 = (max(var_17, (((~(arr_2 [i_1 + 1]))))));
            }
        }
    }
    var_18 = max(var_2, var_9);
    #pragma endscop
}
