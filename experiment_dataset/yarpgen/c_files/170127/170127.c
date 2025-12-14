/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170127
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((var_8 >> ((min(var_12, var_17)))));
    var_20 = (((max(var_11, var_6)) >> (((!((min(var_5, var_14))))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_21 = ((((((var_8 ? (arr_11 [i_0] [i_0]) : var_13)) + 9223372036854775807)) >> (((arr_11 [i_3] [i_1]) + 1300))));
                                var_22 = 122;
                                arr_13 [i_0] [i_1] [i_0] = (-1780391206188710321 || 880742398);
                                arr_14 [i_4] [i_0] [i_0] [i_0] [i_0] = ((-(~var_2)));
                            }
                        }
                    }
                    var_23 = (min(var_23, ((((!128) ? ((~(arr_6 [7] [i_1]))) : (((arr_10 [i_0] [i_1]) ^ (arr_10 [i_2] [i_1]))))))));
                }
            }
        }
        var_24 = (arr_0 [2] [2]);
    }
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        arr_18 [i_5] = ((((min(var_12, (!var_13)))) || (((((((arr_17 [i_5]) ? (arr_8 [1] [1] [1]) : var_7))) ? var_8 : 1780391206188710296)))));
        var_25 = ((~(((!((((arr_2 [i_5]) ^ (arr_3 [i_5] [i_5] [i_5])))))))));
        var_26 *= (((max(var_9, var_18)) >= -var_13));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_22 [4] = (max((((((32764 ? var_2 : 952506340)) != ((((!(arr_3 [i_6] [i_6] [i_6])))))))), (((arr_0 [i_6] [i_6]) ? var_4 : ((~(arr_2 [6])))))));
        arr_23 [i_6] = (arr_10 [i_6] [i_6]);
    }
    #pragma endscop
}
