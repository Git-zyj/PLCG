/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = -165;

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_0] = ((60 ? ((~((~(arr_6 [i_3] [i_1] [i_1]))))) : ((min((arr_0 [i_0] [i_0]), (!var_1))))));
                        var_12 = (min(var_12, (17692557939295222735 == 36)));
                    }
                }
            }
        }
        arr_15 [i_0] [i_0] = (((max(8910, (((arr_11 [i_0] [1] [i_0 - 1] [1]) * (arr_7 [i_0] [i_0] [i_0]))))) == (((((var_9 ? (arr_5 [i_0]) : (arr_13 [i_0] [i_0] [i_0] [8]))) != (((65535 ? var_2 : -1471927176))))))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_5 = 1; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_24 [i_4] [i_4] [i_6] = ((~(arr_18 [i_4] [i_4])));
                    var_13 = (arr_2 [i_4]);
                }
            }
        }
        var_14 = ((!(arr_20 [i_4 + 2])));
    }
    #pragma endscop
}
