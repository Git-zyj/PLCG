/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (~-8933045453883323080);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = var_3;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, 6216076299649203939));

                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_13 ^= var_2;
                            var_14 = (min(var_14, (((-(arr_10 [i_0] [i_1] [i_2] [i_3]))))));
                            var_15 ^= (((((~(arr_4 [i_0])))) ? var_8 : (arr_11 [i_3] [i_0] [i_3 - 1])));
                            var_16 &= (((arr_3 [i_3 - 2]) < (arr_4 [i_0])));
                        }
                        var_17 = -1;
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_18 = -21;

                        for (int i_6 = 3; i_6 < 9;i_6 += 1)
                        {
                            var_19 = (((arr_1 [i_0] [i_0]) / 55475));
                            var_20 = ((21 ? (arr_13 [i_5 - 1] [i_1] [i_6 - 3] [i_6 - 3]) : 16404));
                            var_21 = (((arr_16 [i_0] [i_0] [i_6 + 2] [i_1] [i_6 + 2] [i_6 - 3] [i_5 - 1]) ? 35622 : (arr_16 [i_0] [i_5] [i_6 - 2] [i_1] [i_2] [i_5] [i_5 + 2])));
                            var_22 = (arr_16 [i_0] [5] [i_2] [i_1] [i_6] [i_5 + 2] [i_6]);
                        }
                        for (int i_7 = 2; i_7 < 10;i_7 += 1) /* same iter space */
                        {
                            var_23 = ((-2088326961 ? 0 : -1));
                            var_24 &= 29913;
                            var_25 = (min(var_25, var_7));
                            var_26 = (1 == 1644618970);
                        }
                        for (int i_8 = 2; i_8 < 10;i_8 += 1) /* same iter space */
                        {
                            var_27 = (((arr_14 [i_1] [i_5 + 2] [i_5 + 2] [i_8 - 2]) < (arr_7 [i_1] [i_8 + 1] [i_5 + 2])));
                            var_28 |= 1836;
                        }
                        for (int i_9 = 2; i_9 < 10;i_9 += 1) /* same iter space */
                        {
                            var_29 = 246;
                            var_30 = 0;
                        }
                        var_31 = (min(var_31, (1 * 0)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
