/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    var_19 = var_14;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (arr_2 [i_0]);
        var_21 = (min(var_21, -4197188653317380216));

        for (int i_1 = 2; i_1 < 9;i_1 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 11;i_4 += 1)
                    {
                        {
                            arr_12 [11] [0] [2] = var_14;
                            var_22 = 2702696318484441850;
                            var_23 |= (((((-(arr_5 [i_1] [i_2] [i_4 - 1]))) + 2147483647)) >> (var_17 != var_7));
                            var_24 = var_3;
                            var_25 = var_5;
                        }
                    }
                }
            }

            for (int i_5 = 3; i_5 < 11;i_5 += 1)
            {
                var_26 |= var_0;

                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_27 = -196484623;
                        var_28 = (var_12 != var_9);
                        arr_19 [i_1] [i_1 - 1] [i_1] [i_1] [i_1 + 1] [1] = var_13;
                    }
                    var_29 = (min(var_29, 1152921504606846975));
                    arr_20 [i_0] [i_0] [i_1 - 2] [i_5] [6] [i_6] = -var_8;
                }
            }
        }
        for (int i_8 = 2; i_8 < 9;i_8 += 1) /* same iter space */
        {
            var_30 = (var_8 ^ 567798211378421859);
            arr_25 [i_0] [i_0] [i_8] &= 7224;
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
        {
            arr_29 [i_0] [i_9] = (arr_28 [i_0] [i_0]);
            var_31 = (min(var_31, 14849));
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            var_32 = (min(var_32, -1152921504606846976));
            var_33 -= 24796;
        }
    }
    var_34 ^= -7224;
    #pragma endscop
}
