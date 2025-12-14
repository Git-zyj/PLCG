/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1;
    var_12 *= var_7;
    var_13 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_7 [4])));
                    var_15 ^= var_3;
                    arr_9 [i_2] [i_2] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
