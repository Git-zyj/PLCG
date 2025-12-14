/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134719
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 281474976710655;
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 *= -1;
                arr_7 [i_0] = (min((arr_4 [i_1] [i_1] [i_0]), (arr_4 [i_0 + 1] [i_0 + 1] [i_1 - 1])));
            }
        }
    }
    #pragma endscop
}
