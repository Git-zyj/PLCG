/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_7 ? ((((max(var_5, 586860903))) ? ((var_10 ? var_9 : var_2)) : (((586860903 >> (var_8 + 11634)))))) : (((-((max(var_7, 174))))))));
    var_12 -= var_10;

    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        var_13 = (max(var_13, (((((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0 - 1]))) >> (var_3 - 22295)))))));
        arr_2 [i_0] = var_10;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (max(var_9, var_3));
        arr_7 [i_1] = 1;
        var_14 *= (((242 % 586860903) ? (arr_4 [i_1]) : (((arr_3 [i_1]) ? (arr_4 [i_1]) : 18446744073709551602))));
        arr_8 [i_1] [i_1] = (max(((0 ? var_1 : (arr_5 [i_1] [i_1]))), (((-(var_1 || var_0))))));
    }
    var_15 *= ((!(((var_9 ? ((((var_8 + 2147483647) >> (40866 - 40844)))) : var_0)))));
    #pragma endscop
}
