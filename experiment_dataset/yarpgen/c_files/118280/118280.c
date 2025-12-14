/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_11 = (arr_4 [i_1]);
                var_12 -= (arr_0 [i_0]);
                var_13 = 0;
                var_14 = ((~((var_10 ? var_7 : (arr_0 [i_2])))));
            }
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 8;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 7;i_5 += 1)
                        {
                            arr_17 [i_4] [i_5] = ((!(arr_9 [i_0 + 2] [i_3] [5] [0])));
                            arr_18 [i_4] [i_3] [i_3] [i_1] [i_4] = ((0 >> (((~var_10) + 35820))));
                            var_15 += arr_14 [i_4] [i_4 - 3] [i_4] [i_4 - 2] [i_4] [i_0 - 2] [i_0 - 2];
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_16 |= var_2;
                            var_17 = ((var_9 & ((((!(arr_7 [6] [i_1] [i_3])))))));
                            var_18 += ((126 ? 1 : -11007));
                        }

                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            var_19 = (max(var_19, 1));
                            arr_23 [i_7] [i_4] [i_4] [i_1] = (!var_9);
                        }
                        var_20 -= (arr_9 [i_0] [i_0] [i_0] [i_0 + 2]);
                    }
                }
            }
        }
        for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
        {
            arr_27 [i_8] [8] = var_7;
            arr_28 [i_0] = (((((-(arr_24 [i_0])))) ? ((((arr_9 [7] [7] [7] [7]) <= 1))) : (arr_21 [i_0] [i_8] [i_8] [i_8] [i_8])));
        }
        for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
        {

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                arr_34 [i_9] [i_9] = (arr_21 [i_0] [i_0 + 2] [4] [4] [i_0 - 3]);
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 10;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 10;i_12 += 1)
                    {
                        {
                            var_21 = (max(var_21, -225499851026760890));
                            var_22 = (max(var_22, (((+(((arr_19 [i_0] [8] [i_0]) * (arr_3 [i_0] [i_0 + 2]))))))));
                        }
                    }
                }
            }
            var_23 = (~var_6);
            var_24 = (((arr_16 [i_0] [6] [i_0]) + (arr_3 [i_0 + 3] [i_0])));
        }
        var_25 = ((((var_6 <= (arr_16 [i_0] [i_0] [i_0])))));
    }
    var_26 *= ((var_10 < (~var_5)));
    #pragma endscop
}
