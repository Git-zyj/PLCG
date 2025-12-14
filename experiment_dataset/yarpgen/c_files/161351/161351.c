/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161351
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = (max((arr_1 [i_0]), (arr_1 [i_0])));
        var_22 = (min(var_22, -18543));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((-(0 & 1))));
        var_23 -= (((((-(arr_1 [i_1])))) ? (((15 ? 43 : 234))) : (var_13 % 5915875491002882594)));
        arr_6 [i_1] [i_1] = 1196927336498067948;
        var_24 = (((arr_2 [i_1] [i_1]) ? (!5915875491002882594) : (min(((max(1, var_9))), (max((arr_2 [4] [i_1]), (arr_1 [i_1])))))));
        var_25 = (arr_3 [2]);
    }
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_26 = (max(var_26, (((var_3 ? ((min(0, 225))) : var_19)))));
        arr_9 [i_2] [i_2] = 80;
        var_27 = ((+((var_1 ? (arr_7 [i_2] [i_2]) : ((((arr_0 [i_2]) / 4194304)))))));
    }
    #pragma endscop
}
