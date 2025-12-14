/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_2 / var_3) ? (!var_2) : (var_5 || var_7))) % var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_11 = (max(var_11, var_2));
                arr_4 [i_0] = var_7;
            }
        }
    }
    var_12 = ((max(((max(var_3, var_0)), (var_7 % var_9)))));
    var_13 *= (((((var_5 ^ (var_7 / var_9)))) ? ((~(!var_3))) : var_5));
    #pragma endscop
}
