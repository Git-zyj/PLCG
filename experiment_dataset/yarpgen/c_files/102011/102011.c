/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102011
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_6;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_15 = (((((-(arr_4 [i_0 - 1]))))) ? (arr_1 [i_0] [i_0]) : 127);
                        var_16 = (min(-126, ((-((1 ? var_13 : 1))))));
                        var_17 = (min((((arr_10 [i_3] [3] [i_2 - 2] [i_1 - 1] [i_3]) ? ((((!(arr_1 [i_0] [i_1 - 1]))))) : (((arr_5 [i_0] [i_0] [i_0 - 1] [i_0 - 1]) ? var_6 : (arr_1 [i_0 - 1] [i_0]))))), (arr_2 [i_0 - 1])));
                        arr_11 [i_2 - 2] [i_3] [i_2] [i_3] = (arr_4 [i_0 - 1]);
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 7;i_5 += 1)
            {
                {
                    var_18 = (arr_5 [i_0 - 1] [i_0 - 1] [i_5 + 2] [1]);

                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [i_0] [i_0 - 2] [5] [i_0 - 2] [i_0] [i_0] [i_6] = (min(-126, -1398851224));
                            var_19 = var_0;
                            var_20 += (((((125 ? 1 : 12854779737622157003))) ? (arr_12 [1]) : 1211860216));
                        }
                        /* vectorizable */
                        for (int i_8 = 1; i_8 < 9;i_8 += 1)
                        {
                            var_21 = (0 > 1);
                            var_22 = (max(var_22, var_11));
                            var_23 *= ((arr_6 [i_8 - 1] [i_5 - 1] [i_0 - 2]) + (~var_12));
                        }
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            arr_31 [i_4] [i_4] [i_5] [i_6] [i_9] = (arr_1 [i_5 + 1] [i_0 + 1]);
                            var_24 = (min(var_24, (((+-1) ? ((~(arr_10 [i_9] [i_6] [i_5 - 1] [i_4] [i_9]))) : (min(((((arr_3 [i_0] [i_0]) > 125))), (arr_26 [i_0 + 1])))))));
                            arr_32 [i_0] [i_6] [i_5 + 3] [i_6] [i_9] [i_5 + 3] = ((var_11 ? 127 : (min(var_8, ((-48 ? var_1 : 1))))));
                            arr_33 [i_0] [i_0] [i_0] [i_0 + 1] [i_0] [1] [i_6] = (min((((1 ? ((-68 ? 1211860200 : 5045)) : -1))), ((var_4 - (min(var_12, 1))))));
                        }
                        var_25 = (~var_9);
                        arr_34 [i_6] [1] = arr_6 [i_0] [i_0] [i_6];
                        var_26 = (((arr_30 [i_6] [i_5 + 2] [i_4] [i_6]) ? ((-var_0 ? (arr_14 [i_0]) : (min((arr_22 [i_6] [i_5] [i_0] [i_0] [i_0] [i_6]), (arr_20 [i_0 - 2] [i_4] [i_5] [i_6]))))) : ((((min((arr_18 [i_4] [i_5]), var_12))) ? (arr_21 [i_0] [i_0] [i_4] [i_5] [i_6] [i_6]) : var_11))));
                    }
                    for (int i_10 = 1; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        arr_38 [i_0 - 2] [4] [i_0 + 1] [i_0 - 2] [i_10] = ((-(((~var_8) ? (arr_30 [i_10] [i_10] [i_5] [i_5]) : 18446744073709551607))));
                        var_27 = (arr_21 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [0]);
                    }
                    /* vectorizable */
                    for (int i_11 = 1; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        arr_43 [i_11] [i_11] [i_11] [i_11] [3] [i_11] = 1;
                        var_28 &= (((arr_27 [i_0] [2] [i_5 + 3] [i_0 - 2] [i_11 - 1]) * (arr_27 [i_0 + 1] [8] [i_5 - 1] [i_0 - 1] [i_11 - 1])));
                    }
                    arr_44 [i_0] [i_4] = (((-2147483647 - 1) ? ((~(arr_40 [0] [i_4] [i_4] [0] [0]))) : (((((-4096 ? (arr_35 [i_0] [3] [1] [i_4] [i_4] [i_5]) : 32767))) & (min((arr_37 [i_4] [i_4] [0] [2] [i_5 + 1] [i_5 + 1]), 3784928501587491042))))));
                    arr_45 [i_0] = var_2;
                }
            }
        }
        arr_46 [i_0] = (min(((4115 ? (min(65535, 3784928501587491042)) : 5016)), (((48 ? 1 : -48)))));
    }
    #pragma endscop
}
