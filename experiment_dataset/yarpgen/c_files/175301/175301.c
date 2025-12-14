/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = var_9;

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        var_17 = ((((((arr_0 [i_0 - 2]) ? var_13 : -1574780596))) ? (((arr_2 [i_0 - 2]) ? (arr_2 [i_0 - 3]) : var_0)) : (((arr_2 [i_0 - 4]) ? (arr_2 [i_0 - 1]) : var_9))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_18 = (max(var_18, ((((((var_0 ? (arr_0 [i_0 - 1]) : (arr_3 [i_0 - 2])))) ? ((1 ? 299 : var_13)) : ((-32753 ? var_9 : 0)))))));
            arr_5 [i_0] [i_1] &= (((((var_1 ? var_8 : (arr_4 [i_0 - 3])))) ? ((((arr_4 [i_0 - 3]) ? (arr_4 [i_0 - 1]) : var_14))) : (((arr_4 [i_0 + 1]) ? var_5 : (arr_4 [i_0 - 1])))));
        }
        arr_6 [i_0] [i_0 - 1] = (((((-26 ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 + 1])))) ? (((var_13 ? var_4 : var_7))) : ((var_3 ? (arr_4 [i_0 - 4]) : var_0))));
    }
    #pragma endscop
}
