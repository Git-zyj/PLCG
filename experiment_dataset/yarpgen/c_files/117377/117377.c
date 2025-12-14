/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117377
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_7;

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 = ((!(((arr_1 [i_0]) < (!var_8)))));
        arr_3 [i_0] = (((((((arr_2 [i_0]) ? (arr_2 [6]) : var_8))) != (max(9601188410130084159, var_5)))));
        arr_4 [1] = (min((((!((max(20357, (arr_1 [i_0]))))))), -4498));
        var_12 = (arr_2 [10]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_11 [i_1] = ((((arr_7 [i_1]) * var_7)));
            arr_12 [i_2] [i_1] [i_1] = -64;
            var_13 = (max(var_13, var_9));
            var_14 ^= (((~9824) * (~1)));
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 10;i_3 += 1)
        {
            var_15 = var_5;
            arr_15 [i_1] = (((arr_10 [i_3 - 4] [i_3 - 4] [i_3 - 4]) ? (arr_10 [i_3 - 4] [i_3 - 4] [i_3 + 1]) : (arr_10 [i_3 - 4] [i_3 - 4] [i_3 - 2])));
            var_16 = 1211701897;
        }
        arr_16 [i_1] = (((((((((arr_2 [8]) ? (arr_0 [i_1]) : (arr_8 [0])))) >= ((0 ? 1211701917 : var_0))))) >> ((((var_6 | ((-1901991729 ? 1 : 4037212478)))) - 1579219145))));
        var_17 *= (max(((((30393 != -116) * var_5))), (arr_10 [1] [i_1] [1])));
    }
    var_18 &= (((((var_1 ? (((32753 ? var_8 : 1))) : -var_0))) ? var_0 : ((((!(((var_5 ? var_0 : 31457280)))))))));
    #pragma endscop
}
