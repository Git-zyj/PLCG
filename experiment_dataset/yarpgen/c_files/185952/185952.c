/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_12 = ((!(arr_1 [i_1] [i_0])));
                var_13 = (var_10 || var_1);
            }
        }
    }
    var_14 = var_9;
    var_15 = (max(var_15, ((min((~var_10), var_8)))));
    var_16 |= ((((-5997956661465964114 != (((max(var_11, var_6))))))) - ((5997956661465964131 ? ((max(65535, var_7))) : var_10)));
    #pragma endscop
}
