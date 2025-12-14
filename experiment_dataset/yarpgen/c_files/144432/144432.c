/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((min(var_1, 8))) ? (((((min(65535, 3398314786))) ? ((min(var_9, var_3))) : (min(var_2, var_1))))) : (max(((2147483647 ? 1662999328379687873 : var_13)), ((min(var_2, var_6))))));
    var_15 = var_13;
    var_16 = ((((!(((var_13 ? var_9 : var_8))))) ? (((var_9 ? 2116556208 : var_13))) : var_2));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 - 2] = (max((((arr_1 [i_0 - 1]) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 2]))), var_4));
        var_17 -= ((((min(900567470, 4172132873))) ? 18446744073709551615 : 1984));
    }
    for (int i_1 = 2; i_1 < 19;i_1 += 1)
    {
        arr_6 [i_1] [13] |= ((~(((49152 ? 0 : 65527)))));
        var_18 = ((~(arr_5 [i_1] [i_1 - 1])));
        var_19 = (~((434138179 ? ((18446744073709551615 ? 9223372036853727232 : 63)) : (((arr_5 [i_1] [i_1]) ? 917478440528940687 : (arr_5 [i_1] [i_1]))))));
    }
    #pragma endscop
}
