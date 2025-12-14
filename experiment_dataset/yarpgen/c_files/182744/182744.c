/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((var_15 ? (var_11 / var_10) : (max(var_2, var_15))))), var_8));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_19 = (((arr_3 [i_0 + 2] [i_0 + 2]) && (((var_10 ? var_10 : (arr_1 [i_0]))))));
        var_20 = ((arr_1 [i_0]) ? (arr_1 [i_0]) : 3963627552256529096);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_21 = (arr_4 [i_1]);
        var_22 ^= (!var_8);
    }
    var_23 = (max(var_23, 1));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {
                var_24 = ((var_2 != ((var_15 % (arr_6 [i_3 - 1] [i_2])))));
                var_25 = ((var_15 ^ ((min((arr_6 [i_2 - 1] [i_2]), (arr_7 [i_2] [i_2]))))));
            }
        }
    }
    #pragma endscop
}
