/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = ((((max((((arr_2 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0]))), (arr_2 [i_0])))) ? (((!((max((arr_0 [i_0]), (arr_0 [i_0]))))))) : (((!((((arr_0 [i_0]) ? (arr_2 [i_0]) : (arr_3 [5])))))))));
        var_12 = ((-(((arr_0 [i_0]) ? (arr_3 [i_0]) : -4230433794811284694))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 = (((!((max((arr_6 [i_1]), (arr_6 [i_1])))))) ? (arr_4 [i_1]) : ((~(arr_5 [i_1] [i_1]))));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_14 = (((((((((var_2 + 9223372036854775807) << 1))) ? ((min((arr_11 [i_1] [i_1] [i_1] [i_1]), 1))) : (max(6688077050954543703, (arr_8 [i_2] [i_2] [i_2])))))) ? (arr_10 [i_2] [i_2] [i_1] [i_2]) : ((min(((var_8 ? (arr_5 [i_1] [i_1]) : var_3)), ((min((arr_5 [i_1] [i_2]), (arr_12 [i_3])))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            {
                                var_15 += (arr_14 [i_3] [i_3] [i_1] [i_4]);
                                var_16 = (max(var_16, (((170 ? 1 : 9149395114785782518)))));
                                var_17 ^= ((((min((arr_11 [i_1] [22] [i_5] [i_2 - 1]), (arr_5 [i_1] [i_1])))) ? var_5 : (arr_11 [i_1] [i_2] [i_3] [i_3])));
                            }
                        }
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 4; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 24;i_8 += 1)
                {
                    {
                        var_18 = ((((min(-4294967283, (arr_21 [i_1] [i_1] [i_1])))) ? ((((((arr_11 [i_8 - 1] [i_1] [i_1] [i_1]) ? (arr_17 [i_1] [i_6] [i_7 - 3] [i_1] [i_6]) : (arr_11 [i_1] [i_1] [i_7] [i_7])))) ? -1 : ((~(arr_14 [i_1] [i_1] [i_1] [i_1]))))) : ((((max((arr_10 [i_1] [i_1] [i_1] [i_8]), (arr_13 [i_1] [i_1] [i_1])))) ? (((arr_19 [i_1] [i_7 - 1] [i_7 - 3] [i_7 - 3] [i_1] [i_7] [i_1]) ? (arr_18 [13] [13] [13] [i_1] [i_8] [13] [i_1]) : (arr_21 [i_1] [i_1] [0]))) : (arr_12 [i_1])))));
                        var_19 = arr_14 [i_1] [i_7] [i_8] [i_8];
                    }
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = (min(var_21, var_9));
    var_22 = (!var_8);
    #pragma endscop
}
