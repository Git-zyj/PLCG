/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 179220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=179220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/179220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min(2025047423, ((524287 | (((((arr_0 [i_0]) || 19457))))))));
        var_18 = (max((((524308 ? (min(17401, 2147483646)) : (max((arr_0 [i_0]), var_11))))), (((max(32752, 2490822142326038164)) | 2490822142326038159))));
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                var_19 = (max(var_19, ((((((var_8 ? 15079898116818600906 : var_15))) ? (arr_7 [i_3] [i_2]) : (arr_6 [i_1] [i_2] [6]))))));
                var_20 -= (arr_9 [i_3] [6]);
                var_21 = (max(var_21, 46071));
            }
            var_22 = (max(var_22, (-2147483647 - 1)));
        }
        for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
        {
            var_23 = (min(var_23, (((((((((2147483647 ? var_0 : 9018))) > var_13))) << (131056 - 131036))))));
            arr_13 [i_4] [i_4] [i_1] = ((max((arr_1 [i_1]), 4479)));
            var_24 = -1740096553;
        }
        var_25 = 1073741823;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 10;i_7 += 1)
                    {
                        arr_23 [i_1] [i_5] [0] [i_6] [i_6] [i_7] = (-(arr_19 [i_1] [i_5] [i_6] [i_7]));
                        arr_24 [i_7] [i_6] = 46072;
                        arr_25 [3] [i_7] [2] [i_1] = (max(1658385758544333446, 4095));
                        arr_26 [i_7] [i_5] [i_7] [i_7] = ((max(((((arr_11 [6] [i_5] [4]) != 4294967274))), 16471546098176891755)) << (((arr_19 [i_1] [i_5] [i_6] [i_7]) - 3311642263)));
                    }
                    for (int i_8 = 2; i_8 < 7;i_8 += 1)
                    {
                        arr_30 [7] [9] [9] = ((((arr_22 [i_1] [i_8 + 2] [2] [i_8] [i_5]) ? (arr_22 [2] [i_8 + 3] [i_6] [i_8] [6]) : (arr_17 [i_1] [i_8 + 3] [4] [1]))) << ((((arr_22 [i_1] [i_8 - 2] [4] [i_8] [3]) && (arr_22 [i_1] [i_8 - 2] [i_8] [i_8] [i_6])))));

                        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            arr_33 [i_5] = ((-((min(-13424, -4759)))));
                            var_26 = -1174408591;
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [i_1] = var_14;
                            var_27 = (-var_9 << ((min((!144114638320041984), (!15506720937223406977)))));
                            var_28 ^= min((min((204187240 != var_1), (arr_12 [i_8 + 1] [0]))), (arr_31 [1] [6] [i_6] [i_8] [2]));
                        }
                        /* vectorizable */
                        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            arr_39 [i_1] = (!-20693);
                            var_29 *= ((35184372072448 <= ((((arr_28 [0]) ? (arr_28 [1]) : (arr_14 [i_11]))))));
                        }
                    }
                    for (int i_12 = 2; i_12 < 9;i_12 += 1)
                    {
                        arr_43 [i_12] [3] [i_12] = 1051484299;
                        var_30 = (((32748 ? (arr_28 [i_12 - 1]) : 3513383363)));
                        arr_44 [i_12] [i_12] [i_6] [i_12] [i_1] = (!var_14);
                    }

                    for (int i_13 = 3; i_13 < 7;i_13 += 1)
                    {
                        arr_48 [3] [4] [i_6] = ((-((max((arr_38 [i_5] [3]), (arr_28 [i_1]))))));
                        var_31 = (max(3366845956890950715, (((((min(var_4, (arr_10 [3] [3])))) < (arr_34 [3] [i_13] [i_13] [i_6] [5] [i_1] [i_1]))))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 10;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 10;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 10;i_16 += 1)
                {
                    {
                        arr_57 [i_1] [i_1] [i_1] [i_1] [i_1] = 5684;
                        var_32 = (((((arr_9 [i_15] [i_16]) ? (arr_18 [5] [8]) : (arr_17 [i_1] [i_14] [8] [1]))) ^ var_7));
                    }
                }
            }
        }
        arr_58 [0] = var_8;
    }
    for (int i_17 = 0; i_17 < 24;i_17 += 1)
    {
        var_33 = var_11;
        arr_62 [i_17] = var_6;
        arr_63 [i_17] = ((((16181649132736079232 ? -308014124 : 32756)) <= -29765));
        var_34 ^= 3584;
    }
    var_35 = 3581416697;
    var_36 += ((-((var_4 ? var_4 : var_5))));
    #pragma endscop
}
