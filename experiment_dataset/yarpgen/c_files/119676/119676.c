/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] = arr_8 [i_2 - 3];
                    var_20 = (min(var_20, var_2));
                    var_21 = (max(var_21, 9177128750705632526));
                }
            }
        }
    }
    var_22 = (((min(var_9, (79 - 14))) << (var_3 + 25039)));
    var_23 = (max(var_9, (min(63, 17294153938118255561))));
    #pragma endscop
}
