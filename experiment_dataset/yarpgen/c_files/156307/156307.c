/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_1 ? 17196 : ((var_12 ? var_0 : var_6))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = (min(var_19, (5474 & -17180)));
        arr_2 [i_0] = ((((min(var_15, (arr_1 [i_0] [i_0])))) == (((arr_1 [i_0] [i_0]) ^ var_17))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_20 = (max(var_20, (-8485 & -8485)));
        arr_6 [i_1] [4] = ((-((1944 ? -var_6 : (!var_1)))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
        {
            var_21 = (((arr_9 [i_2 + 2] [i_2 + 1]) != (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2])));
            var_22 -= var_15;
            var_23 = 8493;
            arr_10 [9] [i_2] = (8492 & 8500);
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_24 = (max((arr_14 [0] [0] [i_3 - 1]), -8485));
            var_25 = min(var_8, (max((arr_9 [i_3 - 1] [i_3]), var_15)));
            arr_15 [i_1] = (((~-8479) ? (-32767 - 1) : -4800));
            arr_16 [2] [i_3] = (-32767 - 1);
        }
        for (int i_4 = 1; i_4 < 14;i_4 += 1) /* same iter space */
        {
            arr_20 [i_4] [8] = (((min((-32760 & 2016), ((6960 ? 21697 : (arr_14 [i_1] [i_1] [i_4]))))) << ((((((var_3 << (var_3 - 26337))) - (arr_11 [i_1] [i_4] [i_1]))) - 840403))));
            var_26 = ((-((var_9 * (var_1 & 6960)))));
        }
        var_27 = (max(var_27, (8484 + 17202)));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        arr_24 [i_5] = (((((((-32767 - 1) % 8490)) + 2147483647)) >> (((min((var_0 > var_5), -6534)) + 6545))));
        arr_25 [2] = (max((((arr_23 [i_5]) ? ((14570 ? (arr_22 [i_5] [i_5]) : (arr_23 [i_5]))) : 6063)), (~-32762)));
        var_28 = ((((min(var_2, -32761))) ? ((min(8176, var_1))) : var_8));
        var_29 = (max(var_29, -20035));
    }
    #pragma endscop
}
