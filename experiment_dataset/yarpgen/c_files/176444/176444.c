/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((!(!49415)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_7;

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_11 = var_2;
            arr_7 [1] [i_0] = var_9;
        }
        for (int i_2 = 1; i_2 < 13;i_2 += 1)
        {
            arr_10 [i_0] = (!var_2);
            var_12 = 112;
            var_13 = (var_0 / 142);
            var_14 |= ((-((var_4 ? -30657 : var_1))));
        }
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            var_15 = ((113 ? 30657 : -1709766732372282926));
            var_16 = 61574;
            var_17 += var_4;
        }
    }
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        var_18 = -var_1;

        /* vectorizable */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_19 += -var_4;
            var_20 = -4117780469529586983;
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
        {
            var_21 = ((!(140 != var_7)));
            arr_21 [i_4] [i_6] = 19;
            var_22 |= (((!-30657) > var_1));
            var_23 = (max(var_23, (((!(((61601 << (992417734 - 992417720)))))))));
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
        {
            arr_24 [i_4] [i_7] [i_4] = (~(min(((var_5 ? 163 : 3302549569)), var_7)));
            var_24 = ((-(((!var_0) ? -var_4 : 157))));

            for (int i_8 = 0; i_8 < 25;i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            arr_32 [i_4] [i_7] [i_4] [i_9] [i_10] = -30649;
                            var_25 ^= ((-(((var_9 > (((min(var_0, 3934)))))))));
                            var_26 = ((3628141194 ? 3935 : 15295));
                            arr_33 [i_4] [i_4] [i_4] [i_4] [i_4] [i_9] [i_10] = ((!((max(var_5, (var_2 != 15))))));
                        }
                    }
                }
                arr_34 [i_4] [i_7] [i_4] = ((+(((!var_3) << (var_8 != 129)))));
            }
            /* vectorizable */
            for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        {
                            var_27 = ((-1 / ((var_7 ? 95 : var_0))));
                            arr_43 [i_4] = (((!var_2) ? (var_9 / var_8) : -var_0));
                        }
                    }
                }
                var_28 *= (!4210031207);
            }
            arr_44 [i_4] = (min((((!((max(var_0, var_1)))))), 62397));
        }
    }
    #pragma endscop
}
