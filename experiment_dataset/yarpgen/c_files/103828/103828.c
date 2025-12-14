/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((max((max(var_7, 57344)), ((var_2 ? var_2 : 193))))) ? (((((((arr_2 [i_0] [i_0]) - (arr_0 [i_0]))) + 9223372036854775807)) >> (((min((arr_0 [i_0]), var_7)) - 34302)))) : ((((!(var_1 | var_1)))))));
        var_10 = (max(var_10, (((((((((var_5 != (arr_0 [10]))))) >= (max(63, (arr_1 [1]))))) ? (((200 ? (arr_1 [6]) : (arr_1 [2])))) : (((~(~0)))))))));
    }
    var_11 = (((((~var_7) ? (max(55, 5551749006224264691)) : ((min(2097136, 36))))) >> (((((~-25548) ^ (~var_0))) - 7731017625298568280))));
    var_12 = (((~47) * (((((55 >> (193 - 164)))) ^ (min(var_3, var_2))))));
    var_13 = (((((!(57 == 32745)))) * ((~(var_7 != var_3)))));
    #pragma endscop
}
