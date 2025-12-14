/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 += ((min((min(918234271668369836, 2137101471)), var_2)));
        var_18 = ((-(((arr_1 [i_0]) ? 30 : var_15))));
        arr_3 [i_0] = ((((511 ? ((79 ? 7 : 27608)) : 37914)) >> (var_16 - 4559045051923222310)));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = ((((min(var_6, var_9))) ? (((var_7 ? 37928 : var_16))) : ((var_8 ? var_15 : 10881374230734848683))));
        var_19 = (min(var_19, ((max((max(-9033276094133876280, var_7)), ((~((max(0, (arr_1 [i_1])))))))))));
        var_20 = (min(var_20, (!27753)));
    }
    var_21 = (((((~var_8) << (2137101459 - 2137101414)))) ? ((-((13195094728247961118 ? var_15 : 4095577900132426894)))) : var_0);
    var_22 &= var_1;
    #pragma endscop
}
