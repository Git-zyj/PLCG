/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143862
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(-var_8, -5601));
    var_20 = (min((((~((max(-17155, 110)))))), (max(var_6, ((max(43200, 1433192313)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((-(!-22876)));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 = ((~((-(arr_1 [i_2])))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] = ((-(((!(arr_2 [i_0 + 2] [i_0]))))));
                    }
                }
            }
        }
        var_22 = (!var_0);
        var_23 = ((-(~32746)));
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_24 = (max(((-(max(var_13, (arr_1 [i_4]))))), ((max((!-22876), (!-22876))))));
        arr_15 [i_4] = (max((min((max(22876, (arr_10 [16] [i_4] [i_4 - 1] [i_4] [3]))), (arr_14 [13] [i_4]))), (((!(!1732829674))))));
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_25 |= (min(1146760085, 2562137621));
                    arr_22 [i_4 - 1] [10] |= (max((max((min(var_10, 0)), var_1)), ((-(min(var_10, var_17))))));
                    arr_23 [i_4] [9] [i_6] = ((-(max(-var_5, -1757240844))));
                }
            }
        }
        var_26 |= ((+((+(min((arr_10 [4] [11] [i_4] [i_4] [1]), var_6))))));
    }
    for (int i_7 = 0; i_7 < 0;i_7 += 1)
    {
        arr_27 [i_7] = ((!((max(1732829657, (min((arr_24 [i_7 + 1]), (arr_26 [i_7] [2]))))))));
        var_27 = (min(var_27, ((min((((!((min(7189, -21006)))))), (max((min((arr_24 [i_7 + 1]), var_3)), (max((arr_24 [i_7]), var_15)))))))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 15;i_8 += 1)
    {
        var_28 = (-((-(arr_29 [i_8 - 1] [i_8]))));
        arr_31 [i_8] = ((-((~(arr_26 [9] [i_8])))));
        var_29 = (~1146760085);
        arr_32 [13] = ((!(~var_7)));
    }
    #pragma endscop
}
