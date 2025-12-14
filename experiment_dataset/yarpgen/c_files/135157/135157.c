/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 = (((arr_1 [i_0] [i_0]) ? ((-(((arr_1 [4] [i_0]) - (arr_0 [i_0]))))) : ((((!(127 <= var_10)))))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((((((var_2 ? var_5 : var_9)) + (-32767 - 1)))) ? var_3 : ((((arr_2 [i_0] [i_0] [i_2]) ? (arr_2 [i_0] [i_0] [i_2]) : 3007568521)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = ((((min((arr_3 [i_0] [i_0] [i_1]), (arr_3 [i_0] [i_4] [i_4])))) / (min(((1 ? var_11 : var_2)), var_6))));
                                var_15 &= 255;
                                var_16 = (((64 ? 16373176235825700925 : (1 == 13334))));
                                var_17 = (max(var_17, (((48 ? -12 : 1)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [2] [i_1 - 1] [i_0] [i_5] [i_1 - 1] = ((-(min(((min(20336, 0))), (((arr_1 [i_0] [i_1]) ? 16373176235825700925 : 3))))));
                                var_18 = (min(((((arr_13 [i_6] [i_5] [i_1] [i_1 - 2]) * (!var_3)))), (min(((0 ? 16373176235825700925 : 3675844332)), ((max(182, var_9)))))));
                                var_19 *= ((-(min(441796714, var_3))));
                            }
                        }
                    }
                    var_20 = max(13596772126911566132, 1);
                    var_21 ^= var_6;
                }
            }
        }
        var_22 *= (1 + 1);
        var_23 *= (max(51, (((1 * 51) ? 9824 : ((var_5 ? 1 : var_9))))));
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1)
    {
        arr_21 [i_7] = (!2073567837883850691);
        arr_22 [i_7] [i_7] = ((1 ? 1 : ((max(var_5, (arr_19 [i_7]))))));
        arr_23 [20] [i_7] = (106 + -12819);
    }
    var_24 &= (~-14);
    #pragma endscop
}
