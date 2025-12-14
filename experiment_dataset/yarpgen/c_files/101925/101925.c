/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-12599 ? ((((min(var_1, var_12))) ? ((0 ? 0 : -6360572735271373543)) : -466159714)) : (((var_10 & (!var_11))))));
    var_14 = var_6;
    var_15 = ((!((2455997503216395072 >= ((min(var_5, var_7)))))));
    var_16 = (min(var_10, ((((((var_8 ? 4 : var_11))) <= ((var_3 ? var_4 : 2080374784)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_17 = (max(((((arr_1 [i_0 + 2]) ? ((-4255 ? 4294967295 : -70)) : -14))), (((arr_2 [i_0 + 2]) ? (arr_2 [i_0 - 1]) : -2080374784))));
                var_18 = ((!(6360572735271373543 <= -2080374776)));
            }
        }
    }
    #pragma endscop
}
