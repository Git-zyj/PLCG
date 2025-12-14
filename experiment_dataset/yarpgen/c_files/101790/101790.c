/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_19 = (arr_3 [i_0] [i_0] [i_1]);
                arr_5 [i_0] [i_0] = arr_2 [i_0];
            }
        }
    }
    var_20 -= (((((((var_12 << (16383 - 16383))) << (2147483639 - 2147483639)))) ? var_11 : ((((~var_6) ? var_2 : (max(var_3, var_0)))))));
    var_21 = var_13;
    #pragma endscop
}
