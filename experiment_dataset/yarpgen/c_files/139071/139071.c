/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (((-(((arr_2 [i_1]) / 111)))) * 255);
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] &= (max(0, (max((1 < var_6), -5408641602115774869))));
                                arr_14 [i_0] [i_0] [i_3] [i_3] [i_4] = (((((min(var_1, (arr_3 [i_0] [i_0] [i_0])))) ? ((255 ? (arr_12 [i_3] [i_4] [i_2] [i_3] [i_4]) : 4031080736)) : (arr_11 [i_0] [i_0] [i_1] [i_0] [i_3] [i_4]))));
                                var_13 += (min((((((-1 ^ var_1) + 9223372036854775807)) << (((arr_1 [i_0] [i_0]) - 4294952693)))), 32767));
                            }
                        }
                    }
                }
                var_14 = (max(var_14, (((!(arr_6 [i_0] [i_1] [i_0] [10]))))));
                arr_15 [i_0] = ((((min((arr_1 [i_0] [i_0]), (min(var_8, var_0))))) ? var_5 : (((!(var_1 && 5053))))));
            }
        }
    }

    for (int i_5 = 2; i_5 < 22;i_5 += 1)
    {
        var_15 += (((!1305291557) & (((arr_16 [14]) ? var_0 : (arr_17 [i_5])))));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 24;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 24;i_8 += 1)
                    {
                        arr_25 [i_8] [i_5] [i_5] [i_5] [i_5] = ((var_9 ? (((var_1 >= (-1 || var_8)))) : (((var_1 > (((var_2 ? (arr_18 [i_5] [i_5]) : (arr_24 [i_6] [i_6] [i_7] [i_8])))))))));
                        var_16 = (min(var_16, (!1)));
                        arr_26 [i_5] [i_5] = arr_23 [i_8 + 1] [i_5] [i_5] [i_5 + 3];
                        var_17 = (max(var_17, (((!((((max(18, var_4))) || ((max((arr_22 [i_5] [i_5] [i_5]), 241))))))))));
                        var_18 *= var_2;
                    }
                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {
                        arr_30 [i_5] = (arr_17 [i_5]);
                        arr_31 [i_5 + 2] [i_5] [i_5 - 1] [i_5] [i_5 + 2] = (arr_18 [i_5] [i_6]);
                        var_19 &= 4503599627337728;
                        arr_32 [i_5 + 3] [i_9] [i_7] &= ((-(((((((arr_27 [i_7]) > -6790316116300566079)))) % ((var_2 ^ (arr_29 [i_6] [i_6] [i_6] [i_6])))))));
                    }
                    var_20 = (max(var_20, ((((((-(~var_4)))) ? (arr_16 [i_7]) : (((((arr_27 [i_5]) ? 32759 : var_1)))))))));
                    arr_33 [i_5] [i_5] [i_5] = min(var_2, (arr_18 [i_5] [i_7 - 2]));
                }
            }
        }
        arr_34 [i_5] = ((+(((!((((arr_17 [i_5 - 1]) ^ 0))))))));
    }
    /* vectorizable */
    for (int i_10 = 3; i_10 < 13;i_10 += 1)
    {
        var_21 = (min(var_21, 498662443));
        var_22 = 1;
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 13;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 15;i_13 += 1)
                    {
                        arr_46 [i_10] [i_12 - 1] [i_11] [i_11] [i_10] = var_6;
                        arr_47 [i_10] [i_10] [i_12] [i_13] = (!(arr_24 [i_10] [i_12] [i_11] [i_10]));
                    }
                    arr_48 [i_10] = ((!(((arr_19 [i_10] [i_11] [i_12 + 2]) || var_7))));
                }
            }
        }
    }
    var_23 = ((-((var_5 ? var_8 : var_10))));
    #pragma endscop
}
