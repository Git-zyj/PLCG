/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_19 *= (max((arr_3 [i_1]), (((!(~var_7))))));
            var_20 = -var_1;
        }
        var_21 -= var_8;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 15;i_2 += 1)
    {
        var_22 = (arr_0 [i_2]);
        var_23 = (arr_2 [i_2]);
        var_24 = (min(var_24, (((-((-(arr_6 [i_2]))))))));
    }
    var_25 = (min(var_25, (((var_2 ? var_10 : (0 - 0))))));
    var_26 &= var_2;
    #pragma endscop
}
