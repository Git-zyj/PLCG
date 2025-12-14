/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 16;
    var_14 = var_10;
    var_15 = (max(var_15, (((((max((1 <= 21), var_2))) ? var_5 : var_6)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_0] = (arr_4 [i_0]);
                            var_16 = (!(arr_9 [i_0] [i_3 - 1] [i_4 - 1] [i_1] [i_1] [i_2] [i_3]));
                            var_17 = (((((var_6 + 2147483647) >> (-16 + 18))) | ((((arr_1 [i_1] [i_2]) >= (arr_7 [i_0] [i_1] [i_2] [i_3] [i_0] [i_4]))))));
                            arr_12 [i_4] [i_3] [i_0] [i_1] [i_0] = (arr_10 [i_0] [i_3 - 1] [i_0]);
                        }

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            var_18 += (arr_8 [i_0] [i_1] [i_2] [i_3]);
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] [i_5] = arr_0 [i_0];
                            var_19 += (((arr_13 [i_0] [i_1] [i_2] [i_3] [i_5]) >= 15147148594721528214));
                            var_20 = (arr_9 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_21 = ((~((-(arr_10 [i_0] [i_1] [i_0])))));
                            var_22 ^= ((arr_8 [i_6] [i_3 - 1] [i_1] [i_0 + 1]) ? (arr_8 [i_3] [i_3 - 1] [i_2] [i_0 - 1]) : (arr_8 [i_6] [i_3 - 1] [i_1] [i_0 - 2]));
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_23 = (arr_13 [i_7] [i_3] [i_2] [i_1] [i_0]);
                            var_24 = (max(var_24, 22087));
                            arr_21 [i_0] [i_2] [i_0] = (arr_14 [i_0 - 2] [i_0] [i_0 - 1] [i_0] [i_0]);
                        }
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 0;i_8 += 1)
        {
            arr_26 [i_0] [i_0] = (arr_22 [i_0] [i_8] [i_0]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 22;i_10 += 1)
                {
                    {
                        var_25 = 18;
                        var_26 = (min(var_26, ((((-23 ? -61 : 1182710416))))));
                    }
                }
            }
            var_27 = (arr_6 [i_8 + 1] [i_8 + 1] [i_0 - 1]);
            arr_32 [i_0] [i_8] [i_0] = (((arr_9 [i_8] [i_8] [i_8] [i_8 + 1] [i_8] [i_8] [i_0]) + var_6));
        }
        var_28 = (arr_8 [i_0] [i_0] [i_0] [i_0 - 1]);
    }
    #pragma endscop
}
