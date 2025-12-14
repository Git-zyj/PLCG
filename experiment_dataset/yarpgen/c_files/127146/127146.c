/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127146
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 *= arr_3 [i_0];
        arr_4 [i_0] = (((arr_3 [i_0]) >= ((min(2147483647, 1103889246)))));
        arr_5 [i_0] = ((!(((((262143 ? var_2 : var_1)) >> (((max(2112297766, var_9)) - 2112297756)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 |= 9802053748096069089;
        var_22 = (arr_2 [i_1] [i_1]);
        arr_8 [i_1] = ((arr_2 [i_1] [i_1]) ? var_1 : (arr_6 [i_1]));
    }
    var_23 = var_5;
    var_24 = (((((var_17 ? -1543984858489591213 : -var_8))) ? var_15 : 3222669426982820824));
    var_25 = (min(var_25, (((!(((var_18 ? var_17 : -var_12))))))));
    #pragma endscop
}
