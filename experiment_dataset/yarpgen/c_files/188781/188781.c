/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 7;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((arr_4 [i_2 + 2]) ? (arr_4 [i_2 + 4]) : (arr_4 [i_2 + 3]))))));
                                var_21 = (((-(arr_9 [i_2 + 3] [i_3 + 1] [i_3 + 2] [3]))));
                                var_22 ^= ((-((~((min(5581, (arr_12 [i_0] [i_0] [i_1] [i_2 + 1] [i_0]))))))));
                                var_23 *= (((var_17 ? (min(var_19, var_2) : 40))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_24 &= (((((-85 ? ((min(var_14, -5567))) : (arr_5 [5] [5])))) ? (min(1102852667, ((var_18 ? var_1 : (arr_9 [9] [i_0] [0] [i_0]))))) : (arr_14 [7] [1] [i_5] [7] [i_1] [3])));
                                var_25 *= (arr_10 [i_0] [i_1] [i_2 + 1] [5] [i_6]);
                                var_26 = (min(((min((arr_11 [i_6] [i_5] [i_2 + 4] [i_1] [i_0]), (arr_11 [i_0] [9] [i_0] [i_5] [i_6 + 2])))), -var_18));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 4; i_9 < 16;i_9 += 1)
            {
                {
                    var_27 = (((((-(arr_27 [i_9 + 2] [i_7] [i_8])))) <= (min(8953368980939701935, (arr_27 [i_9 + 2] [i_7] [i_7])))));
                    var_28 = (((((arr_21 [i_7] [i_7]) <= (arr_23 [i_9 + 2]))) ? ((((arr_23 [i_7]) ? (arr_27 [i_7] [i_7] [i_7]) : var_5))) : (~1)));
                    arr_28 [i_7] [i_8] [i_7] = ((!(((((-5556 > (arr_25 [i_9] [i_7] [i_7] [12])))) > var_17))));
                }
            }
        }
    }
    #pragma endscop
}
