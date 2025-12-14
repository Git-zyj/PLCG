/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(min(var_2, ((var_7 ? 7923818013458661398 : var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [19] [i_1] [i_1] = var_1;
                arr_7 [i_0] [i_1] [i_1 - 2] = min(5738, ((~(((arr_1 [21] [i_1]) ? (arr_2 [i_0]) : var_4)))));
            }
        }
    }
    var_12 = (min((((var_2 ? var_3 : var_6))), (((!((min(var_8, 26580))))))));

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 3; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [i_3] [i_2] [i_2] [18] = ((((min(var_9, ((var_2 ? var_8 : (arr_0 [i_3] [i_4])))))) ? (min((arr_11 [i_3] [i_4] [i_3]), 112)) : ((~(((arr_8 [i_2]) >> (var_1 - 4034891607)))))));
                        arr_19 [i_2] = ((+(((~17898573454976548519) ? (((var_1 & (arr_14 [i_5] [i_2] [i_3] [i_5])))) : ((59797 ^ (arr_13 [i_2] [i_4] [i_2])))))));
                        var_13 -= (max((((0 || (((102 ? var_2 : 5762)))))), (((!10542355319361917845) << (((((arr_11 [3] [i_3] [i_3]) ? 7923818013458661399 : var_4)) - 7923818013458661377))))));
                        var_14 = (~10626138);
                    }
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_23 [i_2] = (((((arr_16 [i_2] [i_6] [18] [i_2]) - (arr_20 [i_2] [i_2] [20]))) + var_4));
            arr_24 [i_6] [i_2] [i_2] = (((((var_9 & (arr_20 [i_2] [i_2] [12])))) ? (!var_8) : ((-(arr_11 [i_2] [13] [i_6])))));
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_29 [i_7] = (((((((arr_13 [i_7] [i_7] [i_7]) ? (arr_9 [i_7] [i_7]) : (arr_17 [19] [i_7] [i_7]))))) ? (((-10522926060250890226 ? ((~(arr_17 [i_7] [i_7] [i_7]))) : var_0))) : ((min(var_8, 3)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 14;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 14;i_11 += 1)
                        {
                            {
                                arr_44 [i_11] [i_7] [0] [i_7] [i_7] = (arr_14 [1] [i_8] [i_8] [i_11]);
                                arr_45 [i_9] [i_7] [i_9] [i_9] [i_9] [i_9] [i_9] = (((arr_17 [i_7] [i_8] [i_7]) & (min((arr_27 [i_11]), (arr_27 [i_9])))));
                                var_15 = ((((((((var_2 ? (arr_9 [16] [i_7]) : (arr_39 [i_7])))) ? (max(var_3, var_1)) : (!var_9)))) ? (((((646300651 ? 17887725768562958786 : 53254))) ? (arr_21 [i_11]) : (!var_10))) : ((max(var_10, (arr_28 [i_7]))))));
                                arr_46 [i_7] [i_8] [i_9] [i_7] [13] [i_11] = ((((max((arr_21 [i_10]), -8574024101294481087)) <= (min(1978064903, (arr_17 [i_10] [i_9] [22]))))));
                            }
                        }
                    }
                    arr_47 [i_7] [8] = -var_6;
                }
            }
        }
    }
    var_16 = (min(var_2, ((-8574024101294481109 ? ((var_9 ? var_3 : var_5)) : var_3))));
    #pragma endscop
}
