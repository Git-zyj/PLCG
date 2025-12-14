/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_16 = (min(var_16, 12880));
                arr_6 [i_0] [i_1] = var_13;
                var_17 = (min(var_17, (((-(((arr_5 [i_0] [9] [i_1]) ? (arr_3 [i_1] [i_0] [i_0]) : -20227)))))));
            }
        }
    }
    var_18 = ((var_3 ? var_13 : 122));
    var_19 = var_13;
    #pragma endscop
}
