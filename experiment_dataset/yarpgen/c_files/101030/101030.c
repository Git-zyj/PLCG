/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((-(arr_3 [i_0] [i_0])));
        arr_5 [i_0] = ((15 || (arr_0 [i_0] [i_0])));
        arr_6 [1] [6] = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_13 -= (((min(119, ((12552187007539260920 ? 12552187007539260920 : 84)))) * (-64 / var_11)));
        arr_9 [i_1] = var_11;
        arr_10 [i_1] |= ((((84 * ((var_7 >> (((arr_2 [i_1] [i_1]) - 181)))))) >> (((((((~(arr_1 [i_1] [i_1])))) ? 168 : (arr_2 [i_1] [i_1]))) - 154))));
    }
    #pragma endscop
}
