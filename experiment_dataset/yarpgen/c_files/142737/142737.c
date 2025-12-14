/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = (9001160373494839898 >> ((((((arr_0 [i_0]) ? var_0 : (arr_1 [12]))) == (2092838936 + -2092838936)))));
        var_17 = ((~(((!(arr_2 [i_0]))))));
        var_18 = ((-68 ? 2092838936 : -986255489343548535));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        var_19 = (min(var_19, (arr_4 [i_1 + 1])));
        arr_5 [i_1] = ((((((arr_0 [i_1 - 2]) * 747256770929567226))) ? (arr_0 [i_1 - 2]) : ((-(arr_0 [i_1 + 1])))));
    }
    var_20 = ((~(var_12 < var_4)));
    #pragma endscop
}
