/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += -32749;
    var_15 = ((((12 ? (((max(-7, 5853)))) : var_3))) ? (~2280386414) : 11);

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            var_16 = ((max((arr_3 [i_1 + 2] [8]), var_11)) - (((arr_4 [i_0] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_5 [i_1 - 3] [i_1] [i_1]))));
            arr_6 [2] [i_0] = (max((((arr_5 [i_0] [i_0] [3]) ? ((-(arr_0 [i_1 + 2]))) : ((var_13 ? 1489395834 : 1714846707)))), -14653));
        }
        arr_7 [i_0] = (((((1714846729 ? 3579539569 : (arr_0 [i_0 + 1])))) ? (arr_3 [i_0] [i_0]) : (arr_4 [i_0] [i_0])));
        arr_8 [i_0] [i_0] = ((arr_4 [i_0] [i_0]) | ((~((var_2 ? (arr_2 [i_0] [15]) : (arr_2 [i_0] [17]))))));
        var_17 = (min(var_17, var_2));
        arr_9 [i_0] = (((1748078649 ? 2783173533 : -10030)));
    }
    #pragma endscop
}
