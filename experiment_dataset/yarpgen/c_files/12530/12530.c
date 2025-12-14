/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_0 [i_0]) < 5));
        arr_3 [i_0] = (arr_1 [i_0] [i_0]);
        arr_4 [i_0] [10] &= ((-(arr_0 [i_0])));
        var_18 = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = -1418858495;
        arr_9 [i_1] = max(((~(var_4 ^ var_3))), ((~((-(arr_7 [i_1]))))));
        arr_10 [i_1] [18] &= ((~(min(((var_12 ? 32767 : (arr_6 [i_1] [i_1]))), (!32791)))));
        var_19 = ((min(var_5, (((~(arr_6 [15] [i_1])))))));
    }
    var_20 &= (max((~var_16), var_12));
    var_21 -= 55035;
    #pragma endscop
}
