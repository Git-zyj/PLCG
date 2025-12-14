/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = min(2369352951467391451, (((((arr_1 [i_0]) ? var_6 : (arr_0 [i_0 - 2]))))));
        var_16 = ((var_12 ? (((((-1 ? (arr_1 [i_0]) : var_6))) ? (arr_1 [i_0]) : (((arr_1 [i_0]) | (arr_0 [i_0]))))) : (((arr_1 [i_0]) ? (arr_0 [i_0 - 2]) : (arr_1 [i_0])))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] = arr_4 [i_1];
        arr_7 [i_1] = (((~var_5) / ((((((arr_1 [i_1]) ? var_0 : (arr_1 [i_1])))) ? (((arr_1 [i_1]) ? (arr_5 [i_1 - 1] [i_1]) : -2369352951467391442)) : ((var_3 ? 1 : (arr_4 [i_1])))))));
    }
    var_17 = (min(((((max(var_14, (-9223372036854775807 - 1)))) ? (((min(0, 34)))) : ((var_13 ? var_8 : 32)))), 0));
    #pragma endscop
}
