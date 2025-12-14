/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((((((arr_0 [i_0]) && (((~(arr_1 [i_0]))))))) < ((0 / (arr_0 [i_0])))));
        arr_3 [i_0] = 1;
        var_19 = (((((arr_0 [i_0]) ? 20897753 : 10624978562535746857)) & (arr_0 [i_0])));
        var_20 = ((((((((24266 | (arr_1 [i_0])))) ? ((45069 ? 223 : 223)) : (((arr_0 [i_0]) ? var_3 : (arr_0 [i_0])))))) < ((var_13 ? var_18 : (arr_0 [i_0])))));
    }
    var_21 = var_6;

    /* vectorizable */
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_8 [i_1] [i_1] [i_1] = 11926806652159540813;
            var_22 = (max(var_22, ((((((223 ? var_5 : (arr_4 [i_2] [i_2])))) || (1 || 2623275759))))));
            var_23 = (((~-1261168251) ? ((((arr_6 [i_2]) ^ 244))) : 2623275759));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_12 [i_1] [i_1] = (arr_11 [i_1] [i_1]);
            arr_13 [i_1] [i_1] [i_1] = (arr_6 [i_3]);
            var_24 -= ((9448 | 4018758782) <= ((1671691537 | (arr_11 [i_1] [i_3]))));
        }
        var_25 = 4051543788;
    }
    var_26 = ((3521687281958833697 ? var_0 : (((-56530680708382752 ? var_5 : var_6)))));
    var_27 = -var_14;
    #pragma endscop
}
