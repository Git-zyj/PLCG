/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((-(arr_0 [i_0]))));
        arr_3 [i_0] = ((((min(((~(arr_0 [i_0]))), (((arr_0 [i_0]) ? var_3 : (arr_0 [i_0])))))) ? (((max(3978389284721079562, (arr_0 [i_0]))) | (1532 <= 151))) : ((((arr_1 [i_0] [i_0]) >> (((((min((-9223372036854775807 - 1), 9223372036854775807)) - -9223372036854775778)) + 57)))))));
    }
    var_14 = (min(((var_10 ? 27 : var_4)), ((((min(var_1, var_10)) <= var_11)))));
    var_15 = (min(((((min(-1841230041, var_1)) < var_12))), ((var_5 ? (min(-1841230041, var_0)) : (!var_7)))));
    var_16 = ((+((((var_0 / 3131373320) != -123)))));
    var_17 = var_10;
    #pragma endscop
}
