/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 4294967289;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_13 = (836670896 ^ 42);
        var_14 = (max(var_14, ((((((arr_0 [10] [i_0]) ? (arr_1 [6]) : (arr_1 [8]))) == (arr_0 [1] [1]))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((-1 ? (-517615463 - 4294836224) : (((arr_5 [i_0] [i_1 + 3]) & var_4))));
                    var_15 = (min(var_15, (((max((arr_6 [i_2] [i_1 + 2]), var_4))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 -= (min((!2), (min((min(20667, 4294836232)), (!4294836233)))));
                                arr_14 [i_0] [i_3] [i_3] [i_2] [i_1] [i_0] [i_0] = 2853347036648384807;
                                arr_15 [i_4] [i_1] [i_2] [i_0] = 9771493043819345376;
                                var_17 = (min(var_17, (((6883601858238542703 ? 131061 : 131046)))));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        var_18 = (min(var_18, (((189 ? 9771493043819345370 : 9771493043819345376)))));
                        var_19 = ((!(((4294836218 - (arr_1 [i_0]))))));
                        var_20 = ((!(6883601858238542690 < 34228)));
                        arr_19 [i_0] [i_0] [i_2] [i_5] = (((var_0 - -27382) ? 168 : 1988698538466874363));
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_21 = ((11563142215471008925 ? 4294836251 : -159));
        arr_23 [i_6] = (min((((((1 >> (52102 - 52078)))) ? -57 : (var_0 >= 60))), (max(((0 ? 907127827 : 65526)), 53))));
    }
    var_22 |= var_11;
    var_23 = (((var_9 < var_3) >> (1 & var_8)));
    #pragma endscop
}
