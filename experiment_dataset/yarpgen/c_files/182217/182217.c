/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, -64));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((3350 * (arr_2 [i_1 - 1]))) >= (arr_2 [i_1 + 1]));
                var_11 ^= (arr_3 [i_0] [i_1]);
            }
        }
    }
    var_12 ^= var_4;
    #pragma endscop
}
