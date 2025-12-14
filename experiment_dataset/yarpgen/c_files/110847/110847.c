/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = var_6;
    var_20 |= (((((!var_5) || (((44 ? 309199262 : var_0))))) ? var_2 : var_6));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = ((38197 ? (max(82, 16383)) : ((max((((var_1 ? (arr_0 [i_0]) : (arr_0 [1])))), (arr_2 [i_0]))))));
        var_22 = (max(var_22, var_2));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        arr_6 [6] |= var_12;
        var_23 = (arr_0 [i_1]);
        arr_7 [i_1] |= (((!var_1) ? var_13 : (((min(var_10, (arr_3 [i_1] [i_1])))))));
        var_24 = (((((var_7 - (arr_2 [i_1])))) ? (var_8 + 216) : (12645414660655675463 + var_2)));
        var_25 = (((arr_3 [i_1] [i_1]) ? (arr_1 [i_1] [18]) : -var_12));
    }
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_26 = ((~(arr_2 [i_2 + 1])));
        var_27 ^= var_13;
    }
    #pragma endscop
}
