/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123207
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_15 = -14;
            var_16 = ((var_8 & (1 < 7696581394432)));
            arr_5 [i_0] [i_0] = (var_13 ? 7350467122898635218 : 0);

            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                var_17 = ((var_2 ? 14 : 1296196746));
                var_18 = (var_10 % var_1);
                var_19 = (~23);
            }
            arr_9 [i_0] [i_1] = (((~var_9) ? (1 > -5785) : ((-17 ? 8191 : -14))));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_20 = 1248562148;
                var_21 = 23;
                arr_15 [7] [7] [i_0] = (~1037281856);
                var_22 &= 1;
            }
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                var_23 = 65515;
                var_24 = ((~(18446744073709551615 & 64)));
            }
            for (int i_6 = 3; i_6 < 8;i_6 += 1)
            {
                arr_23 [i_3] [i_0] = (4546960915226379357 > -8191);
                var_25 = 0;
                var_26 = ((-(var_12 | var_8)));
            }
            var_27 = ((((-(-127 - 1))) <= ((((-127 - 1) || -32743)))));
            var_28 ^= (!-14419);
        }
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_29 = (var_10 % 239);
            arr_26 [i_0] = (-69 + var_8);
        }
        var_30 = (max(var_30, (!1)));
    }
    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_9 = 4; i_9 < 8;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    {
                        var_31 ^= (min((var_12 && var_3), (max(927054044, var_12))));
                        var_32 = (((((((min((-127 - 1), var_0))) > -8171))) % ((-(~4764)))));
                        var_33 ^= (min((287948901175001088 - 96), 1));
                        var_34 = ((((var_11 < (-127 - 1)))) * (var_8 == var_7));
                        arr_37 [i_8] [i_8] [i_10] [i_9] [i_10] = ((!((min(((590370970553347704 ? var_11 : 1)), (var_5 ^ 927054044))))));
                    }
                }
            }
        }

        for (int i_12 = 0; i_12 < 10;i_12 += 1)
        {
            var_35 = (min(var_35, (40535 & var_3)));
            var_36 += (min(var_14, (min(2350523196933207319, var_4))));
            var_37 = (min((((-(-32764 > 562949936644096)))), (~5874301761812735653)));
        }
    }
    var_38 = ((((((min(25003, var_13)) * 5212078499043269363))) ? ((68 ^ (min(37, 3349840526184212674)))) : (min(((-735754811560441337 ? var_4 : 9118217267490296955)), 4764))));
    var_39 = var_12;
    var_40 = ((-25750 ? (((((var_10 ? 13 : 0))) ? var_12 : (((max(64, 35449)))))) : (((((((5874301761812735652 ? var_1 : var_8))) > (2350523196933207336 | 4294967295)))))));
    #pragma endscop
}
