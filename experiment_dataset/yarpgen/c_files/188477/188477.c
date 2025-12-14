/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_11 = (max(var_11, 20744));
        var_12 = ((528482304 ? var_7 : ((var_6 ? (arr_0 [i_0] [i_0]) : var_0))));
        arr_2 [i_0] [i_0] = (((arr_0 [i_0] [i_0]) + (((arr_1 [i_0]) + (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((!((max((arr_0 [i_0] [i_0]), (var_3 && 27803))))));
    }
    for (int i_1 = 1; i_1 < 24;i_1 += 1)
    {
        var_13 -= var_3;
        var_14 = (((((-22401 ? -28 : 4294967295))) * (((arr_5 [i_1]) ? ((612187225 ? 27798 : 10939082719049199813)) : ((((arr_4 [i_1] [i_1]) ? var_9 : var_9)))))));
    }
    var_15 = (~var_4);
    #pragma endscop
}
