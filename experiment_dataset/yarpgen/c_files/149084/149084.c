/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_3 [0] = var_3;
        var_14 ^= var_3;
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_15 = var_13;
        var_16 = (arr_5 [i_1]);
        var_17 = (arr_5 [i_1]);
        var_18 = (((~var_2) | (((min((arr_5 [i_1]), (arr_5 [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_19 = ((1243400520 ? var_1 : -1591292990));
        var_20 &= ((((var_8 != ((1243400514 ? 1243400514 : var_2))))));
    }
    for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
    {
        var_21 = var_4;
        var_22 = (16384 + 65521);
    }
    #pragma endscop
}
