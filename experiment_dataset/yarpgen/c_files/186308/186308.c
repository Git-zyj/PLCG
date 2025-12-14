/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186308
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = 4;
                    var_21 = (-9223372036854775807 - 1);
                }
            }
        }
    }
    var_22 &= var_7;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 20;i_4 += 1)
        {
            {
                var_23 = -64;
                var_24 = -1402384213;
                var_25 = 1402384229;
                var_26 = 1402384206;
            }
        }
    }
    #pragma endscop
}
