/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_10 *= 1440059365693519348;
                    var_11 = var_2;
                }
                /* vectorizable */
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    arr_11 [i_0] [i_3] = (((arr_4 [i_0] [i_0]) ? (arr_5 [i_3 - 2] [i_3 + 1] [i_3 - 2]) : (((!(arr_10 [3] [i_1] [i_0] [1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_12 &= (!1440059365693519348);
                                var_13 = ((((arr_5 [i_0] [i_0 - 2] [i_0]) ? 0 : -1440059365693519357)));
                                var_14 = ((806195040 ? -1557877257 : ((1440059365693519328 ? (arr_8 [i_1] [i_1] [i_1]) : var_4))));
                            }
                        }
                    }
                    var_15 |= ((((((arr_7 [8] [i_1] [10]) ? var_0 : (arr_1 [i_0])))) ? (arr_6 [i_3 - 1] [i_0]) : ((((arr_6 [i_0] [i_0 - 3]) != (arr_12 [i_3] [0] [10] [i_1] [0]))))));
                    var_16 |= ((255 ? (~15913905883915120718) : (arr_7 [i_0] [i_0] [i_0])));

                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        var_17 = (max(var_17, (arr_15 [i_6] [4] [i_0] [i_3] [i_3] [i_1] [i_0])));
                        var_18 = 127;
                        arr_21 [17] [i_6] [i_1] [i_6] [i_0 + 1] = (!84);
                        var_19 = 32753;
                    }
                    for (int i_7 = 1; i_7 < 17;i_7 += 1)
                    {
                        var_20 &= ((!(arr_19 [i_3] [1] [i_3 - 2] [i_3 - 1] [i_3 - 2])));

                        for (int i_8 = 3; i_8 < 17;i_8 += 1)
                        {
                            var_21 *= ((239 ? (-127 - 1) : 36934));
                            var_22 = (min(var_22, (arr_14 [i_3] [i_3] [i_3 - 1] [i_7 + 1])));
                        }
                        for (int i_9 = 3; i_9 < 18;i_9 += 1)
                        {
                            arr_28 [i_7] [i_1] [i_1] [i_7] = (-1942891483 & var_9);
                            var_23 -= (((((var_2 ? var_0 : var_6))) ? ((((var_4 < (arr_27 [i_0] [14] [14] [i_3 + 1] [i_3 - 1] [i_7 + 2] [i_1]))))) : var_5));
                            var_24 = (((1 ? var_5 : var_7)));
                        }
                        arr_29 [i_7] [i_3] [i_7] [i_0 - 2] [i_0 - 2] = (~2086685078947873949);
                        var_25 = (max(var_25, 23831));
                    }
                    for (int i_10 = 2; i_10 < 18;i_10 += 1)
                    {
                        var_26 = (arr_8 [i_1] [i_3 - 1] [i_3]);
                        var_27 *= var_6;
                    }
                }
                arr_32 [i_1] = var_9;
                var_28 = ((!((min(2086685078947873949, 3510052773)))));
                var_29 = (max((((!(arr_20 [i_0 - 1] [i_0] [i_0] [i_0] [i_1] [i_1])))), ((var_5 ? (((arr_9 [i_0] [10] [i_0] [i_0]) & var_3)) : var_7))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 0;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            {
                var_30 = ((((arr_33 [i_11 + 1] [i_11 + 1]) - ((((arr_33 [i_12] [i_11]) && var_5))))));
                arr_37 [i_11] = 8335293856708445223;
            }
        }
    }
    var_31 |= (((min(var_4, var_1))));
    /* LoopNest 2 */
    for (int i_13 = 3; i_13 < 20;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            {
                var_32 = ((((arr_42 [i_13 - 2] [i_13 + 1]) ? ((var_0 ? var_7 : (arr_39 [i_14]))) : -26137)));
                var_33 = 65521;
            }
        }
    }
    #pragma endscop
}
