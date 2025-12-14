/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153034
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [11] = ((+((14034 >> (((~var_2) + 1276821291))))));
        arr_3 [3] [i_0] = ((((arr_0 [i_0]) ? var_4 : (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_19 += (arr_5 [i_1]);
        var_20 ^= (((-(arr_4 [i_1]))));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = (!48203);

        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            var_21 = ((-var_0 ? (((!(var_12 - var_18)))) : ((-(((arr_12 [i_3] [i_2] [5]) ? var_10 : var_13))))));
            var_22 -= (min((max(var_4, var_13)), var_15));
            arr_13 [i_3] [i_3] [i_3] = (min(var_1, var_8));
        }
    }
    var_23 = var_9;
    var_24 = var_15;
    #pragma endscop
}
