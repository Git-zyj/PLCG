/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_9));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        arr_2 [i_0] = var_11;

        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            arr_5 [i_0] = (arr_3 [i_0] [i_1] [i_1 + 2]);
            arr_6 [i_1] [i_1] = ((arr_3 [i_1 + 2] [i_0 + 1] [i_0]) ? var_10 : (arr_3 [i_1 + 1] [i_0 + 3] [i_0]));
        }
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        var_19 = (max(var_19, (((+(((arr_9 [i_2] [i_2]) - 7703151793516306239)))))));
        var_20 -= ((~(min(1, 1787080599386516809))));
        var_21 = (min(var_21, ((min(1, ((~(arr_9 [i_2] [i_2]))))))));
    }
    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        arr_12 [i_3] = ((1787080599386516818 - (max((1 > 1787080599386516807), (max(8402, -8309447586706378081))))));
        var_22 -= ((-((max(20, -8415)))));
    }
    #pragma endscop
}
