/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_7 && (!var_3)));
    var_11 = (min(var_11, 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (max((((arr_4 [i_0] [i_1] [i_1]) / var_3)), (arr_3 [1] [i_1])));
                var_12 = (max(var_0, 1754968153));
            }
        }
    }
    var_13 = (min(((var_8 ? var_3 : (min(var_0, var_0)))), (min(((-2555 ? var_3 : -1)), var_6))));
    var_14 = var_2;
    #pragma endscop
}
