/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0 + 1] [i_0 + 1] = ((((((arr_3 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_4 [i_0 - 1])))) ? (max(var_3, ((-(arr_1 [i_0 + 1]))))) : -1249866267));
                var_20 += var_14;
            }
        }
    }
    #pragma endscop
}
