/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_8;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_11 = (min(var_11, (((~((var_4 ? ((var_9 ? 1 : var_1)) : var_2)))))));
        var_12 *= (min((arr_1 [i_0] [i_0]), (arr_0 [1])));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_13 = 4080;
        var_14 += (min((((arr_4 [i_1]) ? 2251799813668864 : (arr_4 [i_1]))), ((min((arr_4 [i_1]), (arr_4 [i_1]))))));
    }
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 9;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_15 -= (arr_8 [i_3]);
                                arr_15 [i_4] [i_5] [i_4] [2] [i_3] [i_4] = (((arr_8 [i_2]) ? ((var_9 ? ((min((arr_7 [i_2]), var_3))) : var_7)) : (arr_8 [3])));
                                var_16 = -2465216696295191146;
                            }
                        }
                    }
                    arr_16 [i_2] [i_3] [2] &= ((((max(2465216696295191113, var_8))) ? (min((max(-17811, var_9)), (min((arr_5 [i_2]), 2465216696295191146)))) : ((min((((var_6 ? 0 : 0))), var_4)))));
                    var_17 = (min(((max((((arr_10 [i_2 + 2]) ? (arr_7 [6]) : var_7)), (95 - var_2)))), (((arr_7 [i_3 + 2]) ? (arr_8 [4]) : (min(var_0, var_8))))));
                    arr_17 [i_4] [i_4] = ((-1412086779 ? -2465216696295191146 : 16));
                }
            }
        }
    }
    #pragma endscop
}
