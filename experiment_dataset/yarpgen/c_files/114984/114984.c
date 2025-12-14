/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114984
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((min(var_2, var_7))) ? var_9 : var_9)) / ((min(1, (min(-3475, var_3)))))));
    var_11 ^= ((!(((-((min(var_1, var_2))))))));

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_12 = (arr_3 [12]);
        arr_4 [i_0] = ((((max((-1131581174286297212 && 248), (arr_1 [i_0])))) && ((!((!(arr_0 [i_0] [i_0])))))));
        var_13 = (arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_14 = ((!((((((arr_9 [i_0] [i_0] [7] [i_4]) ? (arr_0 [i_0] [i_4]) : var_8))) > (min(1, 6768580088343593823))))));
                                var_15 = ((+(min((arr_6 [i_0]), var_1))));
                                var_16 = (min(var_16, (((((-(arr_0 [i_4] [4]))) << (((((arr_12 [1] [i_2] [i_2] [i_4]) ^ ((~(arr_13 [i_0] [3] [i_2] [i_3] [1]))))) - 77)))))));
                            }
                        }
                    }
                    var_17 = (max((((arr_5 [i_0 - 2] [i_0 - 3]) ? (arr_5 [i_0 - 3] [i_0 - 2]) : (arr_5 [i_0 + 1] [i_0 + 1]))), ((min((arr_5 [i_0 + 1] [i_0 - 2]), (arr_5 [i_0 - 1] [i_0 - 1]))))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_19 [i_5] = ((((min((((65527 >= (arr_18 [i_5])))), (min((arr_17 [i_5] [i_5]), var_7))))) ? ((((~var_4) ? ((min((arr_16 [i_5] [i_5]), (arr_15 [i_5] [i_5])))) : (!var_7)))) : ((~(max((arr_16 [i_5] [i_5]), -5533042642636339649))))));
        var_18 = (max(var_18, (((((-71 | (arr_15 [0] [0]))) & ((42 & (arr_15 [1] [i_5]))))))));
        arr_20 [i_5] = var_9;
        var_19 = ((((((arr_16 [i_5] [i_5]) % (arr_16 [i_5] [i_5])))) ? (39808 >= var_1) : (((!(~var_3))))));
    }
    #pragma endscop
}
