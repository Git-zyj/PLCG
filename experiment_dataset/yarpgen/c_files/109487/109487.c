/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_17 = (min(var_17, (((((arr_0 [i_0 + 1]) > (((arr_0 [i_0]) ? (arr_1 [i_0]) : var_15))))))));
        arr_4 [i_0] [i_0] = (min((((-931070523 + -266772705) + (-266772705 + 71))), (((arr_2 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0 + 2])))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_9 [1] = (((((((((arr_8 [i_1] [i_1]) ? var_1 : var_15))) || (arr_8 [i_1] [i_1])))) + (((arr_5 [i_1]) ? (arr_5 [0]) : (arr_5 [i_1])))));
        var_18 += ((arr_5 [i_1]) | (((arr_7 [i_1] [i_1]) ^ (arr_8 [i_1] [i_1]))));
        arr_10 [i_1] = -3404007815;
        arr_11 [i_1] [i_1] = ((((((max((arr_8 [i_1] [i_1]), (arr_7 [18] [i_1])))) + (arr_7 [i_1] [i_1]))) < ((890959491 ? (arr_5 [i_1]) : ((max((arr_6 [i_1]), (arr_5 [i_1]))))))));
    }
    var_19 = var_16;
    #pragma endscop
}
