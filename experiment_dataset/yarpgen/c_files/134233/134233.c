/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= (max(var_5, ((((var_8 ? var_14 : var_9)) * (var_5 == var_0)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_21 = ((+((((arr_5 [11] [i_2 - 1] [i_2 - 1] [i_1]) < (arr_5 [i_2 - 3] [i_2 - 2] [i_2] [i_2]))))));
                    var_22 = (min(var_22, (((~((max((arr_5 [18] [i_1] [i_2] [i_2 - 3]), var_1))))))));
                }
            }
        }
    }
    var_23 = var_12;
    var_24 = ((!(~211)));
    var_25 = var_8;
    #pragma endscop
}
