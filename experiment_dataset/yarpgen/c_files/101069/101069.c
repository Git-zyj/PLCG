/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101069
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max(-3197566791189562461, 1125899906842623));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_13 = (-19 > 32762);
                    var_14 = ((!((min(-32759, 31801)))));
                }
            }
        }
    }
    var_15 &= var_8;
    #pragma endscop
}
