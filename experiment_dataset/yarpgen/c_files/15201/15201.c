/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, var_7));
    var_17 = ((var_10 ? (max(var_15, (((var_10 ? var_7 : var_6))))) : var_2));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = (i_0 % 2 == 0) ? ((((max((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_12)), (arr_0 [i_1]))) * (((-(arr_3 [i_1 + 1] [i_0] [i_1 + 2]))))))) : ((((max((((arr_2 [i_0]) ? (arr_1 [i_0]) : var_12)), (arr_0 [i_1]))) / (((-(arr_3 [i_1 + 1] [i_0] [i_1 + 2])))))));
                var_19 = ((-(arr_3 [i_0] [i_0] [i_1 + 3])));
                var_20 = (min(var_20, (((~(min((max(var_3, var_15)), ((max(-27000, 92))))))))));
            }
        }
    }
    #pragma endscop
}
