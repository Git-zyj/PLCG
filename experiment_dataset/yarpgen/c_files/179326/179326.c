/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179326
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [18] [10] [1] = (!1063335779);
                var_10 = ((max((min(var_9, var_1)), (arr_3 [i_1 + 1] [12]))));
                var_11 = min((max((arr_3 [i_1 + 1] [i_1 + 1]), (arr_3 [i_1 + 1] [i_1 + 1]))), (((var_4 < (arr_1 [i_1 + 1])))));
            }
        }
    }
    var_12 = max(((((var_7 << (var_4 + 1211607608))))), var_0);

    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_13 = (max((9223372036854775807 / 9241), (((var_6 ? (arr_5 [i_2 + 1]) : 293673554)))));
        var_14 ^= -6;
    }
    #pragma endscop
}
