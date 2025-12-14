/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1 - 1] [i_1 - 1] [i_1 - 1] = ((+((((arr_1 [i_1 - 1] [i_1 - 1]) != (arr_1 [i_1 - 1] [i_1 + 1]))))));
                    arr_8 [i_0] [i_1] [i_0] [3] = (max((arr_4 [i_1 - 1]), (arr_6 [i_0] [i_1] [i_2])));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] = ((-((((((arr_2 [i_0]) ? (arr_5 [i_1] [i_1] [4]) : (arr_1 [i_0] [i_0])))) ? (arr_2 [i_1 - 1]) : (arr_9 [i_0] [i_0] [i_1] [i_3])))));
                        var_11 = arr_4 [i_1 + 1];
                        var_12 = (max(var_12, (arr_10 [i_0])));
                        var_13 += (((((arr_1 [i_0] [i_1 + 1]) & (arr_1 [i_1 - 1] [i_3]))) * (((arr_1 [i_0] [i_0]) / var_7))));
                    }
                }
            }
        }
    }

    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_14 = (min(var_14, ((max((arr_9 [i_4] [i_4] [i_4] [10]), -var_2)))));
        var_15 = ((((arr_3 [i_4] [i_4] [i_4]) >> (((!(arr_12 [i_4])))))));
        var_16 = (arr_9 [i_4] [i_4] [i_4] [i_4]);
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            {
                var_17 ^= (arr_2 [i_5]);
                arr_19 [i_5] [i_6] = ((((((arr_12 [i_5]) || (arr_13 [i_5]))) ? (arr_12 [i_6]) : (arr_13 [i_6]))));
            }
        }
    }
    #pragma endscop
}
