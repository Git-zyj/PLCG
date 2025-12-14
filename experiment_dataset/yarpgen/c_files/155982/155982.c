/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155982
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;
    var_11 ^= (max(4294950912, -7590377390804398500));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_12 = (arr_0 [i_0]);

                for (int i_2 = 0; i_2 < 0;i_2 += 1) /* same iter space */
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 ^= (4568 && 28);
                        var_14 += ((var_8 & ((var_5 ? ((min(var_2, (arr_0 [i_3])))) : (((arr_3 [i_0 - 1] [i_0 - 1] [i_0]) | (arr_5 [0] [i_3] [i_2] [i_3])))))));
                        var_15 = 9223372036854775807;
                        arr_8 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0] = (~var_1);
                    }
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        var_16 = (max(((max((arr_6 [i_0] [i_0 + 1] [i_2 + 1] [i_1 - 1] [i_2] [i_1]), var_1))), (arr_9 [i_4] [i_0] [i_1 + 1])));
                        arr_11 [i_0 - 1] [i_4] [i_2] [12] [i_4] &= ((~(arr_10 [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])));
                        var_17 = (min(8188, 4560));
                    }
                    var_18 = ((((((arr_6 [i_0 - 1] [i_1] [i_0 - 1] [i_1 - 1] [i_0 + 1] [i_1 + 1]) + (arr_1 [i_0 + 1])))) ? var_1 : var_0));
                    arr_12 [i_0] [i_0] = (((arr_9 [i_0] [i_0] [i_2]) != var_9));
                }
                for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_21 [i_5] [14] [i_5] |= (min(16384, var_8));
                        var_19 = ((4560 ? 1 : 4294950912));
                    }
                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        arr_26 [i_7] [i_0] [i_0] [i_0] [i_0] = ((-((((var_4 ^ (arr_25 [i_7] [i_5] [i_0] [i_1] [i_0]))) - -11705))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            var_20 ^= (arr_13 [i_0 - 1] [i_1] [i_5 + 1] [i_8]);
                            var_21 = (arr_25 [i_0 - 1] [i_1 + 1] [i_0] [i_5 + 1] [i_5 + 1]);
                            var_22 &= 1024699136;
                        }
                        arr_29 [i_0] [i_0] [i_0] [i_0] = ((125 >= (arr_2 [i_0] [i_0])));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        arr_32 [i_0] [i_1 - 1] [i_0] [0] [i_1 - 1] = ((((max((arr_9 [i_1 - 1] [i_0] [i_0 - 1]), 11181))) * (arr_24 [i_1] [i_1 + 1] [i_1] [i_9] [i_1] [i_1])));
                        arr_33 [i_0 - 1] [i_0] = arr_9 [i_0] [i_0] [i_5];
                    }
                    arr_34 [i_0] [i_1 + 1] [i_1 + 1] [i_5] = ((min(61, (arr_31 [i_0] [i_0] [i_0]))) << (((arr_22 [i_0] [i_0 + 1] [i_1 + 1] [i_1]) + 1623991110)));
                }
                arr_35 [i_0] = ((~(min((arr_25 [i_1 + 1] [i_1 - 1] [i_0] [i_1 + 1] [i_0 - 1]), (arr_25 [9] [i_1 + 1] [i_0] [9] [i_0 - 1])))));
                arr_36 [i_0] [i_1 + 1] [i_1 - 1] = (~1);
            }
        }
    }
    #pragma endscop
}
