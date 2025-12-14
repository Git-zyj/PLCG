/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = 1;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_20 = (~((-1622092900989634778 ? 1 : 6760844983192744342)));
                    var_21 = (max(var_21, (((1 ? (((9297 ? ((12 ? var_10 : 1)) : ((((arr_6 [i_0] [i_1] [i_2]) || 1)))))) : ((((min(var_8, var_7))) ? 2121970936756155385 : 73)))))));
                }
            }
        }
        arr_7 [i_0] = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) > 29857));
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_22 = (((((~(arr_10 [i_3 + 1])))) ? (((((18446744073709551604 && 8547560946123289933) > var_7)))) : var_0));
            arr_12 [i_3] [i_4] = (min((max(0, 100)), (((arr_4 [i_3 + 1]) ? (arr_10 [i_3 + 1]) : (min((arr_5 [i_4] [i_4] [i_3] [i_3]), 6760844983192744347))))));
            arr_13 [i_3] = (arr_6 [i_3] [i_3] [i_3]);
        }

        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            var_23 *= min(1577454580, (((((1 ? var_12 : 1577454580))) ? var_11 : var_15)));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 4; i_7 < 9;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_24 = 1;
                            arr_24 [i_3] [i_3] [i_3] [i_3] = ((var_10 ? (min((min(var_14, var_15)), ((86 ? var_1 : 7)))) : (-127 - 1)));
                        }

                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            var_25 = ((((((33 > 1540049468) ? 5785 : 1))) ? (((((154 ? var_6 : var_2))) ? (max(var_17, var_9)) : (((min(-104, 154)))))) : (arr_19 [i_7] [i_7])));
                            arr_28 [i_5] = var_6;
                            var_26 = ((~(min((((arr_4 [i_3]) ? 151 : 1)), 3))));
                        }
                        for (int i_10 = 0; i_10 < 10;i_10 += 1)
                        {
                            var_27 = 0;
                            arr_32 [i_3] [i_3] = 65535;
                        }
                        for (int i_11 = 0; i_11 < 10;i_11 += 1) /* same iter space */
                        {
                            var_28 = (min((((((min(var_18, var_14))) ? (var_14 || var_18) : 105))), (((((arr_1 [i_3]) && 57)) ? -563698200 : 2121970936756155385))));
                            arr_35 [i_3] [i_3] [i_3] = (((var_8 + (1 + var_0))));
                            var_29 *= var_5;
                            arr_36 [i_3] [i_7] = 157;
                        }
                        for (int i_12 = 0; i_12 < 10;i_12 += 1) /* same iter space */
                        {
                            var_30 = var_12;
                            var_31 = (min(-75, 1));
                            var_32 = (min((min(var_15, (max(22290, 0)))), var_4));
                            var_33 = (arr_17 [i_5] [i_5] [i_7] [i_12]);
                            arr_40 [i_12] [i_7] [i_6] [i_6] [i_5] [i_3] = (max(3, (arr_18 [i_3] [i_3])));
                        }
                        arr_41 [i_3] [i_5] [i_3] [i_7] [i_6] = var_3;
                    }
                }
            }
        }
        var_34 &= (min(var_12, (((!(((var_3 ? 104 : (arr_27 [i_3] [i_3] [i_3] [i_3] [i_3])))))))));
    }
    var_35 = ((((563698200 ? var_7 : 1))) ? ((var_3 ? (var_10 | 2147483647) : (max(6568582027816248628, 31)))) : ((var_9 ? 6568582027816248628 : 160)));
    #pragma endscop
}
