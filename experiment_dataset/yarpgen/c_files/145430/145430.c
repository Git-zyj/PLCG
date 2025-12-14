/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145430
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (((!((min(var_0, var_8))))))));
    var_13 = (min(var_13, var_1));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_14 = (((((!(arr_0 [i_0])))) > (((!(arr_0 [i_0]))))));
        var_15 = ((((min((arr_1 [i_0]), 59))) << var_1));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_16 = (min(var_4, (arr_5 [i_1])));
        arr_6 [i_1] [i_1] &= (arr_0 [i_1]);
    }
    var_17 = (max(var_17, (((((((!(((-1 ? var_4 : -1))))))) ^ (3 % 1))))));
    var_18 = -1;
    #pragma endscop
}
