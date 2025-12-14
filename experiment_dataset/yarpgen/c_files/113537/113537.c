/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 + 1] = (((arr_1 [i_0 - 1]) ? (((var_0 <= (arr_1 [i_0 - 1])))) : ((((arr_0 [i_0 + 1] [i_0 + 1]) > (arr_0 [i_0 - 2] [i_0 - 2]))))));
        var_20 = (max((((arr_0 [12] [i_0]) ? (max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : var_16)), var_5));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = (arr_0 [i_1] [i_1]);
        var_21 = ((-(arr_3 [i_1])));
        var_22 = (((arr_1 [i_1]) ? (((arr_0 [i_1] [i_1]) + 1)) : var_10));
    }
    var_23 = (var_2 - var_6);
    var_24 |= var_18;
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            {
                var_25 = ((9223372036854775804 + (((max((arr_5 [i_2 + 2]), (arr_5 [i_2 + 2])))))));
                var_26 = (max((max(644849594075615205, 644849594075615196)), (((((~(arr_10 [i_3] [i_3] [i_2 + 2]))) | (arr_9 [7] [i_2] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
