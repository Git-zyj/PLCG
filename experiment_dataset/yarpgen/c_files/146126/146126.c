/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((min(-64052, (max(-348778232, var_2)))));
    var_15 = ((~(-122 % -1987206624)));
    var_16 = var_13;

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] = ((-(((1108099343 != (arr_3 [i_0 - 2]))))));
        arr_5 [i_0] [i_0 - 2] = (((((arr_1 [i_0 + 1]) ^ (arr_1 [i_0 - 1])))) ? (max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))) : (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 - 2]) : (arr_1 [i_0 - 1]))));
        arr_6 [i_0] = ((+(((arr_2 [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1])))));
        var_17 ^= (((((-(arr_2 [i_0]))) ? (arr_0 [i_0]) : ((min((arr_3 [i_0 + 1]), (arr_3 [20])))))));
    }
    var_18 = (((min((var_12 <= var_6), -var_12)) / var_12));
    #pragma endscop
}
