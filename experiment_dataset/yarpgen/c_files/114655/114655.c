/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = 4095;
        var_17 = (max((!32766), (!var_4)));
        arr_2 [16] = (max((((-9223372036854775807 - 1) ? 9223372036854775807 : -2922)), var_8));
        var_18 = (max(var_18, ((((max(var_4, 32750)) != ((((var_10 ? var_13 : var_14)))))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_19 ^= (((arr_3 [6]) ? 52266 : 32760));
        var_20 = (~var_12);
        var_21 += -6;
    }
    var_22 = var_5;
    #pragma endscop
}
