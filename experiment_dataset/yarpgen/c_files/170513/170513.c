/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~-7331788609356957181);
    var_13 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_14 &= 1;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_15 = (arr_10 [i_1] [i_1] [i_3] [i_3] [i_2] [5]);
                        var_16 = var_4;

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_17 = (min(var_17, var_5));
                            var_18 = (~-10);
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_19 -= (~var_2);
                            arr_17 [i_2] &= var_11;
                        }
                        var_20 ^= (1531034056 ? (arr_8 [3] [i_0] [i_2]) : var_11);
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        arr_21 [i_0 - 1] [i_0] = var_0;
                        var_21 = (max((arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]), 1));
                        var_22 *= (11411211314848394434 & -7331788609356957210);
                    }
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    var_23 = (max(var_23, (arr_1 [i_0 - 1])));
                    var_24 = (arr_10 [3] [i_1] [i_7] [8] [i_1] [i_0]);
                }
                var_25 = ((~(((arr_8 [i_0 - 1] [i_1] [i_1]) ? var_6 : (arr_8 [i_0 - 1] [i_1] [i_1])))));
                var_26 += ((((((arr_22 [i_0 - 1] [1] [i_0 - 1] [i_0]) ? (arr_22 [i_0 - 1] [5] [i_0 - 1] [i_0]) : (arr_22 [i_0 - 1] [13] [i_0 - 1] [i_0])))) ? ((2147483647 ? (min((arr_2 [i_0] [i_1] [i_1]), var_3)) : var_4)) : (((!((!(-9223372036854775807 - 1))))))));
                arr_24 [i_0] [i_1] [i_1] = (max((~var_0), (min((arr_7 [i_0 - 1] [i_0] [i_0 - 1]), var_1))));
            }
        }
    }
    var_27 = (min((var_2 < var_10), var_4));
    #pragma endscop
}
