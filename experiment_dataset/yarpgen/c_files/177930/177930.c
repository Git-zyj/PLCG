/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((~(((arr_0 [i_0]) ? (arr_0 [i_0]) : var_7)))));
        arr_3 [i_0] = var_7;
        var_20 = (((((~10) <= (((~(arr_0 [i_0])))))) ? (min((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0]))), (!14175))) : (((((max(var_1, (arr_1 [i_0] [i_0]))) != (arr_1 [i_0] [i_0])))))));
        var_21 = (((!(((var_14 ? (arr_1 [i_0] [i_0]) : var_17))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_22 = (arr_5 [i_0] [i_0]);
            arr_8 [i_0] = ((arr_5 [i_0] [i_1]) ? 4294967267 : var_5);
        }
    }
    var_23 &= min(var_17, (-18446744073709551614 >= 43297));
    #pragma endscop
}
