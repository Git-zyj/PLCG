/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -20678;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    var_17 = 1346754110;
                    var_18 = ((((((arr_4 [i_2 + 1]) - (((var_2 ? var_0 : 25416)))))) ? var_8 : (((var_3 ? (2948213185 && 18295) : var_5)))));
                }
            }
        }
    }
    var_19 ^= (-32767 - 1);
    var_20 = var_9;
    #pragma endscop
}
