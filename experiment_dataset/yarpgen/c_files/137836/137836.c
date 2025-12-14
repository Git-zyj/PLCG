/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137836
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_6, (((((var_8 + 9223372036854775807) >> (var_11 - 1637380545)))))));
    var_13 = (((min((1 & 1), var_10)) << (var_9 - 3562242992260160978)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_14 = (max((((~(arr_0 [i_1])))), ((-(arr_5 [i_0] [i_1] [i_0] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_2] [i_2] [i_0] [i_2] [i_1] = (4815532564054705034 < 9223372036854775807);
                                var_15 = var_6;
                            }
                        }
                    }
                    arr_12 [i_1] [i_1] [i_2] [i_1] = min((max((arr_4 [i_0] [6]), ((0 ? 1 : 1)))), (((arr_3 [i_1] [i_2]) ? 27484 : (arr_3 [i_0] [i_1]))));

                    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_1] = 0;
                        var_16 = (max(var_16, var_9));
                        arr_16 [i_0] [i_1] [i_2] [1] |= (((((118 ? 0 : -2953))) ? ((((arr_0 [i_0]) > (arr_0 [i_2])))) : (arr_7 [i_0] [i_1] [i_0] [i_5] [i_0] [i_2])));

                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_5] [i_1] = ((((-((-4512383142941299007 ? 13631211509654846581 : (arr_0 [i_5])))))) ? (((((max(var_2, 195))) ? (arr_8 [i_6] [14] [i_2] [3] [i_0] [i_0]) : ((1 ? var_8 : var_10))))) : (((arr_14 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6]) ? (arr_0 [i_5]) : (arr_17 [i_1] [i_1] [i_2] [i_5] [i_6]))));
                            var_17 = var_9;
                        }
                    }
                    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                    {
                        arr_25 [i_1] [i_0] [i_2] [i_0] [i_0] [i_1] = -73;

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_0] [i_7] [i_8] = 1;
                            arr_29 [i_0] [i_1] = (min(1, 2147483647));
                        }
                        for (int i_9 = 2; i_9 < 23;i_9 += 1)
                        {
                            arr_33 [i_1] [i_1] = 1;
                            arr_34 [i_0] [i_0] [i_2] [i_7] [i_7] [i_1] = ((-((((max((arr_14 [i_0] [1] [i_0] [i_0] [i_0] [17]), (arr_21 [i_0] [i_1] [i_0] [12])))) ? (((1 ? var_7 : var_5))) : 0))));
                            arr_35 [i_0] [i_1] [i_2] [i_7] [i_9] = (max(27468, 208));
                            var_18 = var_0;
                            arr_36 [i_9] [i_7] [i_2] [i_1] [i_0] &= var_11;
                        }
                        arr_37 [i_0] [i_1] [i_2] = 4815532564054705034;
                        arr_38 [i_0] [i_0] [i_1] [i_1] [i_2] [i_1] = (max(-6, (arr_10 [i_7] [i_2] [i_2] [i_1] [i_0])));
                    }
                }
                arr_39 [12] &= (((((((var_1 + (arr_7 [i_0] [i_1] [i_0] [i_0] [i_0] [14]))) - ((5848076819816202223 ? var_2 : var_5))))) ? ((((-21 ? (arr_24 [i_0] [i_0] [i_0] [i_1] [i_1]) : var_8)) - (arr_0 [i_1]))) : var_10));
                var_19 = (max(var_19, var_2));
                arr_40 [i_0] [i_1] [i_1] = (arr_27 [i_0] [i_1] [i_1] [i_1] [14] [i_0] [i_1]);
            }
        }
    }
    #pragma endscop
}
