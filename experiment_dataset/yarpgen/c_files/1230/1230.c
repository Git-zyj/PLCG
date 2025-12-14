/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(var_3, -var_8)));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_12 = var_5;
        var_13 = ((-(-1187005665 / 3009998474)));
        var_14 = (max((arr_1 [i_0 + 1] [i_0]), 1187005664));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_15 = (min(var_15, (~-122)));
            var_16 = 5541438178336023938;
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_10 [i_1] [i_1] [i_1] = (max((max((0 + var_5), var_6)), ((min((16384 * -122), (((arr_6 [i_3] [i_1]) ? (arr_6 [i_3] [i_1]) : var_6)))))));
            arr_11 [i_3] = ((-1187005665 * ((((!(arr_8 [i_1]))) ? (max(0, (arr_5 [i_1] [i_3] [i_3]))) : (arr_1 [i_1] [i_3])))));
            arr_12 [i_1] [i_3] [i_3] = ((-(((((0 ? 112 : 1))) ? (min(-1187005665, var_7)) : (var_1 / var_6)))));
        }
        for (int i_4 = 3; i_4 < 17;i_4 += 1)
        {
            var_17 = (((arr_14 [i_4 - 1] [i_4 + 2]) <= (arr_4 [i_4 - 1] [i_4 + 1])));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                arr_18 [i_1] [i_4] [i_4] = (!242);
                var_18 = (((arr_16 [i_4] [i_4]) % 87));
            }
            var_19 = (min((arr_2 [i_4]), (((((max(var_8, (arr_0 [i_4])))) <= (arr_16 [i_1] [i_4]))))));

            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                var_20 |= ((!(((-(arr_6 [i_1] [i_4 - 3]))))));

                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    arr_24 [i_1] [i_1] [i_4] [i_4] [i_6] [i_4] = (max(((((var_5 ? var_3 : 74)))), 4419729629905879338));
                    var_21 -= ((((((arr_23 [i_1]) ^ 4174077429))) ? var_5 : (((15143600285457536604 & 1461) << (var_9 - 483988631)))));
                    arr_25 [i_7] [i_4] [i_4] [i_1] = var_2;
                }
            }
            arr_26 [i_1] [i_1] [i_4] = ((+((((((arr_4 [i_1] [i_4]) & 8))) ? (((arr_20 [i_4]) ? 1589521737132128344 : 91)) : (arr_22 [i_4 + 1] [i_4 + 3] [i_4] [i_4 + 3] [i_4 - 1])))));
        }
        arr_27 [i_1] = var_1;
    }
    #pragma endscop
}
