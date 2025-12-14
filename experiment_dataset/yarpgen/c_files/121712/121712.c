/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121712
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_20 = ((!(arr_0 [14] [i_1])));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_21 = 1867575238;
                    var_22 = var_8;
                }
            }
        }
    }
    var_23 = (((3067463228 >> (652774538 - 652774520))) >> (((~var_2) - 3402471680)));
    var_24 = ((var_5 >= ((var_19 ? var_15 : var_3))));
    var_25 = var_18;
    #pragma endscop
}
