/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    var_13 *= ((var_6 ? (((min(-1, var_5))) : 2350706394)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_14 = (min((((var_1 >= (arr_8 [17])))), ((((var_0 ? (arr_3 [i_2]) : (arr_5 [i_0]))) / (arr_6 [i_2] [i_0 - 1] [i_2] [i_1 + 3])))));
                            var_15 = ((((((((arr_7 [i_0] [11] [11] [i_3 + 2] [i_3 + 2] [i_2]) ? var_10 : 511))) ? ((628552460 ? 1020959522 : 16383)) : (var_6 + -30471)))) ? (((arr_5 [i_0]) ? (arr_5 [i_0 + 2]) : (arr_5 [i_0]))) : var_3);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            var_16 = (arr_2 [i_0 - 1] [i_0 - 1]);
                            var_17 = (arr_3 [i_0]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            var_18 = (max((((arr_19 [i_0 - 2] [i_0] [i_0 - 2] [i_1 + 2] [i_7]) / -1)), ((((max(var_5, -14947))) ? (arr_7 [i_0 + 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]) : (max((arr_17 [i_0] [0] [i_7]), 537))))));
                            var_19 *= (arr_8 [i_1 + 1]);
                            var_20 = (arr_10 [23] [i_1] [13] [i_7]);
                            var_21 += ((140 ? ((max((arr_17 [i_6] [i_0] [i_6]), (arr_19 [i_0] [i_0] [i_0 + 2] [i_0] [i_0 - 1])))) : ((1306 * (arr_13 [i_1 + 3] [i_6])))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 3; i_8 < 11;i_8 += 1)
    {
        for (int i_9 = 3; i_9 < 12;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_22 = ((3421638497 >= ((((var_0 == 134217727) << (2721377062 - 2721377056))))));
                    arr_27 [i_8] [i_8] [i_8] = var_11;
                    arr_28 [i_8] = ((-(min((arr_21 [i_8 - 3] [i_8 + 1]), 1))));
                }
            }
        }
    }
    #pragma endscop
}
