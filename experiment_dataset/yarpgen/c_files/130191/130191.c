/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130191
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_10 ^= (max(var_0, var_2));
                    var_11 = (min(var_11, var_4));
                }
            }
        }
    }
    var_12 = var_3;
    var_13 = (~-32762);
    var_14 = var_5;
    #pragma endscop
}
