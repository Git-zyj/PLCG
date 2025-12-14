/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0 - 2] [i_0 - 2] = (((((~var_19) + 2147483647)) << (var_4 - 244)));
        var_20 = ((((59583 ? -995048176252806748 : var_12)) ^ (-32767 - 1)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_21 = (arr_0 [i_1]);
        var_22 = ((-(arr_0 [i_1 + 1])));
        arr_5 [i_1] [i_1] = (arr_4 [7]);
        arr_6 [i_1] = (~16474006690314972976);
    }

    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_23 = (min(var_23, ((min((((~(arr_8 [i_2 + 1])))), (((~1) ? (var_6 | var_11) : 10735416160468564641)))))));
        var_24 = -1;
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {
            arr_17 [i_3] [i_4] = var_12;
            arr_18 [i_3] [i_3] = 1;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            var_25 = ((((var_5 ? (arr_10 [i_3]) : 1837120466))) && ((((arr_10 [i_3]) ? 0 : 2829003581))));
            arr_21 [i_3] = (max(((65 ? (arr_10 [i_3]) : var_7)), 4598485477041691406));
        }
        for (int i_6 = 3; i_6 < 15;i_6 += 1)
        {
            var_26 = (max(var_26, (arr_12 [i_6] [1])));
            var_27 = (max(var_27, (var_10 || -1)));
        }
        arr_24 [i_3] [i_3] = (arr_11 [i_3 + 1] [i_3 + 2]);
        var_28 = (max((((arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 2]) ? (arr_22 [i_3 + 2] [i_3 - 1] [i_3 - 1]) : var_10)), 11));
        arr_25 [i_3] = (((+((-27933 ? (arr_20 [i_3]) : (arr_12 [i_3] [i_3]))))));
        arr_26 [i_3] [i_3] = 0;
    }
    for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
    {
        arr_29 [i_7] = var_2;
        var_29 *= (((~var_3) > ((max(var_15, 10726)))));
        arr_30 [i_7] [i_7] &= (max(((max((((2709284171 == (arr_14 [4] [i_7 - 1])))), 7234))), (((arr_11 [i_7 + 1] [i_7 - 1]) ^ (var_19 / 4398046494720)))));
        var_30 |= (max(((205 ? 12945474665531709516 : 65472)), ((max(-81, 273)))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
    {

        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            var_31 = (min(var_31, (((-123 != (arr_12 [i_8] [2]))))));
            arr_37 [i_8] = (((arr_36 [i_8] [i_9]) ? (arr_34 [i_8 + 2] [i_8 - 1] [i_9]) : var_11));
        }
        var_32 = (((((1 ? 2100775700 : 0))) ? (352199968 != var_2) : ((-23 ? var_4 : 50))));
        arr_38 [i_8] = (arr_16 [i_8 - 1]);
    }

    /* vectorizable */
    for (int i_10 = 1; i_10 < 11;i_10 += 1)
    {
        arr_43 [i_10 + 1] [i_10] = (~1);
        var_33 = (arr_35 [i_10 + 1]);
    }
    /* LoopNest 3 */
    for (int i_11 = 0; i_11 < 14;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 14;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 11;i_13 += 1)
            {
                {
                    var_34 = 1152162526;
                    var_35 = (max(var_35, ((-((3130336045 >> (((~126) + 158))))))));
                    arr_54 [i_12] = 208116164;
                    arr_55 [i_11] [i_13] = ((~-13649) ? ((~((max(var_12, 1))))) : (19698 << 0));
                }
            }
        }
    }
    var_36 += var_5;
    #pragma endscop
}
