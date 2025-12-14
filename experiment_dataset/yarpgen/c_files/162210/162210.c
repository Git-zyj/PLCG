/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (8588558743279411345 ? (((var_5 ? var_3 : var_5))) : ((((!var_1) - (~var_2)))));
    var_12 = (min(-1, var_6));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_13 |= ((((-13 ? 1178 : 17046621601738520117)) != 2888805038973412467));
        var_14 = (((((var_9 - 39765) ? (arr_0 [i_0]) : (arr_0 [i_0]))) != var_7));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (min((arr_0 [i_1]), 16825498645027842020));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_2] = ((~((var_7 ^ (arr_5 [i_1] [i_2])))));
            arr_10 [i_1] = ((9223372036854775807 ? -7518678747712620128 : -10));
            var_15 = arr_1 [i_1];
        }
        var_16 = (min((min((arr_2 [i_1]), (arr_4 [i_1]))), (min((arr_4 [i_1]), (arr_4 [i_1])))));
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        var_17 = arr_1 [i_3];
        var_18 = ((((((arr_8 [i_3 + 1] [i_3 - 1]) ? -2 : var_6))) ? ((((min(-2702969326829371919, (arr_5 [i_3 - 2] [i_3 + 1])))) ? (arr_13 [i_3]) : (arr_8 [i_3 - 2] [i_3 + 1]))) : ((((((arr_13 [i_3]) ? (arr_13 [i_3]) : 9223372036854775790)) - (25769 + 25762))))));
        var_19 = arr_5 [i_3 - 2] [i_3 + 1];
    }
    #pragma endscop
}
