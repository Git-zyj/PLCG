/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_0));
    var_18 = ((~((var_9 | (~16)))));
    var_19 = ((!var_2) << var_15);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = (max(var_20, ((((arr_4 [i_0 - 3] [i_0 - 1]) ? (var_7 >= 8962869941499943894) : (arr_4 [i_0 + 4] [i_2]))))));
                        var_21 |= var_7;
                    }
                    /* vectorizable */
                    for (int i_4 = 3; i_4 < 17;i_4 += 1)
                    {
                        var_22 = (arr_2 [i_0] [i_0 - 3] [i_0 - 3]);
                        var_23 = (((arr_6 [i_0] [i_0] [i_0 - 3]) && (arr_12 [i_0] [i_0 + 1] [i_0 + 1] [i_4 - 3])));
                        arr_13 [i_4] = ((!(arr_6 [i_0 + 2] [i_4 - 3] [i_4 - 3])));
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        arr_17 [16] [i_1] = (((arr_12 [i_0 - 3] [i_5 - 1] [i_5] [i_5]) % (arr_12 [i_0 - 3] [i_5 + 1] [i_5] [i_5])));
                        var_24 = ((var_2 & (arr_0 [i_5 - 2] [i_0 - 1])));
                        var_25 ^= (var_5 / -1119890172);

                        for (int i_6 = 3; i_6 < 16;i_6 += 1)
                        {
                            var_26 = (arr_0 [i_0] [i_5 + 1]);
                            var_27 = (~-var_15);
                            arr_22 [3] [i_0 - 3] [i_0 - 3] [i_1] [i_0 - 3] = var_16;
                            arr_23 [i_0 + 2] [i_0 + 2] [i_5] [i_5] [i_6 - 3] [i_5] = (arr_7 [i_5] [i_0] [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_28 ^= ((-var_4 != (arr_2 [i_0] [i_2] [i_2])));
                            var_29 = (((arr_15 [i_0 - 1] [i_7]) == (arr_18 [i_1] [i_2] [i_5])));
                        }
                    }
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        var_30 = (((~(-32767 - 1))));
                        arr_30 [i_0] [13] [i_8] = ((arr_5 [i_8]) || (arr_6 [1] [i_0 + 3] [i_2]));
                    }

                    for (int i_9 = 0; i_9 < 19;i_9 += 1)
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0] = ((~(((arr_3 [i_0 - 1] [i_0 - 1]) << (((arr_32 [i_0] [i_0 + 4] [i_0] [i_0 + 1] [i_0 - 2]) + 17885))))));
                        var_31 = arr_0 [i_0] [i_1];
                        var_32 = (-32767 - 1);
                    }
                }
            }
        }
    }
    #pragma endscop
}
