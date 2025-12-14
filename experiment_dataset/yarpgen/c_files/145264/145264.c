/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145264
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((!(arr_3 [i_2] [i_0])));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_11 = ((((arr_6 [i_0] [i_0] [i_0]) ? (arr_3 [i_2] [i_0]) : (arr_6 [i_0] [i_2] [i_0]))));
                        var_12 = (((arr_2 [i_3] [i_1] [i_0]) <= ((-(arr_6 [i_2] [i_1] [i_2])))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                arr_14 [i_4] [i_4] = (arr_11 [i_5]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_13 = ((~(arr_10 [i_4] [i_7])));
                            arr_20 [i_7] [i_4] [10] = ((((min((arr_9 [i_4] [3] [i_6]), (arr_11 [i_4 + 1])))) ? (((((arr_6 [i_4] [i_5] [i_6]) ^ (arr_2 [4] [11] [i_6]))))) : ((+(((arr_2 [i_5] [i_6] [i_7]) ? (arr_18 [i_4] [i_6 - 1] [i_5] [i_4]) : (arr_8 [i_4] [1] [i_4])))))));
                        }
                    }
                }
                arr_21 [i_4] [i_4] = (((arr_16 [i_4] [i_4] [i_5]) != ((((arr_2 [5] [i_5] [i_4]) | (((-(arr_19 [i_4] [i_4] [i_4] [i_5])))))))));
            }
        }
    }
    var_14 = ((1 >> (248 - 222)));
    var_15 = (max(var_3, var_9));
    var_16 = (((((-((var_4 ? var_8 : var_4))))) ? (((((max(-8196621428331490169, 1))) ? var_7 : var_3))) : (((((var_9 ? var_7 : var_0))) ? (var_8 * var_9) : (((var_1 ? var_7 : var_4)))))));
    #pragma endscop
}
