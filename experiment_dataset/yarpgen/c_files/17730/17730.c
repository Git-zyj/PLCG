/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17730
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~9223372036854775806);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((+(((!((min((arr_1 [i_1]), (arr_0 [i_0])))))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_0] [7] [7] [i_0] = ((min((arr_8 [i_0] [i_0] [i_0]), (arr_8 [i_1] [i_0] [i_1]))));
                        arr_12 [i_0] [i_1] [i_1] = ((((((max((arr_7 [i_2] [13]), (arr_3 [i_2])))) ? (((1073741760 ? 9223372036854775798 : -9223372036854775801))) : (arr_8 [i_3] [i_0] [i_3]))) ^ (((arr_3 [i_2]) ? (arr_5 [i_0] [i_0] [i_3]) : (((arr_6 [i_0] [i_1]) ? (arr_0 [i_0]) : (arr_0 [i_0])))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((~(min((((~(arr_2 [i_0])))), (((arr_5 [i_1] [5] [5]) & (arr_1 [2])))))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_3] = ((((arr_8 [i_1] [i_0] [i_3]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_1 [i_3]))));
                    }
                    arr_15 [i_1] [i_0] [i_1] = ((!(arr_2 [i_0])));
                    arr_16 [i_0] [i_1] [i_2] [i_2] &= (max((((arr_7 [i_0] [i_0]) / (arr_7 [i_0] [i_2]))), (((arr_7 [i_2] [i_0]) * (arr_6 [i_1] [i_2])))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                arr_23 [i_0] [i_1] [0] [i_6] = ((-(((arr_7 [i_0] [0]) ? (arr_17 [i_0]) : (arr_17 [i_0])))));
                                arr_24 [i_0] [2] [2] [2] [i_4] = 88;
                                arr_25 [i_1] [i_1] [i_1] [i_4] [i_4] = (((((arr_17 [i_0]) >= (arr_17 [i_0]))) ? (((((arr_17 [i_6]) && (arr_17 [i_4]))))) : (min((arr_17 [i_0]), 11))));
                            }
                        }
                    }
                    arr_26 [i_0] [i_1] [i_0] [i_4] = ((-((-(arr_3 [i_4])))));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_29 [16] [i_0] [i_7] = (max(816575503, 6012252626963964408));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 18;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 14;i_9 += 1)
                        {
                            {
                                arr_34 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8] [i_8] &= min((((arr_31 [i_1] [i_1] [i_0] [i_8] [i_9 + 4] [i_7]) ? (max(26, (arr_32 [i_7] [i_7] [i_7] [i_7] [i_7] [17] [i_7]))) : ((min((arr_19 [1] [7] [7] [i_1] [i_1] [i_0]), 9223372036854775806))))), (arr_10 [1] [10] [0] [i_8] [0] [i_8]));
                                arr_35 [i_1] [i_8] [i_7] [i_1] [i_1] |= (arr_22 [i_0] [1] [i_0]);
                                arr_36 [i_0] [i_1] [i_1] [i_0] [i_9] [6] [2] &= ((((((arr_8 [i_0] [i_8] [i_9]) ? 1073741760 : (arr_27 [0]))) | (arr_6 [i_1] [i_8]))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = var_14;
    var_22 = ((((max(7373, 1073741741))) ? (max(17521, -4112833661878374080)) : var_18));
    #pragma endscop
}
