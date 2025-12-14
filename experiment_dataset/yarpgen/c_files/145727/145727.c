/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((min(((max(var_7, var_11))), (max((-9223372036854775807 - 1), 0)))), ((min((!31), (!var_14))))));
    var_21 = (min((((~(~4194288)))), (min((min(var_2, var_17)), (~var_4)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_22 = (!var_17);
            var_23 = (~-var_11);
            var_24 = 4194288;
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_25 = ((~((~(arr_0 [i_0])))));
            var_26 = ((!(~18)));
            var_27 = (!-var_15);
            arr_8 [i_0] [i_2] = ((!(arr_1 [i_0])));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    var_28 &= ((!(~32767)));
                    var_29 = 4194266;
                }
                var_30 = var_15;
            }
            arr_16 [i_0] [i_3] [i_0] = 24576;
            var_31 = (max(var_31, (~1)));
            var_32 = (arr_9 [i_0] [i_3]);
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 22;i_7 += 1)
            {
                {
                    var_33 = ((!(((-(arr_6 [i_0] [i_0]))))));
                    var_34 = ((!(((-(arr_11 [i_0] [i_0] [i_0]))))));
                }
            }
        }
        arr_24 [i_0] [1] = (~-16);
    }
    /* vectorizable */
    for (int i_8 = 4; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_35 -= ((-((-(arr_27 [i_8] [i_8])))));

        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            var_36 -= (+-4194289);
            var_37 = (--504);
        }
    }
    /* vectorizable */
    for (int i_10 = 4; i_10 < 13;i_10 += 1) /* same iter space */
    {
        var_38 = (~134217727);
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 14;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 17;i_13 += 1)
                {
                    {

                        for (int i_14 = 0; i_14 < 17;i_14 += 1) /* same iter space */
                        {
                            var_39 = (~-4194288);
                            arr_45 [6] = ((~(~var_7)));
                            var_40 = ((!(((~(arr_39 [16] [i_11] [0] [i_14]))))));
                            var_41 = ((!(!-25344)));
                        }
                        for (int i_15 = 0; i_15 < 17;i_15 += 1) /* same iter space */
                        {
                            var_42 = (-(~var_10));
                            var_43 = ((~(~var_13)));
                            var_44 = (min(var_44, (~8122515589780823953)));
                        }
                        for (int i_16 = 0; i_16 < 17;i_16 += 1) /* same iter space */
                        {
                            var_45 &= (!var_17);
                            var_46 = (!1);
                        }
                        for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
                        {
                            var_47 += (!6982255567043362051);
                            var_48 = (!var_19);
                        }
                        var_49 = ((!((!(arr_47 [i_10] [i_10] [i_10] [i_10])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
