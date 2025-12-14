/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((var_6 + var_12) + (var_6 - var_6))), (((var_0 ? var_5 : -9175)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, ((((((((min((arr_7 [i_0] [i_0] [i_0]), var_1))) ? (var_1 + var_11) : (((arr_5 [i_0] [13] [i_0]) ? var_4 : (arr_7 [i_0 - 1] [i_1 - 3] [i_0 - 1])))))) ? -9223372036854775788 : (((-(((arr_5 [i_0] [8] [i_0]) ? 0 : -16))))))))));
                    arr_9 [i_0] [i_0] [i_1 - 2] [i_2] = (((((((var_7 ? var_5 : (arr_4 [i_0] [i_0]))) | ((11 ? -32740 : var_5))))) ? ((min((arr_5 [5] [i_2 + 1] [i_2 - 1]), var_7))) : 32767));
                    var_15 = ((!(((2350650945 ? (arr_4 [i_1] [i_1 - 3]) : (var_12 / var_9))))));
                }
            }
        }
    }
    #pragma endscop
}
