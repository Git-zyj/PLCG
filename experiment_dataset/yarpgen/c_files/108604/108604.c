/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((!((min(4192149516, 18846))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_17 = ((~(arr_4 [i_1] [i_1])));
                            var_18 = (var_8 < (((var_2 ? (arr_2 [i_0] [i_1] [i_3]) : (arr_2 [i_3] [i_0] [i_0])))));
                            var_19 &= ((((arr_0 [i_3]) >> (41188 + 24362))));
                        }
                    }
                }
                var_20 = ((((min((arr_2 [i_1] [i_1] [i_0]), var_15))) ? var_10 : (arr_3 [i_0] [i_1])));
            }
        }
    }
    var_21 = (var_1 != var_14);
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {

                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        arr_21 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] = ((((31372 ? -18312 : 1))) ? var_6 : ((var_7 ? (~var_5) : var_0)));
                        var_22 = (var_14 - ((((min((arr_12 [i_4] [i_7]), var_6))) & var_5)));
                        arr_22 [i_4] [i_4] [i_4] [i_4] [i_7] = ((~((var_12 ? -6820805122843810537 : 18846))));
                        var_23 = (min((var_0 == 57909), (arr_11 [i_6])));
                        arr_23 [i_4] [i_4] [i_4] [i_4] [i_6] [i_4] = (~8281815220383157140);
                    }
                    for (int i_8 = 1; i_8 < 20;i_8 += 1)
                    {

                        for (int i_9 = 4; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_24 = (13548 >= 1);
                            var_25 |= (((!(arr_10 [i_9]))) || var_0);
                            var_26 = min((((arr_26 [i_5 - 1]) ? 255 : (arr_26 [i_5 + 1]))), -18312);
                        }
                        for (int i_10 = 4; i_10 < 18;i_10 += 1) /* same iter space */
                        {
                            arr_31 [i_4] [i_4] [i_6] [i_4] [i_4] [i_5 - 1] [i_4] = arr_29 [i_4] [i_4] [i_6] [i_4] [i_10];
                            var_27 = (max(var_27, (((!((min((arr_12 [i_6] [i_6]), (34164 / -8281815220383157141)))))))));
                            arr_32 [i_4] [i_4] [i_4] [i_4] [i_4] = (((((arr_12 [i_5 + 2] [i_6]) ? (arr_12 [i_4 + 2] [i_5 + 1]) : 26162)) % ((var_11 ? (arr_12 [i_4] [i_5 - 1]) : (arr_12 [i_8 + 1] [i_6])))));
                            var_28 &= (((((53407 ? -3892495840704901579 : 32768))) ? (1 || 5749164500072752211) : 2345823974));
                        }
                        for (int i_11 = 4; i_11 < 18;i_11 += 1) /* same iter space */
                        {
                            var_29 = min(4294967292, -538729297);
                            arr_37 [i_4] [i_5 + 1] [i_4] [i_6] [i_4] [i_8 - 1] [i_11] = min(-64, (arr_10 [i_4]));
                            arr_38 [i_4] [i_4] [i_4] = (((((arr_16 [i_4 - 2]) ? (arr_30 [i_4 - 2] [i_4] [i_8 + 1] [i_8 + 1] [i_11 + 3]) : -26163)) >> (((var_8 <= (arr_19 [i_4 - 2] [i_4] [i_8 + 1] [i_4]))))));
                            var_30 = ((18312 ? 3 : 65535));
                        }
                        arr_39 [i_4 - 2] [i_4 - 2] [i_4] [i_6] [i_8] [i_8] = (min(var_4, (~0)));
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 21;i_12 += 1) /* same iter space */
                    {
                        var_31 = (~4);
                        var_32 = (max(var_32, ((((!(arr_17 [i_4] [i_4] [i_4])))))));
                    }
                    for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
                    {
                        arr_46 [i_4] [i_5] [i_5 + 1] [i_4] [i_13] = ((56 <= (((var_10 ? var_7 : var_13)))));
                        arr_47 [i_4] [i_4] [i_4] [i_4] = (((((~(var_1 / var_3)))) ? (~17) : (~-8281815220383157130)));
                    }
                    arr_48 [i_4] [i_4] [i_4] = (min(var_8, (arr_34 [i_4] [i_4 + 2] [i_4] [i_4] [i_4])));
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 21;i_15 += 1)
                        {
                            {
                                var_33 = ((!(((29475 << (((-2120507130 + 2120507153) - 16)))))));
                                var_34 = (!var_8);
                                var_35 -= ((!((min(1, ((var_9 % (arr_28 [i_4] [i_4] [i_14] [i_14]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
