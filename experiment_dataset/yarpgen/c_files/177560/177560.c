/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max((((var_1 + 2147483647) >> ((((var_8 ? var_0 : var_3)) - 3193438861)))), var_10);
    var_12 = (((max(var_5, var_7)) | ((~(~1)))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_13 = ((((arr_1 [i_0 - 1]) ? (arr_2 [i_0 - 1]) : (arr_1 [i_0 - 1]))));
        var_14 = (((((((-16549 ? 10618878622419280644 : (arr_2 [12]))) | var_8))) ? (((!(((1588313179 << (((var_4 + 98) - 25)))))))) : (((arr_2 [i_0 - 1]) ? (max((arr_1 [i_0 - 1]), 204)) : 1588313159))));
        var_15 = ((var_5 ? (arr_2 [i_0 - 1]) : ((((arr_2 [i_0 - 1]) >> (((arr_1 [i_0 - 1]) - 278300925)))))));
        var_16 += ((((((arr_1 [7]) ? (~16) : (!-2147483636)))) > var_0));
    }
    #pragma endscop
}
