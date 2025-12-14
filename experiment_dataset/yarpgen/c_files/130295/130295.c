/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_2 [20]);
        arr_4 [i_0] = ((~(~-98)));
        arr_5 [i_0] = (((((((~(arr_0 [i_0] [i_0]))) * (((arr_2 [i_0]) ? var_17 : (arr_1 [i_0])))))) ? ((((max(var_9, (arr_0 [i_0] [i_0])))) ? var_2 : (!4294967295))) : (((var_16 ? ((20319 ? 653731796 : var_0)) : (arr_0 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_9 [i_1] = (((((-((((arr_0 [i_1] [i_1]) != (arr_8 [i_1]))))))) ? (((-255 ? (max(653731796, -653731797)) : 0))) : ((((-32767 - 1) >= 27040)))));
        arr_10 [i_1] = (max(1, 18446744073709551615));
        arr_11 [i_1] = (((!var_7) ? (((((0 ? var_4 : var_9)) >= ((max(255, -122)))))) : ((((!var_11) <= (((arr_1 [i_1]) | var_18)))))));
        arr_12 [i_1] = ((!((!((!(arr_7 [i_1] [i_1])))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                arr_17 [i_2] [i_2] [i_2] = (max((((-0 ? (~var_6) : (((arr_1 [i_2]) ? (arr_16 [i_2]) : (arr_15 [i_2] [i_2] [8])))))), ((-(arr_14 [i_3])))));

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_22 [i_3] [i_3] [i_4] = ((((max((((-32767 - 1) ? (arr_1 [i_5]) : var_2)), ((((arr_21 [i_4] [i_4] [i_4] [i_4]) ? (arr_15 [i_2] [i_3] [i_5]) : -653731797)))))) ? ((var_7 ? (arr_20 [i_2] [i_2] [i_4] [i_2] [i_4] [i_4]) : (arr_20 [i_3] [i_5] [i_4] [i_4] [i_3] [i_2]))) : ((~(-32767 - 1)))));

                        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            var_19 = (((-3930467536474992767 + -32761) ? ((-(var_0 / 13565))) : (((!((max(-929, (arr_23 [i_2] [1] [i_4] [i_3] [i_3] [i_2] [i_2])))))))));
                            arr_26 [i_4] [i_4] = (max(var_7, -1));
                            arr_27 [i_2] [8] [8] [0] [i_5] [i_4] [i_6] = ((!((!(arr_0 [i_4] [i_4])))));
                            arr_28 [i_2] [i_3] [i_2] [i_4] [i_4] [i_4] [i_6] = (var_18 / (((((~var_10) < var_17)))));
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                        {
                            var_20 = (~-32756);
                            var_21 = ((((0 ? var_3 : -17132)) / (max(((var_18 ? 32743 : var_4)), (arr_16 [i_2])))));
                        }
                        for (int i_8 = 0; i_8 < 19;i_8 += 1)
                        {
                            arr_34 [i_4] [6] [i_4] [i_5] [i_4] = -27036;
                            var_22 = -4;
                        }
                    }
                    arr_35 [i_2] [i_4] = var_9;

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        var_23 = ((~(233 * var_4)));
                        arr_39 [i_2] [i_3] [i_4] [i_4] [i_3] = ((-((32765 ? 7 : -32762))));
                        var_24 += ((32762 ? -2946971953508535765 : 32761));

                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_25 = (max(var_25, (((!(arr_18 [i_2]))))));
                            arr_43 [i_9] [i_4] = var_17;
                        }
                        arr_44 [i_4] [i_3] [i_4] [i_4] [i_4] = var_3;
                    }
                    arr_45 [i_2] [i_2] [i_4] [i_3] = (max(var_13, (((!(!var_8))))));
                }
            }
        }
    }
    var_26 = ((-var_12 ? var_9 : var_6));
    var_27 = var_17;
    var_28 = ((228 | ((((max(var_0, var_11))) ? (~var_13) : ((var_18 ? -32761 : var_11))))));
    #pragma endscop
}
