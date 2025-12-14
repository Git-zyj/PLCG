/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((((var_6 ? var_3 : var_8)) + 9223372036854775807)) >> ((((var_4 ? var_2 : 4469821189863107951)) + 108))))) ? var_5 : var_3);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = (var_0 ? var_12 : (((var_5 - (arr_3 [i_0])))));
        arr_4 [i_0] = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 3; i_1 < 14;i_1 += 1)
    {
        var_17 = 4469821189863107951;
        arr_9 [i_1] [i_1] = (max(-13101, ((((max(var_7, var_4))) ? (arr_0 [i_1 + 1] [i_1 - 2]) : var_9))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            {
                var_18 = (((var_8 ? var_1 : -13073)));
                arr_17 [i_3] [i_2] [i_2] = (max(((~(arr_1 [i_2]))), (arr_1 [i_2])));
                arr_18 [i_2] = ((((((arr_14 [i_3] [11]) ^ (((21 ? var_1 : -29018)))))) ? (max((arr_8 [i_2]), (arr_5 [i_3]))) : ((((arr_5 [i_2]) | (arr_5 [i_3]))))));
            }
        }
    }
    #pragma endscop
}
