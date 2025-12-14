/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134881
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_12 = (18446744073709551584 ? (arr_0 [i_0] [i_0]) : (((var_7 == (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = ((!(arr_1 [12])));
        arr_3 [i_0] [i_0] = (((((80 ? var_3 : (arr_1 [i_0])))) ? (7961620410952062644 / -57) : (((var_9 ? (arr_1 [i_0]) : var_4)))));
        arr_4 [i_0] [i_0] = (!32002);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((-(~812923652)));
        arr_8 [i_1] = (arr_0 [i_1] [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_11 [4] [i_2] = -var_9;
        var_13 = 1;
        arr_12 [i_2] [i_2] = (arr_10 [i_2]);
    }

    for (int i_3 = 2; i_3 < 7;i_3 += 1)
    {
        var_14 += -54;
        var_15 = (((min((arr_0 [i_3 - 1] [i_3]), 1)) / (arr_10 [i_3])));
    }
    var_16 = ((((max(var_4, 7961620410952062644))) ? var_6 : var_11));
    var_17 ^= (min(var_7, var_3));
    #pragma endscop
}
