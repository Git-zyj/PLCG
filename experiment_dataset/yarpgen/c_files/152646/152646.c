/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_13 = ((((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_2 [i_0])))) ? (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))) : (arr_0 [i_0]))) | (arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 ^= (((!(1 >> 1))) ? 1199657996822994649 : 1199657996822994649);
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_0] = ((+(((((arr_6 [i_0] [i_1] [i_2] [i_3]) ? (arr_4 [i_0] [i_1]) : (arr_5 [i_0 + 1] [i_2 + 2])))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 4; i_4 < 19;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = ((arr_12 [i_4]) >= (((arr_11 [i_4]) & (((arr_11 [i_4]) & (arr_12 [i_4 - 4]))))));
        var_15 = (((((((((arr_11 [i_4]) & (arr_11 [i_4])))) ? ((~(arr_11 [i_4]))) : ((~(arr_11 [i_4])))))) ? (((((arr_12 [i_4]) ? (arr_12 [i_4 - 4]) : (arr_12 [i_4]))))) : (arr_12 [i_4])));
        var_16 += (((((-(arr_12 [i_4])))) ? (min((arr_12 [i_4]), (max((arr_11 [10]), (arr_11 [16]))))) : ((((((arr_11 [0]) ? (arr_11 [1]) : (arr_12 [i_4])))) ? (max((arr_11 [18]), (arr_11 [4]))) : (max((arr_11 [2]), (arr_12 [i_4])))))));
        arr_14 [i_4] = ((12987 ? 14747101564415589188 : 1));
    }
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_17 -= (arr_12 [i_5]);
        arr_18 [i_5] = ((((arr_12 [i_5]) - (arr_15 [i_5]))));
    }
    #pragma endscop
}
