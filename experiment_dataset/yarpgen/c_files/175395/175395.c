/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((((var_7 - var_0) * ((min(var_3, var_7))))) < (((max(((max(var_1, var_5))), (min(var_5, var_9))))))));
    var_11 = (min(var_11, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 ^= (!var_4);
                var_13 &= ((!((min(((min(var_7, var_9))), ((var_8 ? var_9 : var_9)))))));
            }
        }
    }
    var_14 = var_3;
    #pragma endscop
}
