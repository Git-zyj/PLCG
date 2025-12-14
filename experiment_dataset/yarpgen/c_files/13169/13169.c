/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (1317785599 < 4906006952055493023);

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            var_10 = ((13540737121654058585 && ((max(var_9, var_0)))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    {
                        var_11 = (((((var_5 < var_3) ? (arr_2 [2]) : (!12))) > (arr_7 [3] [i_1] [i_2] [i_1])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_13 [i_3] [i_1] [i_1] [i_2] = (~-11);
                            arr_14 [i_4] [i_1] [i_2] [i_3 + 1] [i_4] = 236;
                        }
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_12 = 1;
                            arr_19 [i_1 - 3] [i_1] [i_1 + 1] [i_1 - 3] [i_1] = (~21);
                            var_13 &= ((3470659309 ? 23246 : -23252));
                            var_14 -= (((((!(((2063313 ? (arr_8 [i_0] [i_2] [i_3] [i_5]) : var_9)))))) % (~104)));
                            arr_20 [4] [i_1 - 3] [i_2] [i_1] [i_5] = (~126);
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            var_15 += (((((var_5 ? -1498395233 : 824307987))) || var_9));
                            var_16 = (((arr_10 [i_1]) >> (!15140985082811843656)));
                            var_17 += (~97);
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            arr_25 [i_7] [i_1] [i_2] [i_1] [i_0] = var_3;
                            var_18 = ((((var_6 == (max(var_0, var_4)))) ? ((max(3, 34074))) : ((var_5 ? var_1 : (arr_2 [i_1])))));
                            arr_26 [i_0] [i_1 - 2] [i_1] = ((((((arr_0 [i_3 - 1] [i_7]) ? (~51373) : (~var_9)))) ? ((3470659308 ? (min(var_3, (arr_7 [i_0] [i_2] [i_3 - 1] [i_7]))) : (!-1804850244))) : 495615939));
                            arr_27 [i_0] [i_1] = 1498395232;
                            var_19 *= (+(max(((3470659309 ? (arr_1 [1] [i_7]) : 14465722000247470333)), (max(243, 14862472939321177648)))));
                        }
                    }
                }
            }
            arr_28 [i_1] [i_1] = (max((arr_9 [i_1] [i_1] [i_1 - 1] [i_1 - 2]), ((((((var_2 ? 1 : var_3))) ? (min(824307974, var_6)) : var_9)))));
            arr_29 [i_1] [i_1] [i_0] = (!var_9);
        }
        var_20 &= (arr_10 [i_0]);

        /* vectorizable */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            arr_32 [i_0] [i_8] = ((!(arr_22 [i_0] [i_0] [i_0])));
            var_21 = (arr_18 [i_0]);
            arr_33 [i_0] [16] [i_0] = (arr_10 [i_0]);
        }
    }
    for (int i_9 = 0; i_9 < 22;i_9 += 1)
    {
        arr_37 [i_9] = (((arr_34 [i_9]) ? (arr_34 [i_9]) : ((var_5 ? (arr_36 [i_9] [i_9]) : (arr_35 [i_9])))));
        var_22 *= -9855;
    }
    var_23 = (max(var_23, ((max(var_0, ((var_0 ? -var_2 : var_1)))))));
    #pragma endscop
}
