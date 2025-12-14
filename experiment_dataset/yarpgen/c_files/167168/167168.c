/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_15 = (min(var_15, (((17 ? (arr_0 [16]) : (arr_2 [11]))))));
        arr_3 [0] = var_9;
        arr_4 [13] = ((var_2 ? var_11 : var_12));
        arr_5 [4] = ((!(arr_2 [i_0 + 2])));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {
        var_16 = ((((((max(131071, 217))) ? (arr_6 [8]) : ((var_4 ? (arr_2 [1]) : (arr_7 [1]))))) >> ((+(min((arr_0 [18]), 1))))));
        arr_8 [12] = (((max((min(-3605, 1)), (arr_2 [15])))) ? (arr_2 [13]) : (arr_6 [0]));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_17 = ((+((+(((arr_2 [12]) ? (arr_1 [2] [5]) : (arr_10 [4])))))));
        var_18 = 306991270;
        arr_11 [13] = var_9;
    }
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        arr_14 [0] = ((-(((arr_13 [i_3 - 1] [1]) ? (arr_13 [i_3 - 1] [4]) : (arr_13 [i_3 + 2] [4])))));
        var_19 = (min(var_19, (((1 ? 237 : 1)))));
        var_20 = (1 ? (((arr_1 [2] [i_3 + 2]) << (arr_2 [12]))) : 37);
    }
    var_21 = (min(1, 2232865411435197984));
    /* LoopNest 3 */
    for (int i_4 = 4; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                {
                    var_22 *= ((!(arr_16 [i_4 - 2])));
                    var_23 = var_1;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            {
                                arr_26 [1] [1] [7] [18] [1] [i_8] [12] = (arr_18 [i_4 + 1]);
                                var_24 = ((max(((-1617 ? 65535 : (arr_15 [16])), (arr_17 [i_4 - 1] [i_4 - 1])))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
