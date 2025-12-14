/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1149
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += (-335580309 ? -727391913 : 727391913);
    var_15 = var_6;
    var_16 = (max(var_16, var_11));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        var_17 = var_2;
        var_18 = (((~-11918) ? (arr_0 [2]) : ((-var_2 << (((727391910 + -541280172544425183) + 541280171817033290))))));
        var_19 = (max(var_19, (((-((-(arr_0 [i_0 - 1]))))))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 &= (arr_0 [9]);
            var_21 -= (min(9223372036854775787, -541280172544425183));
        }
    }
    for (int i_2 = 4; i_2 < 10;i_2 += 1)
    {
        var_22 = (max(var_22, ((max(var_11, 1)))));
        var_23 &= (min((((var_12 - (~-1968374590)))), 1023));
        var_24 = (min(((min(-804717305383052875, 77))), (((-((min((arr_2 [1] [1]), var_2))))))));
    }
    #pragma endscop
}
