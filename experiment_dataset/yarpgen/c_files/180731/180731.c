/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 *= (min(((((min(1695947191461423596, 149)) == ((((1 != (arr_2 [i_0])))))))), (((-127 - 1) ? (arr_4 [i_0] [i_0]) : (arr_6 [4] [i_0])))));
                    var_18 = (min((((arr_5 [i_0] [i_1] [i_0] [i_1 + 1]) ? (arr_5 [i_0] [i_1] [i_1] [i_2]) : (arr_5 [i_0] [i_1] [i_2 - 2] [i_2 - 2]))), (((arr_5 [i_0] [i_1 + 2] [4] [i_2 - 2]) ? var_3 : var_6))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    var_19 = (arr_15 [i_3] [i_3] [i_3] [i_3]);
                    var_20 = (min(var_20, ((max((~var_8), (arr_9 [i_5]))))));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_21 = (max(((((max((arr_20 [i_3]), -123))) * 167)), var_16));
                                var_22 = (((((((min((arr_13 [i_3] [i_5] [i_6]), 223)))) % (arr_10 [i_3] [i_3] [13])))) ? (~var_11) : (((var_4 ? ((max((arr_9 [i_3]), var_3))) : var_7))));
                                var_23 = (((max((arr_11 [i_3]), var_1)) >> ((((~(arr_15 [i_6] [i_6] [i_6 + 3] [i_6]))) - 21344))));
                                arr_22 [2] [i_3] = (((((~(arr_8 [i_4])))) ? ((((max(var_13, (arr_8 [i_5])))) ? ((min(var_8, 3039029961333027464))) : (max((arr_19 [i_3]), 1546240595)))) : (((-124 & 11917) ? ((max(var_10, var_9))) : ((var_16 ? 11917 : var_0))))));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
                {
                    var_24 = var_7;
                    var_25 = ((((var_11 ? var_14 : 131)) + ((var_7 ? (arr_8 [15]) : 1))));
                }
                arr_25 [13] [i_3] [i_4] = (((((max((arr_16 [i_4] [i_4] [i_4] [i_3] [i_3]), 1446842816))) ? (((arr_18 [i_3] [8] [i_4] [i_4]) / var_11)) : (arr_13 [i_3] [i_4] [i_4]))));
                arr_26 [12] [12] [i_3] = (arr_16 [i_3] [i_3] [i_3] [i_3] [i_4]);
                var_26 = arr_23 [i_3] [13] [i_3] [i_3];
            }
        }
    }
    #pragma endscop
}
