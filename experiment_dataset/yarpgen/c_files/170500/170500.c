/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, ((min((min((var_7 + var_3), ((min(var_2, var_7))))), var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [21] = (!0);
                arr_7 [i_1] [i_0] = ((((max((!120), (max(119, -17308))))) ? (((!((((arr_1 [i_0] [i_1]) ? var_6 : var_7)))))) : (arr_3 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_20 += var_1;
                                var_21 = (min(var_21, (((~((min((arr_9 [i_0] [i_0] [i_0]), (arr_18 [i_4] [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])))))))));
                            }
                            arr_19 [i_3] [i_2] [i_1] [i_0] = (((arr_17 [i_0] [i_0] [i_0] [i_0]) ? (~54870) : ((0 ? var_17 : var_10))));
                            var_22 += var_1;
                            arr_20 [i_2] [i_2] [i_1] [i_0] = ((-(arr_8 [8] [i_1] [i_2])));
                        }
                    }
                }
                arr_21 [i_0] [i_1] [i_0] = (arr_16 [6] [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }

    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            var_23 = (min(var_23, ((!(arr_24 [i_5])))));
            /* LoopNest 3 */
            for (int i_7 = 1; i_7 < 1;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    for (int i_9 = 2; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_24 = (min(var_24, (arr_34 [i_5] [i_6] [i_9] [i_8] [i_9 + 1] [i_5] [i_7])));
                            var_25 = ((((((arr_33 [i_5] [i_9 + 1] [i_7] [i_8] [i_7 - 1] [i_8]) ? (arr_33 [i_5] [i_9 + 2] [i_8] [i_8] [i_7 - 1] [i_6]) : var_9))) ? (!var_8) : ((-(arr_33 [i_5] [i_9 + 2] [i_7 - 1] [i_8] [i_7 - 1] [i_6])))));
                        }
                    }
                }
            }
            arr_35 [i_5] [i_6] [i_5] = (((arr_32 [i_6] [i_5] [i_5] [i_6] [i_5] [i_6] [i_5]) ? 59622 : 4));
        }
        for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
        {
            var_26 = (max(var_26, (((-var_10 ? (arr_38 [i_10 + 1] [8] [i_10 + 1]) : ((-((4 ? 5 : (arr_37 [i_10 + 1]))))))))));
            var_27 = (min(var_27, (min(((((6 << (120 - 94))))), ((~(arr_31 [i_5] [i_10] [i_10 - 2] [i_5] [i_5])))))));
        }
        for (int i_11 = 3; i_11 < 23;i_11 += 1) /* same iter space */
        {
            arr_41 [i_5] [8] = (arr_39 [i_5] [i_11]);
            arr_42 [i_5] [i_5] = ((arr_32 [i_11 - 2] [i_11 - 3] [i_5] [i_11 - 2] [i_5] [i_11 - 2] [i_11]) & (arr_32 [i_11] [i_11] [i_5] [i_11] [i_5] [i_11 + 1] [i_5]));
            arr_43 [i_5] = var_7;
        }
        var_28 = ((((!(((var_14 ? (arr_37 [i_5]) : 0))))) ? (max(((~(arr_37 [i_5]))), (arr_25 [i_5] [i_5]))) : (((arr_31 [i_5] [i_5] [22] [i_5] [i_5]) ? 232 : (arr_39 [i_5] [i_5])))));
        arr_44 [i_5] = ((((arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]) ? ((var_16 ? (arr_39 [i_5] [i_5]) : (arr_22 [i_5]))) : var_17)));
        var_29 = var_7;
    }
    var_30 = var_18;
    #pragma endscop
}
