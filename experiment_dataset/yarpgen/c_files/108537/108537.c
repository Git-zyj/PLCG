/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108537
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((!var_1) ? var_6 : (((!var_12) ^ ((49592 ? 1 : 127)))))))));
    var_18 = (min((1 * var_14), (!4096)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 *= (arr_1 [i_0]);
        arr_2 [i_0] [i_0] = 1;
        arr_3 [i_0] [i_0] = 1;
        var_20 = (!1);
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_21 = 51;
        var_22 = (((arr_1 [i_1]) ? 1 : (26072 + 1)));
    }
    #pragma endscop
}
