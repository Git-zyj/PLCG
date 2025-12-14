/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155144
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-3264373514 + -var_0) ? (((41216 ? var_13 : ((min(41214, 35379)))))) : ((var_10 % (max(var_0, var_19)))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_21 = (((((-(!3673201308)))) - (((((var_13 - (arr_1 [12])))) - var_7))));
        var_22 -= ((!((!((((arr_1 [i_0]) % var_16)))))));
        var_23 = ((-(min((24313 && 11189), 3264373508))));
        var_24 &= (!-41198);
    }

    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_4 [i_1] [i_1] = ((((max((41216 && var_0), var_13))) || ((((max(var_4, 41217))) || ((max((arr_2 [i_1] [i_1]), 24300)))))));
        var_25 = var_3;
        var_26 = (max((((arr_3 [i_1] [i_1]) % (arr_2 [i_1] [i_1]))), (arr_2 [i_1] [i_1])));
        arr_5 [i_1] = ((32768 ? (((-(!59680)))) : 28672));
        var_27 += ((arr_2 [i_1] [i_1]) ? 3530215272 : (((min((arr_2 [i_1] [i_1]), (arr_3 [i_1] [i_1]))) / (14364 * 30567))));
    }
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        var_28 = (arr_0 [i_2]);
        var_29 = (max(var_29, (((~30156) + (((arr_3 [i_2 - 1] [i_2 - 2]) ? (arr_3 [i_2 - 2] [i_2 - 2]) : (arr_3 [i_2 - 2] [i_2 - 3])))))));
    }
    #pragma endscop
}
