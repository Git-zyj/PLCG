/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += -var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 = (((((min(15040195516594493649, (arr_2 [i_0] [i_0])))) ? ((((arr_1 [i_1]) && var_17))) : (min(var_3, (arr_4 [1] [i_1]))))));
                var_20 = (min(var_20, ((min(((((min((arr_1 [i_0]), 126))) ? (arr_2 [i_0] [8]) : var_3)), (arr_4 [4] [4]))))));
                var_21 = (min(((((arr_3 [i_0] [i_1] [1]) ? var_16 : ((var_6 ? var_5 : (arr_3 [3] [9] [10])))))), ((((((arr_2 [1] [i_1]) >> (var_15 - 79)))) ? (min((arr_0 [2]), (arr_0 [1]))) : 63))));
                var_22 = ((((((((arr_2 [6] [10]) ? 1214800090704210666 : (arr_2 [i_0] [i_0])))) ? ((-(arr_0 [i_1]))) : (((arr_5 [8]) ^ (arr_3 [i_0] [i_1] [7])))))) ? (arr_0 [i_1]) : (arr_5 [i_0]));
                arr_6 [5] = (((max((arr_3 [1] [1] [3]), (arr_5 [i_0]))) % (max(1, (min((arr_3 [i_0] [i_0] [i_0]), var_1))))));
            }
        }
    }
    #pragma endscop
}
