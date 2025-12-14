/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134345
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (((((!(((arr_2 [i_1]) || (arr_2 [13])))))) & var_12));
                var_15 = (min(((max((arr_0 [i_1]), -244483123))), var_10));
            }
        }
    }
    var_16 = (max(var_16, var_11));
    var_17 ^= (~var_0);
    #pragma endscop
}
