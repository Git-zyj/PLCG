/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 33554432;
    var_11 ^= var_6;
    var_12 ^= ((-1 ? -46827 : (!var_7)));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = 900787208;
                    arr_8 [i_0] [i_0] [i_1] [i_2] = (+((((min((arr_1 [10] [13]), 16383)) >= (arr_1 [i_0] [i_0 - 2])))));
                }
            }
        }
    }
    #pragma endscop
}
