/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = ((-1313410935 ? (-1312578726 + -1) : (arr_0 [i_0])));
        var_17 = (max(var_17, (((!(((7782240776228404411 ? (arr_1 [13]) : 10664503297481147205))))))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = (((arr_2 [i_0]) || (arr_2 [i_0])));
            arr_6 [i_1] [i_1] = (((((148 ? 7782240776228404411 : (arr_0 [i_1])))) ? (var_7 + 10664503297481147201) : 151));
            arr_7 [i_1] = ((arr_3 [i_0] [i_1] [i_0]) <= (arr_4 [i_1] [16] [i_0]));
            var_18 += ((var_10 * ((var_8 / (arr_0 [i_0])))));
            arr_8 [i_1] [i_1] = 7782240776228404417;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_0] [1] &= ((arr_11 [i_2] [i_0] [i_0]) >= (arr_10 [i_0]));
            arr_13 [i_0] [i_0] [i_0] = (!var_9);
            arr_14 [i_0] [i_2] = ((-(arr_10 [i_0])));
            arr_15 [i_0] |= (arr_3 [i_0] [i_2] [i_0]);
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_19 = (max(((min(62778, 6652))), (((arr_3 [1] [i_3] [i_3]) + ((((6 && (arr_10 [i_3])))))))));
        arr_19 [i_3] [i_3] = var_13;
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_20 = (min(var_20, ((((((2145331685 + 6) | -19035)) <= ((max(1, 15360))))))));
        arr_24 [13] [i_4] = (((-32767 - 1) ? -1313410938 : var_10));
    }
    var_21 *= (var_4 > 10664503297481147192);
    var_22 = var_1;
    #pragma endscop
}
