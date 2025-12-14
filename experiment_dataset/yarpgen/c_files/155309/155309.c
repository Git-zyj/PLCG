/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((min(var_10, var_7)));
    var_17 = ((!((min(var_2, (max(140479342, var_12)))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_18 *= (!32);
        var_19 += var_13;

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            arr_4 [i_0] [i_0] [i_1] = (arr_0 [i_1]);
            var_20 = (max(var_20, (((!(arr_2 [10]))))));
        }

        for (int i_2 = 2; i_2 < 21;i_2 += 1) /* same iter space */
        {
            arr_8 [i_2] [i_0] [i_0] = (255 <= -140479363);

            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                var_21 += ((var_1 ? (arr_2 [6]) : var_13));
                var_22 *= ((2217904570766927690 ? -1 : 4294967295));
                var_23 = ((2217904570766927672 ? 1374717360 : var_10));
            }
            for (int i_4 = 2; i_4 < 21;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((!var_1) | (arr_11 [i_0] [i_0] [i_2 - 1] [0])));
                    var_24 = (((11471 / -16) / 26));
                }
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    arr_22 [i_0] [i_0] = (((arr_0 [i_2 - 2]) ? var_5 : (arr_0 [i_2 - 2])));
                    var_25 ^= (((var_10 + (arr_19 [i_0] [20]))));
                    var_26 = (arr_5 [6]);
                    var_27 = (((arr_9 [i_0] [i_0] [8]) ? -1 : var_10));
                    var_28 = ((!(((var_1 ? var_9 : var_13)))));
                }
                arr_23 [i_0] = var_14;
            }
            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                var_29 += (((arr_1 [16]) ? var_12 : var_10));
                arr_26 [i_0] [i_0] [i_0] [i_7] = -1467181251;
            }
        }
        for (int i_8 = 2; i_8 < 21;i_8 += 1) /* same iter space */
        {
            var_30 *= ((!((((arr_13 [i_0] [i_8] [14] [i_0]) >> (var_7 - 91))))));
            var_31 = (((arr_12 [i_0] [i_0] [i_0]) ? (arr_29 [i_0] [i_0]) : (arr_14 [i_0] [i_8] [i_8 + 2])));
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            var_32 = (((arr_7 [i_0] [i_0] [i_0]) == (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
            var_33 = (max(var_33, var_6));
            arr_33 [i_0] = ((var_2 / (arr_6 [i_0] [i_0] [i_0])));
            var_34 = (!(arr_16 [i_0] [i_0] [i_0] [i_0]));
        }
        for (int i_10 = 3; i_10 < 21;i_10 += 1)
        {
            var_35 = (max(var_35, (arr_30 [6] [i_10])));
            var_36 = var_14;
            var_37 = (16228839502942623925 * 0);
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 23;i_13 += 1)
                    {
                        {
                            arr_47 [i_0] [i_0] [i_12] = ((-(18446744073709551615 != 7887162730154025781)));
                            var_38 = (arr_24 [i_10] [8] [i_10 + 1]);
                            var_39 += var_3;
                            arr_48 [8] [i_10] [i_13] [i_12 - 1] [i_0] [i_0] = -2;
                        }
                    }
                }
            }
            arr_49 [i_0] [i_0] [i_0] = 9007198986305536;
        }
        arr_50 [18] &= (var_15 ? (arr_16 [i_0] [i_0] [i_0] [i_0]) : (arr_37 [i_0] [2] [i_0]));
    }
    var_40 |= ((((((var_2 <= var_0) ? (!var_1) : var_13))) || -var_15));
    #pragma endscop
}
