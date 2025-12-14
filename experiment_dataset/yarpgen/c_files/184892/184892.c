/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((var_0 ? var_3 : var_14)) <= var_10)) ? (((var_2 ? ((var_0 ? var_11 : var_14)) : -var_11))) : ((var_5 ? ((var_9 ? var_3 : var_9)) : (((var_6 ? var_2 : var_15)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((var_1 >= ((var_13 << (((var_19 + 64) - 23))))));
        var_21 = (min(var_21, ((((((((max(var_1, var_15))) * ((var_11 << (var_19 + 50)))))) ? (((var_15 / var_1) ? var_19 : (var_8 * var_4))) : ((((!(((var_15 ? var_11 : var_7))))))))))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = (var_14 ? var_4 : var_8);
        arr_6 [i_1] = ((var_10 ? var_7 : var_8));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_22 = (var_2 > 1);
        var_23 = ((var_17 <= (18037117611770483206 > -1)));
    }
    #pragma endscop
}
