/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_5 / ((var_5 ? var_4 : var_15)))) * var_12);
    var_17 = ((var_4 || (((var_7 ? ((var_5 ? var_13 : var_8)) : (var_0 <= var_15))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_18 += ((~(max((arr_2 [i_0]), (((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_0 [i_0])))))));
        var_19 &= (-290611961976311657 - 35184369991680);
        var_20 = ((((((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))) >> (((arr_1 [i_0] [i_0]) - 4089611771))))) ? ((((arr_1 [i_0] [i_0]) >= (arr_0 [i_0])))) : (((!((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))))))));
        var_21 ^= (arr_1 [i_0] [7]);
        arr_3 [i_0] = ((-((~(arr_2 [i_0])))));
    }
    var_22 = (min(((-290611961976311661 ? -7039677241340966824 : 290611961976311655)), var_7));
    #pragma endscop
}
