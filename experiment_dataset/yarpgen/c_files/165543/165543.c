/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 165543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=165543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/165543
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((!(arr_1 [i_0])));
        var_11 = (min(var_11, (((((((var_5 >= (arr_0 [i_0])))) <= (arr_1 [i_0]))) ? (((!(arr_0 [i_0])))) : (((arr_1 [4]) ? (arr_2 [i_0]) : (((arr_2 [i_0]) - (arr_0 [4])))))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (!47437);

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_12 = ((((max(((1 ? 38805 : var_2)), ((var_5 ? 127 : (arr_4 [i_1])))))) ? 122 : (((arr_6 [i_1] [i_2]) ? -749864996 : var_4))));
            arr_10 [i_1] [i_2] = ((max((~0), ((-30298 ? 2720897061661545644 : 1)))));
            arr_11 [i_1] = 53;
        }
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 8;i_3 += 1)
    {
        var_13 = (1013688078 ? -2147483640 : (-32767 - 1));
        var_14 = (((((!(arr_12 [i_3 + 1] [i_3 + 1])))) >= var_8));
    }
    var_15 = var_5;
    #pragma endscop
}
