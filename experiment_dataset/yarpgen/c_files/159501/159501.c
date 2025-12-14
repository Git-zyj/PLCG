/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 *= (!-1);
                    var_16 = (min(var_16, (((11024368251095810248 ? 1 : 1)))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_17 *= (((((((((arr_13 [i_0 - 1] [i_2] [i_2] [1] [i_2]) ^ var_2))) && ((min(1, 243)))))) * (((!((((arr_0 [i_2]) ? (arr_0 [i_0]) : (arr_5 [i_3] [i_4])))))))));
                                var_18 = (max(var_18, ((((((((3942913597 << (-1 + 3)))) ? var_11 : (arr_8 [i_0 - 1])))) ? -423 : ((((arr_4 [i_0] [i_0]) == var_3)))))));
                                var_19 = (max(var_19, (((min(var_1, var_10))))));
                                arr_15 [i_0] [i_1] [i_4] [i_1] [i_3] [i_4] = (min(((-(arr_10 [i_0 - 1] [13] [i_2]))), ((-((min(252, var_14)))))));
                                var_20 = max((arr_4 [i_2] [i_0]), ((((!(arr_6 [i_0 - 1] [i_0 - 1] [i_0]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 14;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((arr_20 [i_0 - 1] [i_1 - 2] [i_1 + 3] [i_2] [i_5 + 1] [i_6 + 4]) ? (((((min((arr_12 [i_0] [i_1 + 3] [i_2] [8] [i_6 + 1]), 1))) != (arr_5 [i_2] [i_6 - 1])))) : (arr_13 [i_5 + 1] [i_2] [i_6 + 4] [i_1 + 1] [i_2])))));
                                arr_21 [i_0 - 1] [i_1] [i_0 - 1] [i_5 + 1] [i_6] [i_6] [i_6 + 1] = (-1 != 0);
                                var_22 = (((var_3 * (arr_16 [i_6] [i_6] [i_6 + 3] [i_6 - 1] [8]))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 4; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 3; i_10 < 23;i_10 += 1)
                    {
                        {
                            arr_35 [i_7] [i_7] [i_9] [i_10] = (((max(((var_3 % (arr_23 [i_7 - 2]))), (!var_3))) >= ((((((arr_32 [i_7]) ^ var_2)) < var_13)))));
                            var_23 = (((min((((var_3 || (arr_23 [i_10])))), (min(var_3, var_10))))) / ((min((((var_4 != (arr_31 [i_7] [i_8] [i_10])))), (min(var_1, var_13))))));
                            arr_36 [i_10 - 2] [i_8] [i_7 + 1] = (arr_25 [i_7 - 1]);
                        }
                    }
                }
                var_24 &= (arr_27 [i_7 - 1] [i_8]);
            }
        }
    }
    #pragma endscop
}
