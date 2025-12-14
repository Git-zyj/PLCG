/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_13 &= (((((~((var_3 ? 4908 : (arr_2 [i_0] [i_1])))))) < (min((arr_0 [i_0 + 1]), ((~(arr_3 [i_0 + 1] [i_1] [i_1])))))));
                var_14 = max((min(1, 10515718719903475073)), (min((((1 - (arr_0 [i_1])))), (min((arr_1 [i_0] [i_0 - 1]), var_8)))));
            }
        }
    }
    var_15 = ((1 ? (var_1 <= var_2) : (((~var_10) / var_2))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_8 [0] &= (min((min((min((arr_5 [i_2]), var_1)), var_0)), (((((1 ? (arr_7 [9] [i_2] [i_2]) : var_7)) << ((((-(arr_1 [i_2] [i_3]))) - 11256750467053124412)))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        {
                            arr_13 [i_5] [i_2] [i_5] [i_5] = ((~(((((var_10 ? 1 : 1))) ? var_4 : (min(var_7, (arr_0 [i_5])))))));
                            arr_14 [i_5] [i_3] [i_5] &= (((min((min(5151435699805682569, (arr_10 [i_4] [i_3] [i_4] [i_5]))), (!9384))) <= ((max(((var_3 ? 1 : 1)), (arr_12 [i_2] [i_2]))))));

                            for (int i_6 = 0; i_6 < 17;i_6 += 1)
                            {
                                arr_19 [i_2] [i_2] [i_2] [i_2] = min(((1 ? (((arr_11 [i_5] [i_3] [i_3]) ? 15787757381515958475 : (arr_10 [i_6] [i_3] [i_3] [5]))) : (((var_7 - (arr_2 [i_2] [i_2])))))), (arr_1 [i_5] [i_2]));
                                var_16 = ((((((arr_15 [i_4] [i_3] [i_4] [i_6] [i_6] [i_3] [i_3]) - (arr_5 [i_2])))) || ((!(arr_5 [i_2])))));
                                var_17 = min(var_5, ((((arr_18 [i_4] [i_5] [i_4] [i_5] [i_6]) | (arr_11 [i_2] [i_2] [i_2])))));
                                var_18 = (((arr_7 [i_2] [i_3] [i_4]) ? (arr_11 [i_2] [i_2] [i_2]) : ((~((var_0 & (arr_18 [i_6] [i_5] [i_4] [i_3] [i_2])))))));
                                var_19 = (max(var_19, (((((var_6 & (((var_11 <= (arr_4 [i_2])))))) / (((((~(arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [4]))) >= (1 || 1)))))))));
                            }
                            for (int i_7 = 0; i_7 < 0;i_7 += 1)
                            {
                                arr_22 [i_2] [4] [i_3] [i_4] [i_5] [i_5] [i_7] &= ((((var_2 ? ((1 & (arr_21 [i_2] [i_3] [i_4] [i_5] [i_4] [i_7 + 1]))) : (arr_7 [i_2] [i_3] [i_7])))) <= var_2);
                                var_20 = (max((max((arr_11 [i_7 + 1] [i_5] [i_3]), (arr_11 [i_3] [i_4] [i_5]))), (max((arr_11 [i_5] [i_4] [i_2]), (arr_11 [i_2] [i_2] [i_2])))));
                            }
                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                arr_25 [i_2] = ((!(arr_10 [i_4] [i_3] [7] [i_3])));
                                var_21 = var_0;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
