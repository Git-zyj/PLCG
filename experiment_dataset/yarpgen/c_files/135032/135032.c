/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((((~(arr_5 [i_1 + 2] [i_2 + 1])))) ? ((((arr_5 [i_1 - 2] [i_2 + 1]) >= (arr_5 [i_1 - 1] [i_2 + 1])))) : ((((arr_5 [i_1 + 1] [i_2 - 1]) < (arr_5 [i_1 + 1] [i_2 + 2])))))))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        /* vectorizable */
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            arr_16 [i_4] [i_3] [i_2] [i_2] [16] [16] = ((-((((arr_8 [i_0] [i_0]) == 146)))));
                            var_16 = (-(arr_6 [i_2]));
                        }
                        var_17 = (min(((max((arr_5 [i_1 - 1] [i_1 + 1]), (arr_5 [i_1 + 1] [i_1 - 1])))), (((arr_10 [i_2] [i_1 + 1] [i_1 + 1] [i_2]) / (arr_10 [i_2] [i_1 + 1] [15] [i_2])))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_18 -= ((118 <= 146) != (((arr_8 [i_1 + 1] [i_2 + 1]) >> (arr_8 [i_1 + 1] [i_2 + 1]))));
                        arr_19 [i_2] [i_1] [i_0] = ((1 - (arr_15 [10] [i_1] [i_5] [i_5] [i_0] [i_2 + 2] [i_5])));
                    }
                    for (int i_6 = 2; i_6 < 16;i_6 += 1)
                    {
                        var_19 = (max(var_19, ((((((((-(arr_9 [i_0] [16] [i_0] [i_0])))) ? (arr_4 [i_2] [i_2 - 1] [i_2]) : 141)) | (((arr_5 [i_2 + 1] [i_6 + 2]) ? (arr_12 [6] [i_6 - 2] [i_2 + 1] [i_1 + 1]) : (arr_12 [8] [i_6 + 1] [i_2 - 1] [i_1 + 2]))))))));
                        arr_22 [i_2] [i_2 - 1] [i_2] = ((((((~(arr_4 [i_2] [4] [1])))) != ((141 ? 185 : (arr_7 [i_2] [i_2] [6]))))) ? ((-(arr_7 [i_2] [i_2 + 1] [i_6 + 1]))) : ((((arr_2 [i_6 + 2]) ? (min((arr_1 [i_0] [i_0]), 134)) : (arr_15 [i_0] [i_1] [i_1 + 2] [i_2 - 1] [i_2] [1] [1])))));
                    }
                }
            }
        }
    }
    var_20 *= var_13;
    var_21 &= var_1;
    var_22 = var_2;
    #pragma endscop
}
