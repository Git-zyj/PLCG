/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(-630763376, 630763376)));
    var_18 += ((((max((((10074344283752615706 ? 17097 : 1))), var_2))) ? var_15 : ((var_4 ? (var_5 && -4652495927670504102) : var_15))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 |= 32736;
                    var_20 = 2697109920;
                    var_21 &= (max(((8706 ? (((arr_6 [i_0] [i_1] [i_1] [i_0]) ? (arr_3 [i_2]) : -18)) : 18)), ((~(((arr_3 [i_0]) ? 1 : (arr_7 [i_0] [i_2] [i_2])))))));
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((~(((arr_7 [i_2] [i_2] [i_2]) * (33 * 49)))));
                    var_22 = max((var_11 + -4652495927670504121), -1);
                }
            }
        }
    }
    #pragma endscop
}
