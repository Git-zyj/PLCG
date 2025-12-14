/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (((((arr_2 [i_0] [i_1] [i_0]) || (arr_2 [4] [4] [i_1]))) || (((max((arr_0 [15]), var_5))))));
                var_17 = (min(var_17, (((!(arr_3 [5]))))));
                arr_4 [15] = 4294967295;
            }
        }
    }
    var_18 = (((((var_3 % var_4) ? ((max(3, var_1))) : 70093866270720))) ? (var_11 && var_2) : ((((max(var_2, var_0))) ? var_11 : ((max(var_5, var_15))))));
    var_19 = var_4;
    var_20 = 17;
    #pragma endscop
}
