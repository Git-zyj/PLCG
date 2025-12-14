/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min((((var_10 ? var_15 : var_0))), (((!(52629 || -45702267))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((min((arr_0 [i_0]), 1024))) && ((((arr_0 [i_0]) << (arr_0 [i_0]))))));
        var_20 = ((((min(-100, 16))) << ((((max(243, -4886460535697397692))) - 243))));
        arr_3 [i_0] = var_15;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (max(var_21, ((-((1 ? var_15 : var_9))))));
        arr_6 [i_1] = ((!(((38 << (13100127662210555900 - 13100127662210555882))))));
        var_22 = -var_10;
    }
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        var_23 = (((((min(var_10, var_18)) + 9223372036854775807)) << (((((min(var_10, (38 | -32745))) + 32761)) - 48))));
        var_24 = (((((arr_8 [i_2 - 1]) && var_1)) && ((var_7 && (((var_8 << (14 - 14))))))));
        arr_10 [i_2] = (min(var_1, (240 && 147)));
    }
    #pragma endscop
}
