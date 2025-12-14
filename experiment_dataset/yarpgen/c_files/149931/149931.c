/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (13479 & 240);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0 - 1] [i_0 - 1] = 9649;
        var_17 = (((arr_0 [i_0 - 1]) | (896 & -1925872067)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_18 = (max(var_18, 255));
        var_19 = ((((max(((896 ? (arr_3 [i_1]) : var_5)), (arr_1 [i_1] [19])))) ? ((min(((906 ? 0 : 55)), (arr_3 [i_1])))) : (min((min((arr_4 [i_1]), 1428662646)), (arr_1 [i_1] [i_1])))));
        arr_7 [i_1] = (((((+(((arr_3 [i_1]) * 0))))) || (((((arr_3 [i_1]) ? (arr_6 [i_1]) : -23353))))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_10 [i_2] = min((min(var_8, 1)), ((((arr_0 [i_2]) != var_6))));
        var_20 = 2866304649;
        var_21 = ((~-14397) >= (((((arr_5 [i_2] [5]) + var_7)) | (((((arr_0 [i_2]) >= (arr_6 [i_2]))))))));
        var_22 = ((var_2 >= ((var_1 << ((((arr_4 [1]) > 149)))))));
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_23 = (arr_0 [i_3]);
                                arr_23 [i_7] [i_4] [i_4] [i_6 - 1] [i_7] = ((~(!1)));
                                arr_24 [i_4] [i_3] [i_4] [i_5] [i_6] [i_7] [i_7] = -55;
                                arr_25 [i_3] [i_4] [i_5] [i_3] [i_7] = ((889 ? ((10009 << (55 - 38))) : ((max(var_9, 1)))));
                            }
                        }
                    }
                    var_24 = ((10009 ? (arr_19 [i_5] [i_5] [i_4] [i_4] [i_4] [i_3]) : (-2006701187 > 0)));

                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_25 = (((arr_1 [i_3] [i_4]) ? (((max((arr_1 [i_8] [i_4]), var_9)))) : (arr_1 [i_3] [i_4])));
                        var_26 = ((min(((var_2 ? var_0 : (arr_13 [i_4]))), (!var_11))));
                        arr_29 [i_4] [i_5] [i_5] [i_4] [i_4] = ((var_14 << (9993 - 9976)));
                    }
                    arr_30 [i_4] = (max(((((arr_22 [i_4] [i_4]) ? 31 : -18498))), (((arr_22 [i_4] [i_4]) ? (arr_22 [i_4] [7]) : var_1))));
                }
            }
        }
    }
    var_27 = var_12;
    #pragma endscop
}
