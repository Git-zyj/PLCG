/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 = ((-(var_3 % var_7)));
    var_12 -= (65415 == var_0);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (((((((var_1 || (arr_1 [i_0]))) ? (arr_1 [i_0]) : 65402))) <= (~14006648717709244404)));
        var_14 = (min(((-((1 ? (arr_0 [i_0] [i_0]) : var_0)))), (var_7 - 4440095356000307212)));
        var_15 = (var_9 >> var_8);
        var_16 -= (((max((~11582152719215902020), ((max((arr_1 [i_0]), 169))))) | 1));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_17 = ((((var_6 || (arr_4 [i_1])))) <= (min(32736, -188)));
        arr_6 [i_1] &= ((max(((var_2 * (arr_4 [i_1]))), var_5)) / (min((arr_4 [i_1]), -4503599627370495)));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (var_3 ? var_1 : (-8207 ^ var_4));
            arr_10 [i_2] [i_2] = ((max(32744, (var_9 | 4440095356000307211))) % (((0 ? 1 : var_2))));
            arr_11 [i_1] [i_1] [i_2] = (arr_5 [i_1]);
            var_19 -= (max(var_7, (arr_7 [i_1] [i_2])));
            var_20 *= (((max((2290257354365915525 >= 16384), var_0)) || ((195 || (min(var_8, var_4))))));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_21 = (max(var_21, (arr_4 [i_1])));
            var_22 &= (arr_9 [i_1] [i_1]);
            var_23 *= (arr_7 [9] [9]);
        }
    }
    #pragma endscop
}
