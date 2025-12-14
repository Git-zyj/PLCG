/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_3;
    var_15 += 6376758787107290788;

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = 1;
        var_16 &= ((var_0 && ((min((arr_0 [i_0]), ((var_3 ? 1 : var_9)))))));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_6 [7] = ((var_11 ? (min(((var_8 ? var_2 : var_8)), (var_3 <= 86))) : (((!(arr_5 [i_1 - 2] [i_1 - 1]))))));
        arr_7 [i_1] &= ((min(((1 ? 1422125120272485543 : 17024618953437066073)), (max((arr_1 [i_1] [i_1 + 1]), var_13)))) * (((3916050786529085416 ? (arr_3 [i_1]) : var_10))));
        arr_8 [i_1] = (arr_3 [i_1]);
    }
    #pragma endscop
}
