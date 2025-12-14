/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = -7958384043250031938;
                var_11 = (max(var_11, var_6));
                arr_5 [i_0] [i_1] = (!(!var_1));
            }
        }
    }
    #pragma endscop
}
