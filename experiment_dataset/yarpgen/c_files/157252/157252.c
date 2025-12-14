/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157252
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_1] [i_0] = -86;
                    var_15 ^= var_11;
                    arr_9 [i_1] [i_1] [i_1] [i_2] = ((!((((var_4 + 2147483647) >> (var_6 + 1954682866))))));
                }
            }
        }
    }
    #pragma endscop
}
