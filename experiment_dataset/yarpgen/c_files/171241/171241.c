/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_1;
    var_19 = var_13;
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_0] = (((((~(arr_3 [2] [i_1] [i_1])))) ? ((max(var_2, ((11 ? (arr_2 [i_0] [7] [i_0]) : (arr_0 [i_0])))))) : (((var_16 + 16806173712373066618) * (((var_5 ? var_5 : var_13)))))));
                arr_6 [i_0] [1] [i_1] = (min(((1640570361336484997 ? var_7 : -716004972)), (((-(arr_3 [i_1 - 3] [i_1 - 3] [i_1 + 1]))))));
            }
        }
    }
    var_21 = ((((max(8, (~var_17)))) ? ((max(((0 ? var_16 : var_0)), (!88)))) : ((var_11 + (max(var_6, 4375410413130518437))))));
    #pragma endscop
}
