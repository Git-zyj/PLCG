/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((arr_3 [i_0] [i_1 + 1] [i_1 + 1]) ? (arr_3 [i_0] [i_1 - 1] [i_1 - 3]) : (arr_3 [i_0] [i_1 - 2] [i_1 + 1])))) ? (((var_2 == (((min((arr_2 [i_0]), (arr_1 [i_0])))))))) : (((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                arr_5 [2] |= ((((((arr_0 [6]) ? (arr_0 [12]) : (arr_0 [2])))) ? ((((min(var_6, (arr_1 [0])))) ? (((arr_2 [0]) ? (arr_2 [1]) : var_6)) : var_7)) : (((72 << (10224490188145655133 - 10224490188145655129))))));
            }
        }
    }
    var_13 = min(((max(((min(var_0, var_8))), (var_6 | var_10)))), ((((var_11 ? var_4 : var_3)) << (var_6 - 406572008))));
    #pragma endscop
}
