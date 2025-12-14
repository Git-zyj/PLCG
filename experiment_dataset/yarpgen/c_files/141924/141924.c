/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_13 = (((((~(arr_0 [1]))) & ((((arr_2 [i_0 + 3]) > (arr_2 [i_0 + 3])))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 = (((min(((var_3 < (arr_5 [i_1] [i_1] [i_1])), ((!(arr_0 [19]))))))));
                            var_15 = min((((arr_3 [i_0 + 1]) - -32)), ((-(arr_3 [i_0 + 3]))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_16 = (((((((~(arr_23 [i_6] [i_5 - 1] [i_6] [i_6] [12]))) || (((-(arr_5 [i_5 - 1] [i_5 - 1] [i_6])))))))));
                                var_17 = (max(var_17, (arr_20 [2] [i_4 + 1] [i_6] [2] [16])));
                                arr_24 [i_6] [i_6] [10] [i_7] [18] [10] = 58;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        arr_27 [i_9] [i_6] [i_9] [i_5 - 1] [i_6] [i_6] = (min(62, ((((arr_20 [i_4 + 2] [i_5 - 2] [i_5 - 2] [i_9] [11]) <= -var_0)))));
                        arr_28 [i_6] [i_6] [i_6] [1] = ((((((arr_8 [i_4 - 1]) ? (arr_25 [i_4 + 4] [i_9] [11] [11] [i_6] [i_9]) : (arr_3 [i_6])))) ? (((((min(-24525, (arr_20 [i_4 + 4] [2] [0] [i_6] [i_9])))) + (arr_3 [i_4 - 1])))) : ((~(max((arr_18 [i_4 + 2] [i_5 - 1]), (arr_22 [17] [17] [17] [i_9] [i_9] [i_9] [1])))))));
                        var_18 &= ((+((((((arr_20 [16] [17] [6] [i_6] [i_9]) ? (arr_14 [i_4 + 1]) : (arr_9 [i_5] [i_9])))) / (((arr_22 [i_4 + 3] [i_5 + 1] [7] [i_5 - 1] [i_4 + 3] [i_6] [i_9]) ? (arr_5 [6] [i_6] [6]) : (arr_7 [i_5])))))));
                        var_19 = (arr_4 [i_4 + 2] [14] [i_6] [1]);
                    }
                }
            }
        }
        var_20 = (!var_8);
        var_21 = 8190;
    }
    #pragma endscop
}
