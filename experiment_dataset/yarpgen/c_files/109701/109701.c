/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = ((!((((arr_1 [i_0]) | var_13)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_19 = 229;
                    var_20 = ((!(arr_1 [i_0])));
                    var_21 *= 49;
                }
            }
        }
    }
    var_22 = min(var_16, (((((var_17 ? var_15 : var_10)) | (24 ^ 1081295043)))));
    var_23 = (min(var_23, (min((var_1 != var_3), var_15))));
    #pragma endscop
}
