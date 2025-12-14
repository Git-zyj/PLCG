/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((max((var_10 ^ var_10), ((var_12 ? 1 : 39715))))) ^ ((~(~2860650063)))));
    var_17 = ((-((max(120, var_14)))));
    var_18 = (((((var_3 % var_12) > ((min(var_9, 2995001358))))) ? (((!(((299808225 ? var_1 : var_6)))))) : 13263986471980556870));

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(var_19, (max(((((var_12 & (arr_1 [i_0]))))), (((var_1 != 1464519093) | (min(195, var_0))))))));
        arr_2 [i_0 - 1] = (var_0 ? 1418209990371837238 : (max((((1468039042 ? 7664 : (arr_1 [i_0])))), 127)));
        arr_3 [i_0] = ((-6472742311729462015 ? (((((714517123 ? 1305315120 : 4294967169))) ? 71 : 1093105151)) : -28712));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_20 ^= ((((((0 ? (arr_6 [i_1]) : var_12)))) % ((((min((arr_5 [i_1]), -57))) ? ((var_15 ? 49111 : var_8)) : ((16425 ^ (arr_6 [i_1])))))));
        arr_7 [i_1] = (min(((((arr_4 [i_1]) % (~var_0)))), (max(((max((arr_4 [i_1]), (arr_4 [i_1])))), ((4143017442253448178 << (-51 + 56)))))));
    }
    var_21 = (max(var_13, (((((var_10 ? var_9 : var_1))) ? var_7 : var_8))));
    #pragma endscop
}
