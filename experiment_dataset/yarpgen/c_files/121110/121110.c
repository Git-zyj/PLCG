/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121110
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 && ((min((!71), var_4)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1) /* same iter space */
    {
        var_11 = ((-((var_9 & (min(1073741823, var_7))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        var_12 = (max(var_4, 8748238466504649795));
                        arr_15 [i_0] [i_0] = 65535;
                    }
                }
            }

            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                var_13 = (arr_18 [i_4] [i_4 - 2] [i_4]);
                arr_19 [i_4] = ((max((arr_11 [i_0] [i_0]), ((9698505607204901841 << (var_3 - 17575356614293756961))))));
                var_14 = ((65526 <= (-9223372036854775807 - 1)));
                var_15 = (i_4 % 2 == zero) ? ((((arr_18 [i_4] [i_4 - 2] [i_4]) << (-22779 + 22796)))) : ((((arr_18 [i_4] [i_4 - 2] [i_4]) << (((-22779 + 22796) - 12)))));
            }
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                var_16 = (max(var_16, ((((arr_2 [i_0] [13]) || (((((min((arr_11 [i_1] [7]), 9176))) ? ((var_7 ? var_7 : var_0)) : (((min((arr_17 [i_0] [4] [i_0]), 22768))))))))))));
                var_17 ^= ((((((1 <= (18446744073709551615 >= 61))))) > (min((0 % 10315718254037194865), var_5))));
            }
        }

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_24 [i_0] [i_0] = (8131025819672356759 - 821224232);
            var_18 = 0;
            arr_25 [i_0] = ((2146959360 ? (((arr_21 [i_0]) & -382993997)) : (((var_2 == (arr_21 [i_6]))))));
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    {

                        for (int i_9 = 0; i_9 < 14;i_9 += 1)
                        {
                            var_19 |= (min((0 - 65535), (1 >= 10315718254037194880)));
                            arr_33 [i_0] [i_7] [i_0] [i_7] [4] [i_0] [i_0] = -var_4;
                            arr_34 [i_7] [i_0] [8] [i_8 - 1] [i_7] [i_0] [i_7] = (max((max((arr_32 [i_8 - 1] [i_8] [i_8 + 1] [i_8 + 1] [i_8]), var_6)), ((min(6797, (arr_12 [i_0] [i_8 - 1] [i_7] [i_8] [i_8 - 1] [i_8 - 1]))))));
                        }
                        var_20 -= max((!0), 4604);
                        var_21 = -32763;
                    }
                }
            }
            var_22 = (max((--3564), (((arr_23 [i_0] [5]) | var_0))));
        }
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 14;i_10 += 1) /* same iter space */
    {
        arr_37 [1] [1] = -var_6;
        arr_38 [i_10] [4] = (var_9 >= var_5);
        arr_39 [i_10] [i_10] = var_9;
    }
    var_23 = (min(var_23, (~var_7)));
    #pragma endscop
}
