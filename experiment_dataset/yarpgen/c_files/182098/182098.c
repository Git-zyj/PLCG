/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 = (arr_0 [i_0 - 1] [i_0 - 1]);
        arr_2 [i_0] = -2098815211;
        arr_3 [i_0 - 1] = (arr_1 [14]);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] = (1 - -2098815185);
        var_13 = (((arr_5 [i_1]) & (arr_5 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_14 = (min(var_14, 1));
        var_15 = var_6;
        arr_10 [i_2] = 14415502241218995223;
    }
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        var_16 = ((((2098815185 ? -2098815220 : 1)) != ((-((102 ? 1 : 3))))));
        arr_15 [i_3] = (((min((arr_13 [i_3 + 1] [i_3]), (arr_13 [i_3 - 2] [i_3]))) * 1));
        arr_16 [i_3] = (((arr_12 [i_3]) | 3584));
        arr_17 [i_3] = (arr_14 [i_3]);
    }
    #pragma endscop
}
