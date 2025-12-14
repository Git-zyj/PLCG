/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (((((5329963618469798179 ? var_2 : var_0)) >= var_3)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, (((~((max(var_8, 95))))))));
                    var_14 = (max(((-(arr_2 [i_0] [i_1]))), ((15 ? (~var_9) : (var_8 + var_5)))));
                    var_15 = (arr_5 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_16 = (((min(180, var_6)) / (((((var_1 ? var_0 : var_11))) ? var_8 : ((var_10 ? var_4 : var_8))))));
    #pragma endscop
}
