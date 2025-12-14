/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!((!(((0 ? 1 : var_1)))))));
    var_12 = ((~((var_4 & (~1914941231)))));
    var_13 -= (!var_10);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = ((((((var_3 >= 0) % (arr_1 [i_0])))) ? ((var_4 + ((~(arr_1 [7]))))) : (((~((max(var_2, 202))))))));
        arr_3 [i_0] = ((max((min(var_3, -1861072354), 0))));
        var_15 = 1;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((((min((var_0 / var_6), ((4294967295 ? 1 : var_0))))) ^ 4294967278));
        var_16 += var_2;
        var_17 = (min(var_17, ((((((-(arr_5 [i_1])))) ? (~var_6) : (((!(((-4336 ? (arr_6 [i_1] [i_1]) : var_0)))))))))));
        var_18 = (((((max(1, (arr_0 [i_1] [i_1]))) ? (var_0 * var_6) : (!0))) >> (((max(var_1, (arr_2 [i_1] [i_1]))) - 1312048647))));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
    {
        arr_11 [i_2] [1] = ((var_9 ? ((min(255, (arr_4 [i_2])))) : (arr_1 [i_2])));
        var_19 = (max(var_19, (((((var_4 || (arr_0 [i_2] [i_2]))) ? (arr_0 [i_2] [i_2]) : (arr_0 [i_2] [12]))))));
    }
    #pragma endscop
}
