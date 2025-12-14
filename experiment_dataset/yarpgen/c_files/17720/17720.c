/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = ((((((arr_2 [i_0]) ? ((min(1, 1))) : (var_10 || 41)))) ? ((((-1884049391 <= (arr_1 [i_1] [i_0]))))) : (max((max(var_3, var_10)), var_6))));
            var_11 = min(var_7, ((var_6 + (arr_1 [i_1 - 2] [i_1 - 2]))));
            var_12 = (max((((((arr_1 [i_0] [i_0]) < 12336631372817535716)))), ((max(1, var_8)))));
            var_13 = (((((max(48, (arr_3 [i_1 - 1])))) == var_7)));
            var_14 -= ((1 ? (arr_3 [i_1]) : 62));
        }
        arr_5 [i_0] = (arr_2 [4]);
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_15 = (max(var_15, (~18446744073709551610)));
        var_16 = ((((!(~-3471144050855566271))) ? (arr_7 [i_2]) : (min(((var_1 ? (arr_7 [i_2]) : (arr_6 [i_2]))), var_6))));
        arr_8 [i_2] = (arr_6 [i_2]);
    }
    var_17 ^= ((((~(max(9223372036854775802, var_3)))) / var_0));
    var_18 = ((var_7 ? var_3 : (min(var_7, ((130023424 ? var_1 : 3990512125660614772))))));
    #pragma endscop
}
