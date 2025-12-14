/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((!(!var_2))))));

    /* vectorizable */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        var_15 = (max(var_15, var_1));
        var_16 = 18446744073709551615;
    }
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                arr_8 [i_1] [i_1] [i_2] = (((~28407) ^ (max((arr_5 [i_2] [i_2 - 1] [i_2]), (arr_5 [i_1 - 3] [i_2] [i_2 - 1])))));
                var_17 = (arr_5 [i_2 - 1] [1] [i_2]);
                var_18 = (((arr_4 [i_1 + 1]) ? ((((max(162, (arr_7 [i_1 + 1] [i_1 + 1])))) ^ ((((arr_2 [i_2]) >= 73))))) : ((max(73, 183)))));
                var_19 = var_1;
            }
        }
    }
    var_20 = ((162 + (var_13 / 42)));
    #pragma endscop
}
