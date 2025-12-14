/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 -= (max((arr_2 [i_2] [i_1]), ((((min((arr_5 [i_1] [i_1]), (arr_5 [i_0] [5]))) - (((max(0, 1)))))))));
                    arr_6 [i_1] = 977444290;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 = (arr_9 [i_0] [i_1] [i_2] [i_0]);
                                var_21 *= (((3380305480 + 3380305503) > ((((8869468303632161364 >= (((1 + (arr_1 [i_4]))))))))));
                            }
                        }
                    }
                    var_22 = (max((max(-1048814105783350990, 124)), (((!((max((arr_4 [i_0] [i_1] [i_2]), 94))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {

                for (int i_7 = 0; i_7 < 21;i_7 += 1)
                {
                    arr_19 [i_7] [i_5] [i_5] [i_5] = var_15;
                    var_23 = (arr_16 [i_7] [i_6] [i_5] [i_5]);
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_24 *= (min(-1048814105783350972, (((arr_14 [i_5] [i_8]) - (((52186 ? (arr_12 [i_6]) : var_13)))))));
                    arr_23 [i_5] [i_5] [i_5] [i_6] = (arr_13 [i_6] [i_8]);
                    arr_24 [i_5] [i_5] = max(((!(arr_17 [i_5] [i_5] [i_5] [i_5]))), (14930921637582271873 != 1));
                    arr_25 [i_8] [i_6] [i_5] = ((((((var_12 ? var_7 : 4294967295)))) && (arr_21 [i_5] [i_6] [i_8])));
                }
                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    arr_29 [i_6] [i_6] [i_6] |= (((((arr_28 [i_9 + 1] [i_9 + 1] [i_9]) ? (arr_17 [i_5] [i_5] [i_5] [i_5]) : 1)) | var_12));
                    arr_30 [i_9 + 1] [i_5] [i_5] [i_5] = (((((((1 ? (arr_21 [i_5] [i_6] [i_5]) : var_1))) ? ((max(var_17, (-127 - 1)))) : var_9)) % ((127 + ((-(arr_20 [i_9])))))));
                }
                /* vectorizable */
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_25 = ((-(arr_17 [i_5] [i_5] [i_5] [i_5])));
                    var_26 = (((arr_12 [i_5]) >= (((arr_33 [i_5] [i_5] [i_5]) ? var_8 : (-127 - 1)))));
                }
                arr_34 [i_5] [i_6] [i_6] = (min(1048814105783350974, -123));
                var_27 = (min(var_27, 139619044));
            }
        }
    }
    var_28 = ((((min(var_2, (max(var_18, -94))))) >> (var_8 - 6855336128340112614)));
    #pragma endscop
}
