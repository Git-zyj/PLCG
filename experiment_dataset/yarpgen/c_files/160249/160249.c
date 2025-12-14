/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            var_13 = (max(var_13, (arr_1 [i_1] [i_0])));
            arr_6 [i_0] [i_0] [i_1] = ((((-316 ? var_10 : (arr_4 [i_1] [i_1 - 1] [i_1]))) <= var_8));
        }
        var_14 = (((((~((var_11 ? var_7 : var_0))))) && ((min(((max(var_4, var_0))), (((arr_5 [i_0] [12]) ? (arr_3 [2] [2]) : var_4)))))));
        var_15 = (((324 ? (((-316 - (arr_2 [i_0])))) : 16465786507582720432)));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = arr_7 [i_2];
        var_16 = ((((var_5 ? (arr_1 [i_2] [i_2]) : var_9))));
    }
    #pragma endscop
}
