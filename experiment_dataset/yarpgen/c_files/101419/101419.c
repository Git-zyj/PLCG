/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((!var_8) ? 2147483632 : var_8)));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 *= (min(((min((((arr_2 [i_0] [i_0]) ? (arr_1 [i_0] [3]) : 1)), ((min(25863, 62268)))))), (max((min((arr_2 [i_0] [i_0]), (arr_0 [i_0] [8]))), (((!(arr_0 [8] [8]))))))));
        var_18 = (max(((-(((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [1]) : -162733512)))), ((max(var_4, (arr_0 [4] [i_0]))))));
    }

    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_19 += ((min((!0), 17609444613893977783)));
        arr_5 [i_1] = (max(((32111 ? 22 : 3267)), (!-84799094)));
        arr_6 [i_1] = (1 < 32114);

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            var_20 = (max((((~(arr_4 [i_1] [i_2])))), ((1690987125 ? (max(12312051998148476183, 21795)) : var_4))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                var_21 *= arr_9 [i_1] [i_1];
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [i_5] [i_2] [i_3] [i_2] [i_1] = var_10;
                            var_22 = -2;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        {
                            arr_24 [i_6] [i_2] [i_3] [i_2] [i_7] [i_7] [i_7] = min(0, ((((((arr_8 [i_2] [18]) ? var_7 : (arr_20 [15] [i_2] [21] [i_2]))) > (((min(var_5, var_3))))))));
                            arr_25 [i_1] [i_2] [i_1] [15] [i_3] = (~var_12);
                            arr_26 [i_2] = -16091;
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 22;i_9 += 1) /* same iter space */
                {
                    var_23 *= var_15;
                    var_24 = ((var_8 ? (!var_7) : 27));
                }
                for (int i_10 = 0; i_10 < 22;i_10 += 1) /* same iter space */
                {
                    var_25 = var_9;
                    var_26 = (min((((arr_19 [i_1] [i_2] [i_8] [11]) ? ((~(arr_10 [i_8]))) : (min(18446744073709551615, var_4)))), var_14));
                    var_27 = (((arr_12 [i_2] [1] [i_2]) ? (((arr_12 [4] [i_2] [i_2]) ? (arr_12 [i_2] [i_8] [i_2]) : var_3)) : (((!(arr_12 [i_10] [i_2] [i_2]))))));
                }
                var_28 = (((((min(var_0, (arr_12 [i_2] [i_2] [i_2]))))) ? ((((((var_10 ? (arr_4 [5] [5]) : (arr_19 [16] [i_2] [i_1] [i_1])))) ? (arr_13 [i_8] [i_8] [i_2] [i_1]) : ((~(arr_12 [i_2] [i_2] [i_2])))))) : (max(((var_3 ? (arr_20 [i_8] [i_8] [20] [i_1]) : var_7)), 1))));
                var_29 = (min(((max(var_12, (((var_1 + 2147483647) << (var_12 - 993806226)))))), (((arr_32 [i_1] [i_2] [i_2] [i_2] [3] [i_8]) ? ((((arr_32 [0] [i_2] [i_2] [i_2] [i_2] [21]) ? var_14 : var_4))) : var_11))));
                arr_33 [i_1] [i_2] [i_1] [i_1] = (max(((var_15 ? ((max((arr_29 [i_2] [i_2] [i_2]), var_6))) : ((var_7 << (var_10 - 1368658948))))), (~20)));
            }
            /* vectorizable */
            for (int i_11 = 2; i_11 < 21;i_11 += 1)
            {
                arr_37 [i_11] [i_2] [i_2] [i_1] = (((arr_13 [i_2] [i_2] [i_11] [i_2]) ? (arr_21 [i_1] [i_1] [i_1] [3] [i_2] [i_11 - 2]) : (((arr_19 [i_11 - 1] [i_11 - 1] [1] [18]) ? var_9 : var_13))));
                arr_38 [i_2] [i_1] [17] [i_2] = ((21795 ? (!var_14) : var_4));
                var_30 = ((!(arr_20 [i_11 - 2] [i_11 - 1] [i_11 - 2] [i_11 - 2])));
            }
            arr_39 [i_2] [i_2] [i_1] = 7751;
        }
    }
    for (int i_12 = 0; i_12 < 22;i_12 += 1) /* same iter space */
    {
        arr_43 [0] = (max(((((arr_28 [i_12] [i_12]) && var_3))), (((min(13267452543547517746, var_7))))));
        arr_44 [i_12] = (max(-143552238122434560, (((max(var_5, var_6))))));
        arr_45 [i_12] = (max(((~((1410971756 ? 34896 : 1259517414)))), ((min((arr_16 [i_12] [i_12] [i_12] [i_12] [i_12]), (arr_31 [i_12] [i_12] [15]))))));
    }
    #pragma endscop
}
