/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] |= ((((((arr_0 [i_0 + 2]) >= (arr_2 [i_0]))) && ((min(0, var_1))))) ? var_10 : ((((max(var_10, (arr_0 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((arr_0 [i_0]) / (arr_0 [i_0]))))));
        arr_4 [i_0] = (max((arr_1 [i_0]), ((((arr_2 [i_0 + 2]) ? (arr_2 [i_0 - 1]) : (arr_2 [i_0 - 1]))))));
        arr_5 [i_0] [i_0] = (max((((var_3 + var_4) ? (-31340 * 14375227090975999578) : (758542114 * var_9))), var_1));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_15 = (min(var_15, (arr_8 [i_1])));
        arr_9 [i_1] [12] |= (((arr_6 [i_1] [i_1]) >= (arr_8 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_13 [i_2] [i_2] = ((((var_13 ? (arr_11 [i_2] [i_2]) : (arr_10 [i_2] [i_2]))) < (arr_10 [i_2 + 1] [i_2 + 1])));
        arr_14 [1] |= (((3536425162 ? -56 : (arr_10 [i_2] [i_2]))));
        arr_15 [i_2] [i_2] = 3321441725;
    }
    var_16 = (max(var_16, ((((((15 / 24) && -116)) ? var_5 : ((min(var_8, var_4))))))));
    #pragma endscop
}
