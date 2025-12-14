/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (97 ? 12 : -13);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_11 = (min(-9, 8));
                    var_12 = ((var_7 ? (arr_7 [i_0 - 1] [i_0 + 1] [i_2] [i_1 + 1]) : (!var_3)));
                }
            }
        }
    }
    var_13 = (var_6 & var_0);
    var_14 |= var_8;
    var_15 = ((((((min(2602600424510931522, -4941643792223608022))) ? var_9 : var_7)) * var_2));
    #pragma endscop
}
