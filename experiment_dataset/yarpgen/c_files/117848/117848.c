/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((~var_5) ? ((-(~var_7))) : (((((var_1 ? var_3 : var_5))) ? 1 : ((var_6 ? var_9 : var_3))))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = (-((-347290933 ? ((0 ? 159 : -55)) : ((-(arr_0 [i_0]))))));
        var_12 = (((-((var_9 ? var_5 : var_8)))));
        var_13 = (((--2994911836805001140) ? ((((((arr_0 [i_0]) ? (arr_0 [i_0]) : 148))) ? var_7 : var_5)) : (((((((arr_0 [8]) ? (arr_1 [i_0]) : 8016))) ? ((-(arr_0 [i_0]))) : ((-(arr_0 [i_0]))))))));
    }
    var_14 = (max(var_14, (((((((~var_3) ? ((var_1 ? var_8 : 13029338227434958686)) : (~var_5)))) ? ((-1289945561 ? 16275185001894522488 : 0)) : ((var_6 ? ((8016 ? 15451160168833223380 : -31832)) : (((var_4 ? var_2 : var_4))))))))));
    #pragma endscop
}
