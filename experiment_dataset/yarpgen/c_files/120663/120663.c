/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max((max(var_5, -4941762738408955697)), (((var_6 ? 254 : var_5)))))) ? 4321317079395909256 : (59 > 157)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_14 = (((((var_7 ? (arr_4 [i_2 + 1] [i_2 + 2] [i_2 - 1]) : (arr_4 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) ? 16095176589698783026 : ((((var_12 || (arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2])))))));
                    var_15 = ((((arr_3 [i_2 + 1] [i_2 - 1]) ? var_12 : 4294967286)));
                    arr_8 [i_1] [i_2] [i_2] [i_0] = ((625951280228550486 ? (arr_0 [i_2]) : (~var_7)));
                    var_16 = 15;
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_17 = ((((min(var_2, 18446744073709551615))) < ((~((var_3 ? -124 : 6888664509374923922))))));
        var_18 = (((min((((arr_9 [i_3]) ? var_9 : 195)), (!17874584562444985541))) >= ((25 << (1344156128 - 1344156128)))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 9;i_4 += 1) /* same iter space */
    {
        var_19 = (((!var_10) ? (arr_9 [i_4 + 1]) : var_0));

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            arr_16 [i_4] [i_5] [i_4] = ((-25 ? 888161541461112085 : 0));
            arr_17 [i_4] [i_4] [i_5] = (!var_8);
        }
        arr_18 [i_4] = (((arr_15 [i_4 + 1] [i_4 - 1]) ? -9043712182683530869 : var_9));
    }
    for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
    {
        arr_23 [i_6 - 1] = (((!(var_12 >> var_5))) ? var_12 : (((8627 <= (((arr_5 [i_6] [i_6]) | var_11))))));
        var_20 = ((-((255 ? 1675365562 : (var_0 == -3267514061256550924)))));
        var_21 = (var_11 <= var_1);
    }
    for (int i_7 = 0; i_7 < 20;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 20;i_9 += 1)
            {
                {
                    var_22 = (124 - var_11);
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 1; i_11 < 19;i_11 += 1)
                        {
                            {
                                arr_37 [i_7] [i_8] [i_9] [9] [3] [i_11 + 1] = (arr_25 [i_10] [i_11]);
                                arr_38 [i_7] [i_8] [i_9] [17] [i_11] = ((!((min((((var_0 ? (arr_34 [i_9]) : 1))), ((var_9 ? -7586 : 9043712182683530859)))))));
                                arr_39 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = var_12;
                            }
                        }
                    }
                    var_23 = (min((247 != 2436), (((var_5 / var_10) ? (((arr_28 [i_7]) * var_0)) : -120))));
                }
            }
        }
        var_24 = (max(((~(~var_11))), ((((3267514061256550924 ? 14762 : -9043712182683530893))))));
        arr_40 [i_7] = (min((min(((-9043712182683530906 ? (arr_36 [i_7] [10] [i_7]) : var_3)), (((!(arr_33 [i_7])))))), var_2));
        var_25 = (((arr_25 [i_7] [i_7]) ? var_6 : (((arr_11 [i_7] [i_7]) ? ((var_10 ? (arr_30 [i_7] [i_7] [i_7]) : 57863943)) : var_6))));
    }
    var_26 = ((var_4 ? (((!(var_9 || 4237103355)))) : ((max(24, var_8)))));
    #pragma endscop
}
