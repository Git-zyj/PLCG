/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 157304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=157304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/157304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, (((var_1 ? var_8 : (min((var_6 - var_1), (var_7 - var_5))))))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = max((((!((min(-827283786380287869, var_3)))))), (((((arr_2 [i_0] [21]) ? 9223372036854775797 : (arr_2 [i_0] [1]))) ^ (arr_0 [i_0] [i_0]))));
        arr_5 [i_0] [i_0] = ((3848861786 ? (arr_0 [i_0] [i_0]) : ((min(846541893, 4)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_11 = (((arr_8 [i_1]) ? (0 | 4294967293) : (2691 & 16)));
        arr_9 [i_1] = (((arr_3 [i_1]) ? (arr_3 [i_1]) : 1));
    }
    var_12 = ((~(~3448425381)));

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_13 [i_2] = (((max((arr_2 [i_2] [i_2]), ((max((arr_3 [i_2]), 0))))) & (((-((min(1, 2690))))))));
        var_13 = (max(var_13, (((((arr_1 [i_2] [i_2]) || (arr_1 [i_2] [i_2])))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_14 = var_7;
        var_15 = (min(var_15, (((((((((max(var_8, var_5))) >= (1 >> 16))))) | (((((var_5 ? var_0 : (arr_10 [i_3])))) ? (max(12, (-9223372036854775807 - 1))) : var_9)))))));
        var_16 *= ((((((var_3 || (arr_2 [i_3] [i_3]))))) != ((167 ? 17925123248607138177 : 31))));
    }
    #pragma endscop
}
