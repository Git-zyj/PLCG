/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12060
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_10 % (min(var_10, ((min(var_9, var_15)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = 2147483647;
                var_19 = (max(var_19, ((((((max(106, -1))) >> 17))))));
            }
        }
    }
    var_20 &= var_2;
    #pragma endscop
}
