/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((1 < (var_3 % var_2)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (((((((arr_1 [i_0]) ? (arr_0 [i_0]) : 179143802)) == (arr_1 [i_0]))) ? (((((arr_0 [i_0]) && (arr_0 [i_0]))))) : (((arr_0 [i_0]) ? 308869933 : (min((arr_1 [i_0]), 308869932))))));
        var_12 = (((max(101022587, -4194303)) >> ((((32738 ? (min(3986097359, 4143346610226102683)) : 308869932)) - 3986097356))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = (((((((arr_4 [i_1] [i_1]) == (arr_4 [i_1] [i_1]))) ? (((arr_5 [16]) - (arr_4 [11] [11]))) : ((((arr_3 [1]) ? (arr_5 [i_1]) : 1))))) >= (arr_3 [i_1])));
        var_13 = (308869933 | 4577134829251915628);
    }
    var_14 = (min(var_14, (((132 ^ ((var_2 << (var_9 - 149))))))));
    #pragma endscop
}
