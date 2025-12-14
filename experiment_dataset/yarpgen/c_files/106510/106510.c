/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? 2163562185465348285 : 4123227057));
        arr_3 [i_0] = ((4294967295 ? 1378928285 : (var_4 != 8)));
        arr_4 [i_0] [i_0] = ((1 ? 1971874602021576269 : 3279680691));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_9 [i_1] = ((arr_6 [1] [i_2 - 1]) <= (arr_0 [i_1]));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_12 [i_3] [i_2] [i_3] = ((-(!637286200890659330)));

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {

                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_14 = (max(var_14, var_13));
                        var_15 = (~var_11);
                        var_16 ^= ((17809457872818892293 ? 3117899531 : 637286200890659323));
                        arr_18 [i_5] [i_4 - 1] [i_3] [i_3] [i_1] [i_1] = (17809457872818892286 + 18290761701713960176);
                    }
                    arr_19 [i_3] = 3117899531;
                    var_17 ^= ((!(((1 ? (arr_16 [i_1] [i_1] [i_2] [i_3] [i_3] [i_4] [i_4 - 1]) : (arr_15 [i_1] [i_2 + 3] [i_3] [i_3] [i_4]))))));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_18 = (var_10 == 15039277612027182048);
                    var_19 *= ((!(arr_20 [i_1] [i_1] [i_1] [1])));
                }
            }
            for (int i_7 = 2; i_7 < 23;i_7 += 1)
            {
                arr_26 [i_7] [i_2 + 3] [1] [i_2] = (1177067761 ? var_13 : var_10);
                var_20 = 255;

                for (int i_8 = 1; i_8 < 22;i_8 += 1)
                {
                    arr_30 [i_7] [5] [i_2] [i_7] = var_13;

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_33 [i_2] [i_2 + 3] [i_7] [18] [i_2] = -1744649370461104925;
                        var_21 ^= var_0;
                        var_22 = (max(var_22, ((-(var_11 | var_0)))));
                        var_23 ^= (!(((1 ? var_0 : 10679692207286315066))));
                        var_24 = (arr_20 [i_8] [i_2] [i_7] [i_8 - 1]);
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1)
                    {
                        arr_38 [i_7] [i_2 + 2] = (15814443373987450874 > 12069938441037943725);
                        var_25 = (min(var_25, (((!var_0) > var_12))));
                        arr_39 [1] [i_7] [19] [i_8 - 1] [i_1] = (((arr_1 [i_10]) ? 4294967295 : (((((arr_5 [i_1]) != 1))))));
                    }
                    for (int i_11 = 2; i_11 < 23;i_11 += 1)
                    {
                        var_26 = (min(var_26, var_6));
                        var_27 = (arr_13 [i_2] [i_11 + 1] [i_7] [i_7] [i_2 + 2] [i_2]);
                        arr_42 [i_1] [i_1] [i_7] [i_8] [i_11 + 1] = 13617415146199266912;
                        arr_43 [i_1] [i_1] [i_2 + 3] [i_7 - 1] [i_8 + 3] [i_7] = var_4;
                    }
                }
                for (int i_12 = 0; i_12 < 25;i_12 += 1)
                {
                    arr_47 [i_7] = (var_0 - (arr_23 [i_7] [i_7]));

                    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
                    {
                        var_28 = (1 ^ 1);
                        var_29 -= (((arr_44 [i_1] [i_2] [i_2] [i_2] [i_2 + 1] [i_1]) % 7715617817660071192));
                        var_30 = 1;
                        arr_50 [i_1] [i_2] [i_7 - 2] [i_7] = ((1830655965 ? var_0 : var_9));
                    }
                    for (int i_14 = 0; i_14 < 25;i_14 += 1) /* same iter space */
                    {
                        var_31 *= -1;
                        var_32 = -var_3;
                        arr_54 [i_1] [i_7] [i_14] = 7767051866423236552;
                    }
                }
            }
            for (int i_15 = 0; i_15 < 1;i_15 += 1)
            {
                /* LoopNest 2 */
                for (int i_16 = 0; i_16 < 1;i_16 += 1)
                {
                    for (int i_17 = 0; i_17 < 25;i_17 += 1)
                    {
                        {
                            var_33 = var_8;
                            var_34 = (max(var_34, (!var_11)));
                        }
                    }
                }
                var_35 = (!13617415146199266912);
            }
            arr_62 [12] [i_2 - 1] [i_1] = 10400419937793644127;
            var_36 = (!var_10);
        }
        var_37 = 1;
    }
    var_38 = (!var_9);
    var_39 = (max(var_39, 7715617817660071192));
    var_40 ^= (max(var_6, 637286200890659333));
    var_41 = var_7;
    #pragma endscop
}
