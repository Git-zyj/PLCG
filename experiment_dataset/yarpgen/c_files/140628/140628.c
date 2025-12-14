/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += ((var_8 > (max((~6), ((var_2 | (-9223372036854775807 - 1)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_9 [i_2] [i_1] [i_0] [i_0] |= arr_2 [i_0 - 1] [i_1] [i_1];
                    arr_10 [i_0] [i_1] [i_0] = ((var_14 ? var_1 : (arr_4 [i_0 - 1] [2] [i_2])));
                    arr_11 [1] [1] [i_1] [i_2] = ((!(var_14 || var_15)));
                }
                var_18 = (max(var_18, var_10));
            }
        }
    }
    var_19 = 3530137697609046543;
    var_20 = var_12;
    #pragma endscop
}
