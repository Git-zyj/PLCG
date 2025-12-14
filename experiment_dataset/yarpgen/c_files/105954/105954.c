/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105954
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_10));
    var_14 |= var_0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 20;i_2 += 1)
            {
                {
                    var_15 = 524287;
                    var_16 = (((((~(arr_4 [i_0]))) * ((var_3 ? (arr_0 [i_0]) : var_8)))) * (90 >> 0));
                    var_17 *= max(((-(~2060626416))), (((-(arr_0 [8])))));
                    var_18 &= var_7;
                }
            }
        }
    }
    var_19 = var_3;
    #pragma endscop
}
