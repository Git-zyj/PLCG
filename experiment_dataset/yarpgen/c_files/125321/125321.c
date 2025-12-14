/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125321
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_1);
    var_15 = ((-(~var_2)));
    var_16 = ((!((!(!var_11)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(((!(arr_0 [i_0]))))));
        var_17 = ((-(!32117)));

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_18 -= ((!(((~(arr_3 [i_0] [i_1]))))));
            arr_6 [i_0] [i_0] [i_1] |= ((-((-(~200)))));
        }
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_9 [i_2] |= (~(~var_0));
            var_19 = (max(var_19, (((!(!885854981))))));
        }
    }
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_12 [i_3] = ((!(((~(((!(arr_10 [i_3] [i_3])))))))));

        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {

                        for (int i_7 = 2; i_7 < 16;i_7 += 1)
                        {
                            var_20 = (max(var_20, (~-var_7)));
                            var_21 = (max(var_21, (((~((~(~var_10))))))));
                        }
                        arr_24 [i_4] [i_4] [i_3] [i_6] = (((~(arr_11 [i_3]))));
                        var_22 -= ((-(~var_13)));
                    }
                }
            }
            arr_25 [i_3] [i_4] [i_4] = (-(((-(arr_16 [i_3] [i_3] [i_3] [i_3])))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_23 = (!var_6);
            var_24 = (~8395036220367412541);
        }
        arr_28 [i_3] = -var_6;
        var_25 -= -var_6;
    }
    for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
    {
        arr_33 [i_9] [i_9] = (!-var_5);
        arr_34 [i_9] = ((-(((!(!var_8))))));
    }
    for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
    {
        arr_38 [i_10] = ((!(!var_6)));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 18;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                {
                    var_26 = -4294967283;
                    var_27 -= ((~(!-var_2)));

                    for (int i_13 = 0; i_13 < 18;i_13 += 1)
                    {
                        var_28 = (max(var_28, (((!((!(!var_3))))))));
                        arr_48 [i_10] [i_11] [i_12 + 1] = ((!(!var_7)));
                    }
                    for (int i_14 = 0; i_14 < 18;i_14 += 1)
                    {
                        var_29 = ((~(!-var_4)));
                        arr_51 [i_10] [i_11] [i_12 + 1] [i_14] = ((!((!(((~(arr_32 [i_12 + 1] [i_11]))))))));
                        var_30 = ((!(~252)));
                    }
                    for (int i_15 = 4; i_15 < 16;i_15 += 1)
                    {
                        arr_55 [i_10] [i_10] [i_10] [i_10] [i_10] = ((!((!((!(arr_31 [i_10] [10])))))));
                        arr_56 [i_10] [i_11] [i_11] [i_12 + 1] [i_15 - 4] = (!250);
                    }
                    arr_57 [i_10] [i_11] [i_11] [i_12 + 1] = ((~(!-28484)));
                }
            }
        }
        arr_58 [i_10] = ((~(((!(arr_27 [i_10] [i_10] [i_10]))))));
        var_31 += ((!((!(~var_0)))));
        var_32 += ((((!(~var_3)))));
    }
    var_33 = ((!(((-(!var_9))))));
    #pragma endscop
}
