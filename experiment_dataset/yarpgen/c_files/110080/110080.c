/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (min(var_17, ((((11439699627667257703 ? var_4 : -1586390619))))));
                        var_18 -= (arr_8 [i_1] [i_1] [i_1] [i_1 + 2]);
                        var_19 = (max(var_19, ((((arr_1 [i_1 - 2]) + 11439699627667257703)))));
                        var_20 = (arr_1 [i_1 + 2]);
                    }
                }
            }
        }
        arr_9 [i_0] [i_0] = (arr_5 [i_0] [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_24 [i_4] [i_8] [i_4] [i_7] = (((arr_15 [i_7]) & (((((arr_8 [i_4] [i_5] [i_7] [i_5]) != var_1))))));
                                var_21 ^= (((arr_8 [i_4] [i_4] [i_6] [i_8]) ? (arr_6 [i_8] [i_8] [i_8]) : -1586390631));
                                arr_25 [i_6] [i_8] = var_7;
                            }
                        }
                    }
                    var_22 = (min(var_22, (arr_8 [i_4] [1] [i_5] [i_6])));
                    var_23 = (6618182130477266878 != 768387551);
                    var_24 |= ((var_12 << (((arr_21 [i_4] [i_6] [i_6] [i_4] [i_5] [i_6]) - 3011260888))));
                }
            }
        }
        var_25 = 768387549;
    }
    var_26 = 268435440;
    var_27 = -8276;
    #pragma endscop
}
