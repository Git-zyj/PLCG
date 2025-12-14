/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1042358417;
    var_16 = (var_0 >= var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((~((max(var_14, var_8)))));
                var_17 = ((-(arr_2 [i_0] [i_1 + 1])));
            }
        }
    }
    var_18 ^= var_2;
    #pragma endscop
}
