/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183647
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_1 [i_0] [i_0 - 1]) ? (((arr_1 [i_0] [i_0 + 1]) ? (arr_1 [i_0] [i_0 - 1]) : (arr_1 [i_0] [i_0 + 1]))) : ((min((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0 - 1] [i_0 + 1]))))));
        arr_5 [6] &= (((202 ? 3137 : (arr_0 [i_0 - 1] [i_0]))));
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        arr_10 [i_1] = ((!(arr_2 [i_1])));
        arr_11 [i_1] = (min((((((min(var_10, (arr_1 [0] [7])))) || (~3137)))), (((((var_14 ? var_3 : 203))) ? (((min((arr_1 [0] [i_1]), var_9)))) : (arr_8 [i_1 - 1] [i_1 + 1])))));
        var_17 = (arr_7 [i_1 - 1]);
    }
    var_18 += var_14;
    #pragma endscop
}
