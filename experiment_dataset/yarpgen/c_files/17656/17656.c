/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        var_16 -= var_6;
        arr_2 [i_0] [i_0] = -var_2;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    var_17 = (max((((arr_9 [i_1] [i_2 + 2] [10] [10]) ? var_6 : 7)), (min(var_13, (arr_7 [i_1] [i_2 + 1])))));
                    arr_10 [i_2] [i_2 + 3] [5] [i_1] = (max(((4341 ? -4339 : -4342)), (max(28752, var_15))));
                    var_18 = (max(var_18, (((((-19475 ? 2147483647 : 5546415549329210661)) >> (((((~var_11) ? ((-1 ? var_5 : var_10)) : var_10)) - 17597)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    {
                        var_19 = (min(var_19, (arr_4 [i_1])));
                        var_20 &= (max(28752, ((min(0, (arr_5 [i_5]))))));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
    {
        var_21 = 7;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 20;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {
                        arr_31 [i_7] [i_7] [19] [i_10] [i_10] = (((((1382532543 ? 11006 : 54524))) && (((-var_1 ? (((arr_20 [6]) + -20084725)) : (((arr_27 [i_7] [i_8] [7]) ? 13449 : 13454)))))));
                        arr_32 [i_7] [i_8] [i_9] [i_10] [i_10] = ((max(3937372115, 1382532543)));
                        arr_33 [i_8] = ((var_6 ? ((((max(var_12, var_10)) == (((arr_26 [i_7] [i_8]) ? -13450 : (-32767 - 1)))))) : (arr_27 [i_9 + 2] [i_9 + 2] [i_9 + 2])));
                    }
                }
            }
        }
        arr_34 [i_7] = min(((min(61402, -4331))), -173245513);
        arr_35 [i_7] = ((((((-(arr_26 [i_7] [i_7]))) > var_10)) ? ((2912434753 ? var_6 : ((var_5 ? -1759786364 : -5189512986289294169)))) : ((max(((231109802 ? 9249 : var_0)), (((var_13 ? (arr_28 [i_7] [i_7]) : var_15))))))));
    }
    for (int i_11 = 0; i_11 < 22;i_11 += 1) /* same iter space */
    {
        arr_38 [i_11] [i_11] = 1759786364;
        var_22 = ((-(min(14510, ((var_0 ^ (arr_25 [i_11] [i_11] [6])))))));
        arr_39 [i_11] = ((((((((var_13 ? var_14 : 1759786368))) ? 4331 : (arr_21 [i_11])))) ? ((((arr_21 [i_11]) ? (var_6 <= var_5) : ((-1231429079 ? 29 : 0))))) : (((((var_12 ? 0 : (arr_28 [i_11] [i_11])))) ? ((65535 ? var_3 : -115)) : ((max(1048575, 0)))))));
        var_23 |= (max(31, ((0 ? 24 : (arr_26 [i_11] [i_11])))));
    }
    var_24 = (17380102 ? ((((min(0, -830637904)) / -4331))) : ((var_10 ? var_15 : var_4)));
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 24;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 24;i_13 += 1)
        {
            {
                arr_44 [i_12] [i_13 - 2] [17] = 26;
                arr_45 [i_12] [i_13] = var_8;
                var_25 *= 168769262;
                var_26 = (max(var_26, var_5));
            }
        }
    }
    var_27 = ((((min(0, 7312))) ? -1514286624 : var_11));
    var_28 = ((var_1 ? ((((max(var_11, -6349586777631026381)) - 28740))) : (((!1789381685968321788) * var_7))));
    #pragma endscop
}
