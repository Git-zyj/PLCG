/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185803
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0 - 1] = 3271599927;
        arr_4 [i_0] = ((-((-((var_4 ? 2124553201 : (arr_2 [i_0] [i_0])))))));
        var_12 = (min(var_12, (((1 | (arr_1 [i_0 - 2] [i_0 - 2]))))));
        arr_5 [i_0 - 2] &= 4294967295;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = var_4;
        var_13 = (max(var_13, ((min((min((((287667426198290432 ? 102 : var_0))), (arr_8 [1]))), var_7)))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {

                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        arr_16 [18] [i_1] [i_3] [i_2] [i_1] [i_1] = ((min((arr_14 [i_4] [i_2 + 2]), (arr_13 [i_4 + 2] [i_1] [i_1] [i_2 + 2]))));
                        var_14 = (max(var_14, (((((min(0, ((var_9 ? (arr_8 [14]) : 2628285927508469202))))) ? (((153 ? 2124553213 : 17260772753259908094))) : ((max((4294967281 >= 2628285927508469202), ((~(arr_8 [1])))))))))));
                        var_15 = (var_11 ? var_8 : ((((arr_0 [i_1]) ? -29607 : (arr_2 [i_1] [i_2])))));
                        var_16 = var_6;
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_17 = (max(var_17, (arr_11 [i_1] [i_1])));
                        var_18 = (max(var_18, (arr_10 [i_1] [i_2])));
                        var_19 = (max(var_19, (~var_1)));
                    }
                    for (int i_6 = 3; i_6 < 15;i_6 += 1)
                    {
                        var_20 = (min(((var_1 ? (!2124553208) : ((16646144 ? -2124553214 : var_11)))), var_11));
                        var_21 = (min(var_21, (min(-2124553214, (max(-7, (arr_1 [i_3] [i_6])))))));
                        var_22 = (max(var_22, ((max((min(var_0, ((var_11 ? var_6 : var_9)))), 32510)))));
                    }
                    arr_21 [i_1] = ((((var_7 % (min((arr_2 [8] [i_3]), (arr_2 [i_1] [i_1]))))) ^ (((((arr_14 [i_1] [i_2 + 1]) && (arr_14 [i_1] [i_2 - 1])))))));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_25 [i_7] [i_7] = ((((((max(33025, var_6))))) ? ((((arr_7 [i_7]) ? 161 : (arr_7 [i_7])))) : (max(33006, (arr_13 [i_7] [i_7] [i_7] [i_7])))));
        var_23 = ((((((arr_7 [i_7]) ? var_9 : (arr_7 [i_7])))) ? (((!(((154 ? -3137359076305397648 : 182)))))) : (arr_17 [i_7] [11] [i_7] [i_7] [i_7])));
    }
    var_24 ^= 1761990645589376275;
    #pragma endscop
}
