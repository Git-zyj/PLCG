/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_0;
    var_12 = var_9;
    var_13 |= var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = -0;
                    var_14 = (((((~((min(51910, 13644)))))) >= var_1));
                    var_15 = (max(13625, -100));
                }
            }
        }
    }
    #pragma endscop
}
