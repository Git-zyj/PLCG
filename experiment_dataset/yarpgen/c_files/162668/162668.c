/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((((((arr_2 [i_1 + 1] [2]) | var_1)) % (arr_0 [i_1 - 1]))))));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    var_12 = (~var_5);

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_9 [13] [5] [i_1] [i_2 - 1] = (arr_1 [i_0]);
                        var_13 = (arr_6 [i_0] [i_0] [i_0]);
                    }
                    var_14 *= ((1 ? 1 : 0));
                    var_15 |= (((arr_2 [i_1 - 1] [16]) ? (arr_2 [i_1 + 2] [14]) : (arr_8 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_2 + 2])));
                    arr_10 [i_1] [i_1] [i_1] = (arr_4 [i_1 + 3] [i_1 + 1] [i_1]);
                }
                /* vectorizable */
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    var_16 = ((4485164585718915754 ? 30 : 12959541435692609164));
                    arr_13 [i_0] [i_1] = ((var_8 ? (arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_4 + 1]) : (arr_1 [i_1 + 3])));
                }
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_17 = ((-((((68 ? (arr_2 [12] [i_1]) : (arr_14 [i_1] [i_1 + 3] [i_1 + 3])))))));
                                var_18 = ((1247428544526145294 ? 236 : (((arr_8 [i_1 + 1] [i_1] [i_5 - 1] [i_5 - 1]) ? (arr_8 [i_1 + 1] [i_1 + 3] [i_5 - 1] [i_7]) : var_3))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 21;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 21;i_9 += 1)
                        {
                            {
                                var_19 = -5970;
                                var_20 -= arr_5 [i_1] [i_8] [17] [i_1];
                                var_21 = var_6;
                                arr_25 [i_1] [i_1] [18] [i_1] [i_9] = ((max((min(31, 1)), (var_1 > var_9))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
