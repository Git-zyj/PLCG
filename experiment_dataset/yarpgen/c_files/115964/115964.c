/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 956859607186462626;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, 1));
                    var_12 ^= var_5;
                }
            }
        }
    }
    var_13 = (min((((var_3 ? (var_9 <= var_4) : var_0))), 21820));
    #pragma endscop
}
