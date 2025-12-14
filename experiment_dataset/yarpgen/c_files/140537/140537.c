/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_17 = var_8;
                    var_18 ^= ((+((var_11 << ((((arr_5 [i_2 - 1] [i_2]) || var_7)))))));
                }
            }
        }
    }
    #pragma endscop
}
