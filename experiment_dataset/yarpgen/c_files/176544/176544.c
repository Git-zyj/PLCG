/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = var_3;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = 1;
                                var_19 = (min(var_19, (arr_9 [0] [0] [0] [i_3] [i_3] [i_3])));
                                arr_15 [i_0] [i_0] [i_2] [2] [i_2] = 1;
                                var_20 = -1630452354809688490;
                                var_21 = ((-(arr_6 [i_0] [i_1])));
                            }
                        }
                    }
                }
                arr_16 [i_0] [2] [i_0] = (min((arr_12 [i_0 - 1] [i_0 + 1] [8] [8] [i_0]), (((var_3 ? 135107988821114880 : var_4)))));
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        var_22 = ((~(13460144174542498585 | 44485)));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        var_23 += var_14;
                        var_24 ^= ((((1 ? var_1 : 14335))) == (arr_24 [i_5] [i_5] [1] [i_5] [4] [12]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
