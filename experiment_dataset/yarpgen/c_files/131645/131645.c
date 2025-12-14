/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_4 ? var_9 : var_15))) ? 576460752303423360 : ((var_4 ? 16590220678454264959 : var_17))))) ? var_4 : var_7));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_20 = ((!((min((min((arr_0 [i_0]), (arr_0 [i_0]))), ((-20 ? -112 : var_14)))))));
        var_21 = (arr_1 [i_0]);
        arr_2 [i_0] = (max(2216418289421374747, ((max(var_0, var_16)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 7;i_1 += 1)
    {
        arr_5 [i_1] = (((arr_1 [i_1]) ^ (((arr_1 [i_1]) ? 114 : (arr_4 [i_1] [i_1])))));
        var_22 = (((!576460752303423360) ? ((((arr_4 [i_1] [i_1]) ? var_5 : (arr_1 [17])))) : (~7058334118109617607)));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_23 += ((~(arr_4 [i_1 - 1] [5])));
            var_24 = (max(var_24, ((((arr_4 [i_1] [i_2]) != (arr_3 [i_1]))))));
            var_25 = ((-(576460752303423360 - var_16)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_13 [i_1] [6] = (((arr_9 [i_1 - 3] [i_1 - 1]) ? 992 : (arr_9 [i_1 - 3] [i_2])));
                        var_26 = (((((-8629290811388997458 ? 7058334118109617607 : 4076529719732685488))) ? 17030219526170092039 : 179));
                        arr_14 [i_1] [i_2] [i_2] [i_4] = (arr_7 [i_1]);
                    }
                }
            }
        }
        arr_15 [i_1 + 4] = -var_16;
    }
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        var_27 = ((((((arr_16 [i_5 - 2] [i_5]) ? (((((arr_0 [i_5]) == -68)))) : (arr_17 [i_5])))) ? ((1362303315 ? 8161048057888223997 : 2838979426743104727)) : (((~(((17030219526170092039 >= (arr_16 [i_5] [i_5])))))))));
        arr_20 [i_5] = (arr_16 [3] [i_5]);
        var_28 ^= (((arr_18 [i_5]) && (!155)));
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 12;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 13;i_10 += 1)
                        {
                            {
                                var_29 = var_5;
                                var_30 = (min(var_30, ((((!(((-(arr_24 [i_6] [9])))))) ? ((((arr_29 [8] [i_10]) ? (arr_31 [i_9 - 1] [i_10]) : -68))) : ((((min(1416524547539459576, (arr_26 [i_8])))) ? 8144928109461858408 : (arr_18 [i_6])))))));
                                arr_34 [i_6] [4] [i_8] [i_9] [i_9] [i_7] = (-(((arr_21 [i_6]) - var_1)));
                                arr_35 [i_7] [i_7] [i_7] [i_7] = 18217540247364855530;
                            }
                        }
                    }
                    var_31 = (min(var_31, ((((min((arr_32 [3] [1] [i_6] [i_6] [i_6]), (arr_24 [i_8] [i_8]))) * (59 == 1495397876439075187))))));
                    var_32 |= (max(-72, ((((!(arr_16 [i_6] [i_7]))) ? var_3 : var_12))));
                }
            }
        }
        var_33 = (min(var_33, (arr_1 [8])));
    }
    var_34 ^= (2932663980 ? 255 : 1);
    #pragma endscop
}
