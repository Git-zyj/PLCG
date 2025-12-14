/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(1126282287, 89));

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_18 = ((-(arr_0 [i_0 - 2] [i_0 + 1])));
        var_19 = ((((4294967284 ? 4294967284 : -89))) ? (max((arr_2 [i_0 + 1]), (arr_1 [i_0 + 2]))) : (arr_2 [i_0 - 2]));
        var_20 = (((max((arr_1 [i_0 + 1]), 4294967273)) / ((~(arr_2 [i_0 - 2])))));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {
        var_21 = (max(var_21, (((((!(arr_5 [i_1] [i_1 - 3]))) ? (0 < 181) : 89)))));
        var_22 += max((arr_6 [i_1]), (((arr_4 [i_1 - 3]) ? (arr_3 [i_1 - 3]) : 1)));
    }
    var_23 = (((((var_11 >> (((max(4294967284, -77)) - 4294967270))))) ? ((var_8 - ((max(4294967284, var_16))))) : (~var_10)));
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                var_24 = (((((((!(arr_2 [2])))) | (max(2776669590, 2145500706))))));
                arr_14 [i_3] [i_3 - 1] [i_3] = ((-(((arr_1 [i_2 - 1]) ? (arr_10 [i_2 - 1]) : var_5))));
                arr_15 [i_3] [i_3] [i_2] = (~(arr_10 [i_2]));

                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    arr_19 [i_2] [i_3] [i_4] = 824039014;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_25 = (((22902 <= 87) ? ((-(arr_21 [i_3]))) : ((-780234678 ? (arr_8 [i_4 - 1] [i_3 - 1]) : (var_13 != var_0)))));
                        var_26 = (min(var_26, ((min((max(4503794354759607792, 121)), 0)))));
                        arr_22 [i_2] [i_3 + 1] [i_4] [i_4] [i_5] [i_3] = -780234678;
                        var_27 |= ((~((((((-69 ? 196 : 10538))) >= 3532302938260900531)))));
                        arr_23 [i_2] [i_3 - 2] [i_4] [i_3] = ((((arr_9 [i_3 + 1] [i_4 - 1]) ? (arr_9 [i_3 + 1] [i_4 - 1]) : (arr_9 [i_3 + 1] [i_4 - 1]))));
                    }
                    for (int i_6 = 3; i_6 < 17;i_6 += 1)
                    {
                        arr_27 [i_2] [i_2] [i_4] [i_3] [i_6 - 2] = (arr_7 [i_2]);
                        var_28 = ((+(((var_16 - 9036) + 127))));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_30 [i_2] [i_3] [i_2] [i_6] [i_6] [i_7] [i_7] = -var_12;
                            var_29 = (min(var_29, ((max((((~((~(arr_1 [i_2 - 1])))))), (max((arr_26 [i_7] [i_6 + 1] [i_4] [i_2 - 1] [i_2 - 1]), (arr_18 [i_2 + 1] [i_3 - 1] [i_4 + 1] [i_3]))))))));
                        }
                        var_30 = (((!var_11) != (arr_13 [i_3])));
                    }
                    var_31 = (max(var_31, ((min((((var_11 ? (arr_10 [i_4 - 2]) : -77))), (((arr_29 [i_3 - 1] [i_2 + 1]) ? (arr_29 [i_3 + 1] [i_2 + 1]) : (arr_29 [i_3 - 1] [i_2 - 1]))))))));
                    var_32 -= var_6;
                    var_33 = (max(var_33, ((((-69 | 19374) ? (max(var_3, 10533)) : 65521)))));
                }
            }
        }
    }
    #pragma endscop
}
