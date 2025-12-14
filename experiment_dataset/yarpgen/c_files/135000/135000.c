/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_17 = (min(var_17, (((var_0 ? (((var_14 < (((min(78, 78))))))) : (((var_6 < (max((arr_5 [i_0] [4]), (arr_4 [8])))))))))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_15 [i_0] [i_0] [i_2 - 1] [i_1] = max(var_16, (((-87 % 111) & 3490084687)));
                            arr_16 [i_0] [i_2] = ((-((max(107, 78)))));
                            var_18 = (min(var_18, (max(470691942, (43 && var_15)))));
                            arr_17 [i_0] [i_0] = (~3824275354);
                        }
                    }
                }
            }
            var_19 *= (((arr_5 [i_0] [4]) << (((((arr_12 [i_1] [i_0] [i_0]) ? (arr_11 [i_1] [i_1] [i_1] [i_0]) : var_1)) + 130))));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_20 = (min(var_20, var_6));
            var_21 = (min(var_21, (((-(arr_20 [6]))))));
            var_22 = (min(var_22, (((((-var_8 ? (!3824275330) : 3665360233)) < 3124013563)))));
        }
        var_23 = (min(var_23, (((var_14 ? (((!(arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((~(var_12 && var_2))))))));
        var_24 = (max((arr_3 [i_0] [i_0]), ((max(var_14, (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        var_25 = (min(629607046, 2661425155));
    }
    for (int i_6 = 3; i_6 < 8;i_6 += 1) /* same iter space */
    {
        arr_24 [i_6] &= ((max(((((arr_6 [i_6]) <= (arr_20 [0])))), 118)));
        arr_25 [i_6] [i_6] = ((-100 ? 0 : -111));
        var_26 = max(2661425155, 4002755118);

        for (int i_7 = 4; i_7 < 8;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                arr_34 [i_8] [i_7] [i_8] |= 3641474231;
                var_27 = ((((min((max(var_3, var_9)), (!var_14)))) ? var_5 : var_13));
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                arr_37 [6] [6] |= ((var_7 ? ((((arr_22 [i_7] [i_6 + 1]) <= var_9))) : (((!(arr_31 [i_6] [i_9] [i_9]))))));
                var_28 = ((!((((arr_18 [i_6] [i_7]) >> (arr_31 [i_6] [i_7 + 2] [i_6]))))));
                var_29 = arr_7 [i_7 + 1] [i_7];
                arr_38 [i_6] [6] [i_9] |= var_3;
            }
            var_30 = max((~var_16), var_7);
        }
        for (int i_10 = 0; i_10 < 10;i_10 += 1)
        {
            var_31 = (max(var_15, -50));
            var_32 = ((((((arr_32 [i_6] [i_10] [i_6 - 1]) ? (((((arr_5 [i_6] [i_10]) || var_11)))) : (max(var_12, var_4))))) ? (!var_13) : (((var_6 && ((max(var_7, 1806120645))))))));
            var_33 = ((125 << (((arr_23 [i_10]) + 100))));
        }
    }
    for (int i_11 = 3; i_11 < 8;i_11 += 1) /* same iter space */
    {
        arr_43 [i_11] [i_11] = arr_19 [i_11] [i_11];
        arr_44 [2] |= 4294967289;
    }
    var_34 = (min((max(54, -78)), (((!(var_6 | var_2))))));
    #pragma endscop
}
