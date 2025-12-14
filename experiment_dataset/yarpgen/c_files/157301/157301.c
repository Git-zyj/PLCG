/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((0 ? var_1 : var_15)) - (max(var_3, var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (arr_3 [1])));
                var_22 = (min((arr_1 [i_0] [i_1]), ((((((arr_3 [i_0]) != (arr_0 [i_0])))) % ((-(arr_4 [i_0])))))));
                arr_5 [i_0] = ((~(((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])))));
                arr_6 [i_0] [i_0] [i_0] = (((((arr_2 [i_0] [i_1]) && 61697)) ? (((~((min((arr_4 [i_0]), 47578)))))) : (((9272195141216043283 + (arr_2 [i_0] [i_1]))))));
            }
        }
    }
    var_23 = ((var_16 > (-127 - 1)));
    var_24 = var_19;
    #pragma endscop
}
