/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_15 = (((((arr_4 [i_0]) ? (arr_4 [i_0]) : var_12)) ^ ((~(arr_4 [i_0])))));
                arr_6 [i_1] = (min(((((arr_2 [i_1]) ? (arr_2 [i_0]) : (arr_2 [i_0])))), (arr_5 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
