/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;
    var_19 = ((min(((var_6 ? 229 : var_0)), ((var_17 >> (var_15 + 12047))))) >> (min(1, ((103 ? 4627521569769455251 : var_11)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] |= var_14;
        arr_3 [i_0] = ((~(min(var_13, (max(var_2, (arr_0 [i_0] [i_0])))))));
        var_20 = ((!(~41)));
        arr_4 [i_0] = (arr_1 [i_0] [i_0]);
        var_21 += (min((max(var_10, (arr_1 [i_0] [i_0]))), (((!(1 <= 127))))));
    }
    var_22 = (((((var_12 ? var_5 : (((var_10 ? var_10 : var_11)))))) ? var_3 : ((min(var_6, (var_5 || var_11))))));
    #pragma endscop
}
