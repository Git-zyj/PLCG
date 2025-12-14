/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 154536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=154536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/154536
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (!1631355235);
    var_19 = (((!var_17) - (!2019665179)));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_20 = ((((((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0])))) ? (((arr_3 [i_0]) ? (((arr_3 [i_0]) % (arr_3 [i_0]))) : var_8)) : (-1896585543 >= 1)));
        var_21 = ((+(min(3642570854, ((((arr_1 [i_0]) * (arr_3 [9]))))))));
        arr_4 [i_0] = (arr_0 [i_0 + 1] [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_22 -= (arr_6 [i_1]);
            var_23 = ((~((((1896585542 + (arr_7 [i_1] [i_2] [i_2]))) + (((-(arr_8 [i_1]))))))));
        }
        arr_9 [i_1] [i_1] = (((~var_10) ? (((-(((arr_6 [i_1]) | (arr_5 [i_1])))))) : (((~(arr_7 [i_1] [i_1] [i_1]))))));
    }
    #pragma endscop
}
