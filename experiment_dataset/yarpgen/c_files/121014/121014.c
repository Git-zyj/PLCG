/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_15 - (0 - 21)));
    var_19 = (min(var_19, ((max(var_0, (((-var_2 && ((min(64002, 10206676765058586839)))))))))));
    var_20 += var_3;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_4 [12] &= (((((((arr_3 [6]) | (arr_2 [8]))))) && (arr_1 [i_0])));
        var_21 = (min(var_21, (max((((arr_3 [2]) && (arr_3 [12]))), ((!(arr_3 [0])))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = (min(var_22, ((((~(arr_2 [i_1])))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (((((((arr_6 [i_1]) == (arr_0 [i_2])))) >> (((arr_6 [i_1]) + 62987709858290701)))))));
            var_24 = (min(var_24, 1));
            var_25 = (min(var_25, (arr_6 [i_2])));
            var_26 = var_7;
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_27 = (max(var_27, (((1 * (((((min(var_5, 18446744073709551612))) && (!var_6)))))))));
            arr_11 [4] = (arr_6 [i_3]);
            var_28 ^= var_2;
        }
        var_29 -= ((arr_5 [i_1]) << (((arr_5 [i_1]) - 5724627438528751989)));
        var_30 = ((((((arr_10 [i_1] [10] [i_1]) ? (arr_10 [i_1] [i_1] [i_1]) : (arr_10 [i_1] [i_1] [i_1])))) ? (arr_3 [i_1]) : (max(15843519609697863344, ((246 ? (arr_8 [i_1] [i_1]) : 2603224464011688259))))));
        var_31 = (min(var_31, (arr_2 [i_1])));
    }
    #pragma endscop
}
