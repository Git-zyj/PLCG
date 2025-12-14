/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_16 |= ((((4188126627 + (arr_0 [i_0 - 1]))) != 4188126637));
        var_17 = ((((min(0, (arr_0 [i_0 - 1])))) ? (~var_3) : (arr_1 [i_0 - 1])));
        arr_2 [i_0] = ((-((-(arr_0 [i_0 - 1])))));
        var_18 = 18014329790005248;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        var_19 = var_12;
                        var_20 = ((8328 ? 4099191366 : 106840659));
                        var_21 = (min(var_21, var_15));
                        var_22 = (max(var_22, ((min(8191, (arr_3 [i_1]))))));
                        var_23 = (max(var_23, ((min((((((-(arr_7 [i_0] [i_0] [i_2] [i_2]))) != (arr_10 [i_3 - 1] [i_3 - 2] [i_3 - 1] [i_3])))), (arr_8 [i_0 - 1] [i_0] [i_0 - 1] [i_3 - 2]))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 13;i_4 += 1)
    {
        var_24 = (min(var_24, 106840660));
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    {
                        var_25 = (((((195775949 + ((var_10 ? -4993227816097777225 : var_14))))) ? ((-((0 ? 12 : var_13)))) : (((arr_16 [11] [i_7]) ? (((-127 - 1) ? var_13 : 512)) : (!var_6)))));
                        var_26 = (((-(arr_14 [i_4] [i_4] [i_4 - 2]))));
                        arr_19 [i_4] [i_5] [i_4] [i_7] = (((arr_16 [i_4 - 1] [i_7 + 1]) | ((min(-42, var_2)))));
                    }
                }
            }
        }
        arr_20 [i_4] = (arr_18 [i_4 + 1] [6]);
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 15;i_10 += 1)
                {
                    {
                        var_27 = (max(var_27, ((((((min(var_14, var_9)) != (arr_23 [i_4 + 2] [i_8 + 1] [i_10]))) ? (arr_17 [i_4] [4] [i_9] [i_10] [i_10]) : (min(((min(106840660, 50556))), (arr_16 [9] [10]))))))));
                        var_28 = ((-(((arr_29 [i_8 + 2] [i_9 + 1] [i_9]) / (var_14 - var_7)))));
                    }
                }
            }
        }
    }
    var_29 = (max(var_29, (((((-1 ? var_8 : 16158679145680794460)) & ((((!((max(var_3, var_3))))))))))));
    #pragma endscop
}
