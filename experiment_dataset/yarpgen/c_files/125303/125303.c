/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= var_7;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] |= (~122);
        arr_4 [1] = (arr_2 [i_0] [i_0]);
        arr_5 [i_0] [6] = (((-(arr_1 [8]))));
        arr_6 [i_0 + 1] = -83;
        arr_7 [i_0] |= var_14;
    }
    for (int i_1 = 3; i_1 < 16;i_1 += 1) /* same iter space */
    {
        arr_11 [i_1] = (arr_0 [i_1]);
        arr_12 [i_1] = (min(((((min(var_6, var_8)) <= 32767))), (max(-29, (arr_8 [i_1 + 2] [i_1])))));
        arr_13 [i_1] = ((((min((arr_8 [i_1 - 3] [i_1]), (arr_8 [i_1] [i_1])))) | (arr_8 [i_1 + 1] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 3; i_2 < 16;i_2 += 1) /* same iter space */
    {
        arr_17 [13] [i_2] = (((arr_14 [1]) <= (arr_16 [i_2])));
        arr_18 [i_2] |= (arr_0 [i_2]);
    }
    #pragma endscop
}
