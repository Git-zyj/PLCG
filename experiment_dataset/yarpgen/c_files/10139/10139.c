/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10139
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, 16383));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_15 = (((((arr_1 [i_0] [i_0]) != (arr_1 [i_0] [i_0]))) ? (arr_0 [i_0]) : -1478696680));
        arr_2 [i_0] = (min(var_3, (min((65535 || var_4), var_3))));
        var_16 = (min(var_16, (((!((((!16362) ? (max(572660214, -166320744)) : ((var_11 ? var_3 : var_6))))))))));
        var_17 = (((~(((arr_1 [i_0] [i_0]) ? 1879048192 : 16396)))) ^ -1478696683);
    }

    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_18 = (16372 ? ((-((19 ? 127698139 : 16380)))) : -2016968227);
        arr_6 [i_1] [i_1] = var_5;
        arr_7 [i_1] = ((((min((arr_4 [i_1]), (arr_5 [i_1])))) || (((17526 ? var_9 : (arr_3 [i_1]))))));
    }
    #pragma endscop
}
