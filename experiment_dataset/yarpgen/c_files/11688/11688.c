/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11688
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((var_3 ^ (min(var_7, var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 = (max(var_11, -24412));
                var_12 = (((-24396 || -14691) ? (arr_0 [i_1] [i_0]) : ((((2147418112 ? (arr_2 [i_0] [i_1]) : 30720))))));
            }
        }
    }
    var_13 = (min(var_13, (((((!(~28))) ? ((var_8 * ((var_0 ? -24435 : -7709787236793940788)))) : ((((!(30720 || var_6))))))))));

    for (int i_2 = 3; i_2 < 18;i_2 += 1)
    {
        arr_8 [i_2] [i_2 + 3] = (arr_5 [i_2]);
        var_14 -= ((!((((arr_4 [i_2]) << (((-3057 % -3065) + 3067)))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_15 |= (((arr_4 [i_4]) ? ((min(((~(arr_10 [i_2] [13] [13]))), ((max((arr_12 [14] [i_2 + 3] [i_2 + 3] [i_2 + 3]), (arr_9 [i_2] [i_3] [i_4]))))))) : (((max(2147549194, 35523)) + ((((arr_6 [i_4]) - (arr_5 [i_3]))))))));
                    arr_14 [i_4] [i_3] [20] [i_2] = (((arr_10 [i_2 - 2] [i_2 - 2] [i_2 + 3]) ^ (((arr_10 [i_4] [i_2 - 1] [i_2 + 3]) ? (arr_5 [i_2 - 2]) : (arr_10 [i_2] [i_2 - 1] [i_2 + 3])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 4; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                {
                    var_16 = (min(((max((arr_17 [i_5 - 1]), 19157))), (((arr_17 [i_6]) ? (arr_15 [i_5]) : (arr_17 [i_7])))));

                    for (int i_8 = 0; i_8 < 23;i_8 += 1)
                    {

                        for (int i_9 = 0; i_9 < 23;i_9 += 1)
                        {
                            var_17 = ((((((!(arr_17 [i_5 - 1]))))) / (((arr_17 [i_5 - 1]) ? (arr_16 [i_5 - 1]) : 13817537544628403217))));
                            arr_30 [i_6 - 4] [i_7] |= -68;
                            var_18 = ((128 ? 1920 : (arr_25 [i_6 - 3] [i_5] [i_6 - 3] [8] [i_6 - 3])));
                            var_19 = (arr_18 [i_6]);
                        }
                        arr_31 [i_5] [i_5] [i_5] [i_7] [i_5] = (min((arr_15 [i_5]), ((~((~(arr_22 [i_6 - 1] [i_5])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
