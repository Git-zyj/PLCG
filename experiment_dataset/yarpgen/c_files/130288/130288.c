/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(var_5, (!var_5)));
                var_16 = (-(arr_1 [i_1]));
                arr_6 [i_0] = ((3911559663 >> (((((((arr_4 [i_0] [i_0] [i_0]) > 32748))) > (arr_3 [i_1] [i_0]))))));
            }
        }
    }
    var_17 = (max((max(((max(var_6, var_9))), var_5)), ((((var_3 == var_1) / (var_13 || var_14))))));
    #pragma endscop
}
