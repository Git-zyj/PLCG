/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
                {
                    var_13 *= (arr_4 [i_0] [i_0] [i_1] [6]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 = 34;
                                var_15 = (arr_10 [i_0] [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_0]);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                arr_19 [i_0] [i_6] = ((var_2 ? (!0) : (3 > var_5)));
                                arr_20 [i_7] [i_0] [i_0] [i_0] [i_0] = 0;
                                arr_21 [i_0] [i_1] [i_1] [i_5] [i_0] [i_1] [i_7] = ((980683856 ? (24 / -24) : (var_2 | 0)));
                            }
                        }
                    }

                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_16 = ((0 != (((0 ? -2 : 24)))));
                        var_17 *= var_3;
                        arr_24 [i_1] [8] [8] [i_1] [i_8] |= ((var_7 > ((var_1 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : 175))));
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1)
                    {
                        arr_28 [i_1] [6] [i_1] [i_9] |= (((-2049243783051899540 && -2049243783051899540) < var_4));
                        var_18 += (arr_15 [i_5 + 1] [i_5 + 1] [i_1] [i_5] [i_5]);
                    }
                    arr_29 [i_0] = ((-(((arr_26 [i_5] [i_0] [i_1] [i_0]) | 10819856358703817186))));
                }
                arr_30 [i_0] = (arr_27 [i_0] [i_0]);
            }
        }
    }
    var_19 |= var_1;
    var_20 = var_9;
    #pragma endscop
}
