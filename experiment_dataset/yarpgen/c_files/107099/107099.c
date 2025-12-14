/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = (min(255, 0));
                    arr_10 [i_0] = var_8;

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            var_14 = ((arr_7 [i_1] [i_2 + 1] [i_3]) ? (arr_12 [i_2 - 1] [i_0] [i_3 - 1] [i_3 + 1]) : (arr_13 [i_3 - 1] [i_2] [i_2 + 2] [i_0] [i_4]));
                            arr_15 [i_3 + 1] [i_0] [i_2 + 2] = (808233102 * 4);
                        }
                        var_15 += (min((((arr_1 [i_0]) ? (arr_1 [i_2 - 1]) : 27133)), (~65523)));
                    }
                    for (int i_5 = 3; i_5 < 21;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_2 - 1] [i_5] = (!3486734193);
                        arr_20 [i_0] [i_0] = ((~(min(3356115662785793245, 4))));
                        arr_21 [0] &= var_6;
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_16 += (max(var_9, (min(-7683628248915734701, (((3486734194 ? 127752764 : 4)))))));
                        arr_24 [i_0] [i_0] [i_2 + 1] [i_6] = ((var_2 / (23001 || 130)));
                        arr_25 [i_0] [i_1] [i_2] [i_1] [i_0] = (arr_0 [i_0]);
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {

                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            var_17 = (min(var_17, var_4));
                            var_18 = (14 % 13);
                        }
                        var_19 = 18;
                    }
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        var_20 = 18;
                        var_21 ^= (max((min((arr_4 [i_0] [i_9]), ((var_5 << (((arr_30 [i_0] [i_0] [i_1] [i_2] [i_9]) + 31848)))))), (((-32767 - 1) ? 26333 : 1))));
                    }
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        var_22 = min((min(var_7, ((min((arr_1 [i_0]), var_10))))), (max(237, (~1))));

                        for (int i_11 = 0; i_11 < 23;i_11 += 1)
                        {
                            arr_40 [i_0] [i_1] [i_2 + 1] [i_10] [i_11] [i_0] = ((var_0 ? var_12 : var_11));
                            var_23 = ((!(~4294967295)));
                        }
                        for (int i_12 = 0; i_12 < 23;i_12 += 1)
                        {
                            var_24 = (min(var_24, ((-var_8 << (((~3511416521) - 783550768))))));
                            arr_43 [i_0] [i_10] [i_2] [i_10] [i_0] = ((808233098 ? 891279393 : -4256));
                            var_25 = (max(var_25, (((((max(15008690265691105866, 1))) ? (max((((arr_6 [18] [i_1] [i_2]) ? 65535 : 7680)), (((-(arr_31 [i_0] [i_1] [i_2] [i_12] [i_12] [i_2])))))) : -79)))));
                            var_26 = var_9;
                            arr_44 [i_0] [i_1] [i_2 - 2] [i_10] [i_0] = var_3;
                        }
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        var_27 &= (min((((arr_37 [i_1] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 2]) | 1306222441)), (arr_27 [i_1] [i_2 + 1] [i_2 + 2] [i_2 - 2])));

                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            var_28 = ((((min((arr_8 [i_2 - 1] [i_1] [i_2 + 2] [i_13]), (arr_8 [i_2 + 1] [i_1] [i_14] [i_13])))) ? (arr_8 [i_2 + 2] [i_1] [i_2] [i_0]) : (arr_8 [i_2 - 2] [i_1] [i_1] [i_13])));
                            var_29 = (max(((var_11 / (arr_30 [i_0] [i_1] [i_2] [i_13] [i_2 - 2]))), (arr_30 [i_14] [i_1] [i_2 + 1] [i_13] [i_2 - 2])));
                        }
                    }
                }
            }
        }
    }
    var_30 = ((!(~var_10)));
    #pragma endscop
}
