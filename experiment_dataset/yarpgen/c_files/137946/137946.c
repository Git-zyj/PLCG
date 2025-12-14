/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = (min((min(18446744073709551585, var_2)), (((((max(6094328632441746221, var_7))) ? var_5 : var_8)))));
                    var_17 = (((~var_12) ^ (((((var_12 + var_10) >= (var_10 / var_14)))))));
                }
            }
        }
    }
    var_18 = -1339;
    #pragma endscop
}
