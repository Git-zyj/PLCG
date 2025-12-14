/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121053
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        var_12 |= ((-(((var_4 | var_3) ? ((5588359807044257393 ? var_3 : (arr_1 [i_0]))) : (!14610649453874268589)))));
        var_13 = var_1;

        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            var_14 += ((((((var_6 == 3182706027084329718) ? (((arr_3 [i_0 - 3] [i_1] [i_0]) - (arr_3 [i_0 + 1] [i_1] [i_1]))) : (!var_11)))) ? (min(3836094619835283026, ((max(var_0, 32767))))) : (max((arr_0 [i_1]), var_0))));
            var_15 = var_11;
        }
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    {
                        var_16 += ((!((((arr_7 [i_3 - 1] [i_0 + 2]) ? ((max(var_3, (arr_8 [i_0] [i_2] [i_0] [i_0])))) : (~14610649453874268587))))));
                        arr_12 [i_4] [i_0] [11] [i_0] [i_0] [i_0] = (min((max(((78 ? var_3 : 4357025317289069232)), ((2830821736861709430 ? var_8 : var_11)))), ((max((!var_7), ((var_1 ? var_2 : -27152)))))));
                    }
                }
            }
            arr_13 [i_2] [i_0] = var_11;
            var_17 -= (arr_6 [i_0]);
            var_18 = (min(var_18, 124));
        }

        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            arr_16 [i_0] = ((((max((arr_0 [i_0 - 2]), (arr_2 [i_0 - 2])))) ? ((max(((3182706027084329718 ? 23250 : (arr_6 [10]))), var_0))) : ((((max(var_11, var_0))) / (max(0, var_10))))));
            arr_17 [i_5] [i_5] [i_5] = (max((arr_5 [i_0 - 3]), (((arr_11 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [9] [i_0 - 1]) + -23251))));
            var_19 |= (max((((!(~126)))), (min(((min(var_11, (arr_14 [i_0] [i_0])))), 0))));
            var_20 = ((((min(var_7, 17))) ? ((min((arr_3 [i_0 - 1] [i_0] [i_5]), var_4))) : ((var_6 ? (arr_8 [i_0 + 2] [i_0 + 2] [i_0 - 3] [i_0 - 3]) : (arr_3 [i_0 + 2] [i_0] [i_5])))));
        }
        for (int i_6 = 2; i_6 < 11;i_6 += 1) /* same iter space */
        {
            arr_22 [0] [i_0] = 32758;
            arr_23 [i_0] [i_6] [i_6 - 1] = (~0);
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_21 = (max((((~(arr_3 [i_0 + 1] [1] [i_7 + 1])))), ((32758 % ((-(arr_2 [i_0])))))));
            arr_27 [i_0] [i_7] |= ((((((arr_6 [i_0 - 2]) >> (((arr_6 [i_0 + 2]) - 209))))) || var_5));
        }
        for (int i_8 = 2; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_22 = (min(((((arr_7 [i_8 - 1] [i_0 + 1]) >= 1))), (min((arr_0 [i_0 - 2]), (arr_0 [i_0 - 1])))));
            var_23 &= (((((arr_20 [i_0 - 1] [i_8 + 1]) ? var_8 : var_4)) & (((var_7 + (arr_20 [i_0 - 3] [i_8 - 1]))))));
            arr_30 [i_0] [i_8 - 2] [0] = var_5;
            arr_31 [i_0] [i_8] = (max(((1 * ((1 ? 1 : 4294967295)))), (max(3994157218, var_9))));
        }
        var_24 = (max(var_24, var_5));
    }
    for (int i_9 = 0; i_9 < 12;i_9 += 1)
    {
        arr_36 [i_9] = var_6;
        var_25 = (((((+((((arr_14 [i_9] [i_9]) >= var_1)))))) ? (((~((var_8 ? var_4 : 0))))) : (((((var_1 >> (var_6 - 7204)))) ? (2343454888 << var_9) : ((var_10 ? (arr_3 [i_9] [i_9] [6]) : var_7))))));
    }
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 0;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            {
                var_26 = (min((arr_37 [8] [8]), ((((arr_37 [i_10 + 1] [i_10 + 1]) == (arr_41 [i_10 + 1] [i_10 + 1]))))));
                /* LoopNest 3 */
                for (int i_12 = 1; i_12 < 17;i_12 += 1)
                {
                    for (int i_13 = 4; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            {
                                arr_50 [11] [11] [11] [11] [i_11] [14] |= (max((~var_3), (max(32752, 3182706027084329718))));
                                arr_51 [i_14] [i_13] [i_12 + 2] [17] [i_11] [i_10] = (max(var_4, (max(((((arr_42 [i_10 + 1] [8] [i_10]) ? 196 : var_7))), (max((arr_38 [i_10] [i_10]), var_1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_27 = (min(var_27, (max(var_3, var_1))));
    #pragma endscop
}
