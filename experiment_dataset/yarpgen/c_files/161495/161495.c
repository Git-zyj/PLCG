/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = ((((max(var_6, (arr_2 [i_1] [i_0])))) / (max(var_1, (arr_4 [i_1 - 3] [2] [2])))));
                var_19 &= var_8;
                var_20 = (!var_2);
                var_21 = (min((arr_1 [i_0]), (max((arr_4 [9] [i_0] [i_0]), var_13))));
                var_22 = (((arr_2 [21] [i_0]) ? ((((min(var_3, 1846567375)) * ((var_16 / (arr_0 [i_1])))))) : (15048120225018858777 / 37)));
            }
        }
    }
    #pragma endscop
}
