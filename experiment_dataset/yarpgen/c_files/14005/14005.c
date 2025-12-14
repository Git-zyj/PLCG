/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((var_5 / ((max((~var_7), ((var_15 ? 15857 : 3))))))))));
    var_17 = -22771;
    var_18 = (var_5 && var_14);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((arr_0 [i_0]) ? (arr_0 [i_0]) : 29551)) > (!3)));

        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = var_4;
            arr_9 [i_0] [i_0] [i_0] = ((3 ? var_7 : 88));
        }
        for (int i_2 = 3; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_0] [i_0] = 127;
            arr_13 [i_0] [i_0] [i_0] = -57;
            arr_14 [i_0] [i_0] = var_3;
            var_19 = (min(var_19, (0 >= var_9)));
        }
        arr_15 [i_0] = ((~(((arr_0 [i_0]) ? (arr_10 [i_0] [i_0]) : (arr_0 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_21 [i_3] = ((!(((88 ? (((arr_18 [i_4]) | var_1)) : -var_10)))));

            /* vectorizable */
            for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
            {
                var_20 = (((arr_20 [i_4] [i_5]) ? (((242 != (arr_18 [i_3])))) : (!4294967295)));
                var_21 = (min(var_21, ((((-9223372036854775807 - 1) ? (arr_16 [i_3]) : (arr_18 [i_4]))))));
                var_22 = (((-2147483647 - 1) ? (arr_19 [i_3] [i_3]) : (arr_20 [7] [i_4])));
            }
            for (int i_6 = 0; i_6 < 16;i_6 += 1) /* same iter space */
            {

                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_23 = var_14;
                    var_24 = (~-2147483644);
                }
                /* vectorizable */
                for (int i_8 = 2; i_8 < 15;i_8 += 1)
                {
                    arr_30 [i_8] [i_3] [i_6] [i_6] [i_4] [i_3] = (arr_29 [i_8 + 1] [i_8 + 1] [i_8 - 2]);
                    var_25 = (max(var_25, (arr_28 [i_8 - 1] [i_8 - 1] [i_6] [i_8 - 1])));
                    arr_31 [i_3] [i_3] [i_3] [i_3] = (((arr_19 [i_6] [i_4]) ? -14502 : ((-322067540 ? 4609 : (-2147483647 - 1)))));
                    var_26 -= (((arr_23 [i_3] [i_4] [i_6]) ? -255 : (!-116108300)));
                }
                arr_32 [i_3] [i_4] [i_6] |= ((var_7 >= ((((min(322067539, var_7))) ? -182770110 : ((min((arr_25 [i_3] [i_4] [i_4] [i_6]), 105)))))));
            }
        }
        arr_33 [i_3] |= ((var_15 ? var_11 : 0));
        arr_34 [i_3] [3] = var_8;
    }
    var_27 = var_7;
    #pragma endscop
}
