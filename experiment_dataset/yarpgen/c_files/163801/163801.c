/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    var_21 = (min(8026, (((var_13 << (171 - 161))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [6] = ((((((4095 / (arr_5 [11] [11] [8]))) < (arr_1 [2]))) ? ((var_17 - (min((arr_0 [9]), 3780320319)))) : (((((-(arr_2 [1] [1]))) - var_7)))));
                var_22 = (max((((-((~(arr_5 [11] [11] [12])))))), var_3));
            }
        }
    }
    var_23 = (4945343604063678755 | 6619020988307389675);
    #pragma endscop
}
