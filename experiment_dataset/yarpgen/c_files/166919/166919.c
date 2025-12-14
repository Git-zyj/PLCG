/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166919
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((max(((max(var_13, var_2))), var_1)));
    var_20 = ((var_7 ? (var_9 >= var_14) : (65535 - var_6)));
    var_21 = (min((max(var_12, var_8)), var_18));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        var_22 = ((~(!65533)));
        var_23 += var_10;
        var_24 -= (arr_0 [i_0 + 3]);
        var_25 = 128;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_26 = (arr_3 [i_1]);
        var_27 += var_13;
        var_28 = ((-28 ? 113 : ((536870880 ? 2147483647 : 4294967295))));
        var_29 += (!(var_16 && 65535));
    }
    for (int i_2 = 3; i_2 < 15;i_2 += 1)
    {
        var_30 -= (min(((var_10 | (arr_6 [i_2 - 3] [i_2 - 3]))), var_16));
        arr_7 [i_2 - 2] = (((!var_18) | var_18));
        arr_8 [i_2] = (!var_13);

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_31 += max(112, -114);
            var_32 = (max((((arr_11 [i_3] [i_3] [i_2 - 2]) / 1604493428227800826)), var_1));
            arr_13 [i_2] [i_2] = (((((-var_18 ? ((109 ? 1 : 4)) : var_7))) || ((max((arr_10 [i_3] [i_2 - 3]), 1521717747529831579)))));
            arr_14 [i_3] [16] [16] = ((-(~-1604493428227800827)));
            var_33 = (!var_5);
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            var_34 = (((1 > 4294967295) ? (((-((-(arr_5 [i_2])))))) : ((-(((arr_6 [i_4] [i_2]) ? var_10 : var_10))))));
            var_35 += (max((((arr_16 [i_2]) ? var_8 : -8613445671689041308)), (~var_4)));
            arr_18 [i_2 - 3] [i_4] [i_2] &= (arr_5 [i_2]);
        }
    }
    for (int i_5 = 2; i_5 < 24;i_5 += 1)
    {
        var_36 = ((((((arr_21 [i_5 + 1] [i_5 + 1]) + var_2))) && var_16));
        var_37 = (min(-1604493428227800827, ((-((-5029 ? 438654768484648920 : 1))))));
        var_38 = (min(var_38, (((3079547749104288677 ? ((-var_8 ? 21 : ((65535 ? var_2 : 1873615759)))) : (((-17662 ? ((max(var_11, 44162))) : ((min(var_13, var_13)))))))))));
    }
    var_39 = var_7;
    #pragma endscop
}
