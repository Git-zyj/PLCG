/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((min((!var_10), ((var_8 ? 1909607895 : 9223372036854775807))))) != (max((min(var_8, var_1)), var_14))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_16 = ((+((-243 ? (((arr_4 [i_1] [i_1]) ? 6 : var_11)) : (arr_1 [2] [i_1])))));
                    arr_8 [i_2] [i_1] [i_1] = 47;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] = ((0 ? ((max(var_6, var_9))) : (((arr_13 [i_1] [i_2] [i_4]) * ((max((arr_5 [i_4]), var_8)))))));
                                var_17 = (min(var_17, ((max((min((arr_4 [9] [i_3]), 6843229599619206061)), var_3)))));
                                var_18 -= (max((((((arr_13 [i_4 - 1] [i_3] [i_0]) ? (arr_11 [i_0 + 2] [i_1] [i_2] [i_3] [i_4]) : -1579968793)))), (arr_3 [i_2] [i_1])));
                                arr_15 [i_0] [i_2] [i_2 - 1] [i_3] = ((~(arr_6 [i_3] [i_3] [i_3])));
                            }
                        }
                    }
                    arr_16 [i_1] [i_1] [i_1] |= (max(1863445200, ((((arr_9 [i_1]) || (arr_10 [i_1] [i_2] [i_2] [i_2] [i_0 + 1] [i_1]))))));
                    var_19 = (max(((((min(var_11, -1909607912))) ? (~var_9) : -8002)), ((~(((arr_7 [i_0]) ? 14335789298236231410 : (arr_0 [i_1])))))));
                }
            }
        }
    }
    #pragma endscop
}
