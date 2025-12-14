/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = var_9;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] |= 1;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_16 = (!var_8);
            var_17 -= (~2327944500382863285);
            var_18 |= var_7;
            var_19 = (2862287634242177181 - 1);
            var_20 &= var_13;
        }
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            var_21 = 929955174;
            var_22 = (max(var_8, var_1));
            var_23 = ((-(~1)));
            var_24 = min((((2558044900224613114 - 2558044900224613114) ? 15 : 9658)), ((((249 ? 7 : 0)))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_25 ^= (~var_5);
            var_26 = (((((((-1 ? 1 : var_8)) / -var_11))) ? (-5380 && 0) : (~14)));
        }
        for (int i_4 = 2; i_4 < 18;i_4 += 1)
        {
            var_27 = ((((((4294967280 ? 1582570325 : var_2)) ? 2097088 : (max(9000600452809417459, -6989614671931659208))))));
            var_28 = (min(var_28, (-8093013132103047661 && 18446744073709551615)));
            var_29 &= (min((1 << var_9), 1));
        }
        var_30 = (min(var_30, ((0 << (((min(var_4, var_10)) & (0 << var_12)))))));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_31 = 0;
        var_32 -= 1;
        var_33 = var_11;
        var_34 = (~0);
    }
    #pragma endscop
}
