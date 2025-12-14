/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((min((arr_2 [i_1] [i_0 - 2]), (((!(arr_2 [i_1] [i_0])))))));
                var_20 = (arr_0 [i_0]);
                arr_6 [i_1] = (((((-(arr_2 [i_0 + 1] [i_0 - 1])))) ? (arr_2 [i_0 + 1] [i_0 - 1]) : var_4));
            }
        }
    }
    var_21 = var_7;
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {
                    var_22 = ((var_2 ? (((arr_7 [i_2] [i_2 - 1]) / (arr_7 [i_2] [i_2 + 1]))) : (min(-1964576556, (arr_7 [i_3] [i_2 + 2])))));
                    var_23 = (min(var_23, ((((arr_8 [i_3]) ? (min((((arr_4 [i_4] [i_2 - 2] [i_2 - 2]) ? (arr_1 [i_2 - 2] [i_2 - 2]) : (arr_12 [i_2 - 1] [i_2] [i_2]))), (!var_5))) : (-1964576569 > 1964576568))))));
                    arr_13 [i_3] [i_3] [i_2] [i_3] = ((~((~((((arr_3 [i_2] [i_2] [i_4]) < -1964576552)))))));
                    var_24 = (arr_4 [i_2] [i_2] [i_4]);
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                var_25 = (((arr_16 [i_2] [i_2] [i_2] [i_2 - 1] [i_2]) ? ((min(1964576593, 1964576588))) : (min((min((arr_3 [i_2] [i_3] [i_5]), (arr_9 [i_4] [i_3]))), ((max(var_19, -1964576556)))))));
                                var_26 *= arr_12 [i_4] [i_5 + 3] [i_5];
                                arr_18 [i_2] [i_3] [i_4] [i_5] [i_3] = (max(((((!-1964576592) && ((-1964576579 && (arr_2 [i_2 + 1] [i_2 + 1])))))), 1964576526));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
