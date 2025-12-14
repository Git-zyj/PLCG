/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188388
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (var_3 / 2491328656);
    var_11 = 1803638639;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((max((min((arr_2 [i_0]), 3141102469798517457)), var_6))) ? (((2893218541 ? -2106003208 : 1792))) : ((((-4238 ? 2106003207 : 1803638666)) + (((arr_1 [i_0] [i_0]) - 67108864)))));
        arr_4 [i_0] = var_2;

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            arr_7 [i_0] [i_0] [6] &= ((2491328656 ? 2147483647 : 3399167023354926265));

            for (int i_2 = 3; i_2 < 10;i_2 += 1) /* same iter space */
            {
                var_12 = (min(var_12, ((min((arr_5 [i_0] [i_1 - 1] [i_2 - 2]), (arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));

                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_13 = (((arr_1 [i_1 - 1] [i_1 - 1]) >> (((arr_0 [i_1 - 1]) - 125))));
                    var_14 = ((2147483647 < (arr_1 [i_3] [i_1 - 1])));
                    var_15 = (((arr_12 [i_2] [i_2] [i_2 + 2] [i_3]) ? (((arr_10 [i_0]) ? (arr_12 [i_2] [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_11 [i_0] [i_1] [i_1]))) : var_6));
                    var_16 = ((((3934091862 <= (arr_9 [i_0] [i_2] [i_2] [i_3])))));
                }
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    arr_17 [i_0] [i_2] [i_0] [i_0] = (min((!3437692224), (((arr_5 [i_0] [i_1] [i_4 + 1]) << (((max(var_9, 2097151)) - 2850898979))))));
                    var_17 = ((-(((-11134 ^ 950988641) & (min(var_5, var_8))))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_18 = (((arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1]) ? (arr_21 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : 961637718));
                    var_19 = ((3343978642 | (arr_21 [i_5] [i_2 - 2] [i_1 - 1])));
                }
                var_20 = (((((-(arr_19 [i_2])))) ? 1443564028 : (arr_19 [i_2])));
                var_21 *= (~24693);
            }
            for (int i_6 = 3; i_6 < 10;i_6 += 1) /* same iter space */
            {
                arr_25 [i_0] [i_0] [i_0] [i_0] &= min(((min(3343978637, 391665177))), (((~(arr_11 [i_6 - 1] [i_1 - 1] [i_6 - 1])))));
                arr_26 [i_6] [i_0] [i_0] = (arr_21 [i_0] [i_1] [i_0]);
                var_22 -= (var_3 / 15524);
            }
        }

        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            var_23 = ((((((arr_6 [i_7] [i_7] [i_0]) / 18446744073709551606)) ^ 22)));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_36 [i_0] [i_7] [i_8] [i_7] [i_10] = ((-var_0 ? (arr_35 [i_8] [i_8] [i_8] [i_9] [i_10] [i_9]) : 1));
                            var_24 = ((((!(-970177412 | var_2))) ? ((((min(var_4, 12513386594832670644))) ? ((min(var_1, var_5))) : ((var_8 ? var_4 : var_8)))) : (arr_1 [6] [i_8])));
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 12;i_11 += 1) /* same iter space */
        {
            var_25 = -10439;
            var_26 = ((((3321403776 ? 7 : 2144278795)) | (~1853817861)));
        }
        var_27 = (min(var_27, ((((((max(var_3, 255)))) <= ((67895856 ? (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : (arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    var_28 = ((var_2 ? (min(5933357478876880972, (!65520))) : var_5));
    #pragma endscop
}
