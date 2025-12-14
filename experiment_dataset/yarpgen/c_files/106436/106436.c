/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106436
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_0));
    var_18 = (min((((max(var_16, var_13)))), ((((var_4 ? var_15 : var_3)) + -var_16))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (min(20707, (arr_6 [1] [i_1] [i_0])));
                    var_19 = (((8021537793635146899 - var_11) - ((-(arr_0 [i_0 + 1])))));
                    var_20 *= ((((((arr_5 [i_0 - 2] [7] [i_0 - 2]) >= var_16))) * (((arr_5 [i_0 - 1] [i_2] [i_0 - 1]) ? var_1 : (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                    var_21 = 20707;
                }
            }
        }
    }
    var_22 = var_14;
    #pragma endscop
}
