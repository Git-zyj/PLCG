/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_2 ? var_13 : var_9)), var_9));
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_20 = (~((((arr_0 [i_0]) || var_12))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_21 += (var_17 && 3128);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_9 [i_1] = var_1;
                var_22 = (max(var_22, (arr_1 [i_1])));
            }
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                var_23 = (arr_8 [i_4] [i_4] [i_1] [i_1]);
                arr_14 [i_1] [i_1] [i_2] [i_4] = var_9;
                var_24 = (((1 <= 15) >= (((arr_1 [i_4]) % var_15))));
                arr_15 [i_1] [i_2] [i_4] = var_14;
            }

            for (int i_5 = 4; i_5 < 10;i_5 += 1)
            {
                var_25 |= ((~(arr_7 [i_5] [i_2] [i_1] [i_1])));
                var_26 = (min(var_26, ((((var_13 < 11051293708193454040) >> (((arr_1 [i_1]) - 1076867703)))))));
                arr_20 [i_1] [i_2] = ((18446744073709551615 ? (arr_17 [i_2] [i_5 - 1] [i_5]) : (arr_17 [i_2] [i_5 - 1] [i_2])));
                arr_21 [i_1] [i_1] [i_1] = arr_6 [i_1] [i_1] [i_1];
            }
            for (int i_6 = 2; i_6 < 9;i_6 += 1)
            {
                var_27 += (((arr_19 [i_2] [i_6] [i_1] [i_2]) ? (arr_8 [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_6]) : var_3));
                arr_25 [i_2] [i_2] [i_2] [i_2] = var_15;
            }
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                var_28 = (min(var_28, ((+(((-474901825585193636 + 9223372036854775807) << (((arr_16 [i_2] [i_2] [i_1]) - 48))))))));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 11;i_9 += 1)
                    {
                        {
                            arr_33 [i_1] [i_2] [i_2] [i_2] [i_2] [i_1] = (2521828523692881345 > 46743);
                            var_29 &= 0;
                            var_30 = (max(var_30, (arr_7 [i_1] [i_1] [i_1] [i_1])));
                        }
                    }
                }
            }
            var_31 = (max(var_31, (arr_22 [i_1] [i_1] [i_2])));
            var_32 = ((30 ? (((-(arr_27 [i_1] [i_1] [i_1] [i_2])))) : (~var_10)));
        }
        arr_34 [i_1] [i_1] = 0;
        arr_35 [i_1] = 248;
        var_33 = (max(var_33, (9131 != var_13)));
    }
    var_34 = (var_12 & 1);
    var_35 += ((var_1 ? (var_9 | 8574649388718728042) : var_4));
    #pragma endscop
}
