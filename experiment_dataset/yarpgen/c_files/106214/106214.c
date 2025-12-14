/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((!((((25 | var_10) ? ((13787298987562651721 ? (-2147483647 - 1) : 4659445086146899911)) : var_5)))));
    var_14 = var_7;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 = (min(255, (arr_0 [i_0])));
        arr_4 [i_0] = ((max(var_1, ((var_4 ? var_9 : var_4)))) << ((((var_3 ? 255 : (arr_2 [i_0] [i_0]))) - 241)));
        arr_5 [2] |= ((((((arr_1 [10]) ? (arr_3 [i_0] [6]) : ((min(-5808, 250)))))) ? ((max(var_9, (arr_2 [i_0] [i_0])))) : (((((7059394402087768313 ? 176 : 127)) >= 89)))));
    }
    for (int i_1 = 3; i_1 < 11;i_1 += 1)
    {
        arr_9 [i_1] = (arr_7 [i_1 - 1] [i_1 - 1]);
        var_16 = (max(var_16, (max(((-(-127 - 1))), (((((arr_8 [i_1]) ? -1 : (arr_8 [i_1 - 3])))))))));
        var_17 = (max(0, (((arr_2 [i_1 + 1] [i_1 - 1]) + var_1))));
        var_18 = var_4;
    }
    #pragma endscop
}
