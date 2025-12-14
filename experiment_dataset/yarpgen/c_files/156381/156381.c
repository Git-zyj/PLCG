/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (!0);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 ^= (((((44806 ? ((var_4 ? var_4 : 5801075192100805123)) : 123))) && 27202));
            var_18 = (var_10 > var_14);
            var_19 = (!var_2);
            var_20 = (((!3768142121) ? (min(((var_9 ? 9717781868014351588 : 1518684111)), 0)) : (((((min(52679, 795872095))) ? (255 * 65521) : ((var_7 ? 248138042865287485 : 131)))))));
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_21 = ((~((126 ? 1358017725 : (!var_14)))));
        var_22 = -8486114663708559349;
        var_23 = (((-9 - 979711487) + (((1358017702 ? var_6 : ((7934172840021901876 ? 0 : 8064)))))));
    }
    var_24 = (min(var_24, (((((var_2 ? (-4293487949785737187 + -972) : -var_7)) / var_1)))));
    #pragma endscop
}
