/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_14 = ((32 || ((!(arr_2 [i_0])))));
        var_15 = ((78 || (((var_3 ? 178 : ((106 ? 78 : 9974201862863437863)))))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_16 = var_13;
        arr_7 [i_1] = (((min((max(var_4, (arr_2 [i_1]))), (((var_12 - (arr_4 [i_1] [12])))))) ^ ((((119083298931510987 + 3451475453) ? ((149 ? (arr_0 [i_1]) : 1854803006)) : 32767)))));
    }
    var_17 = (max(var_17, (((!(((var_7 ? var_1 : ((var_6 ? var_4 : var_4))))))))));
    #pragma endscop
}
