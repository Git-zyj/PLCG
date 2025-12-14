/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_16 *= (((((((~(arr_1 [i_1])))) ? 11909516263503638678 : (((-(arr_2 [i_0] [i_0])))))) > (arr_2 [i_0] [i_0])));
                var_17 = (!1);
            }
        }
    }
    var_18 = (((11909516263503638678 <= var_0) >> (((((var_0 / -959713515) - var_5)) + 53418))));
    #pragma endscop
}
