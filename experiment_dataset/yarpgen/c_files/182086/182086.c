/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((15113811023215683274 + var_6) + (min(2741215274, 276865175720004770)))), (((var_4 ? ((var_4 ? 1526078051 : 162)) : ((127 ? var_2 : var_10)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_14 = ((((((1 ? var_4 : (arr_12 [22] [i_1] [22] [i_3] [23]))) + ((var_0 ? (arr_7 [i_0] [i_1] [i_2]) : var_2)))) + (1 + var_4)));
                                arr_14 [i_0] [i_1] [i_2] [i_3] [15] = (max((arr_1 [15] [i_4]), ((~(arr_8 [i_0] [i_1] [i_2] [17] [14])))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_15 = (((((1 ? 0 : var_8))) || (((((11342667028244729914 ? (arr_2 [i_1]) : var_7)) / (((var_5 || (arr_2 [i_1])))))))));
                                arr_21 [i_1] [i_5] [i_6] = 7275786488255376720;
                            }
                        }
                    }
                    arr_22 [i_1] [i_1] [5] = (((((562812514467840 ? 1 : 63))) ? ((((arr_11 [i_1] [i_1]) && (arr_11 [i_1] [i_1])))) : ((1 ? 192 : 1))));
                }
            }
        }
    }
    var_16 ^= var_4;
    var_17 = ((((1 ? ((2152109191781200411 ? 0 : 5)) : (var_11 * 29))) != (-32754 != 1)));
    #pragma endscop
}
