/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183190
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((((var_6 ? ((var_5 ? var_0 : var_3)) : (~-23172)))) | var_4)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [i_1] [i_1] [i_1] = 23171;
                    arr_8 [i_0] [i_1] = (((((!(arr_5 [i_0] [i_0])))) != 65535));

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        arr_11 [i_3] [i_3] = -8809417881371218483;

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_14 = ((-24272 || (((~(arr_10 [i_3 - 1] [i_4 - 1] [i_4 - 1] [i_4]))))));
                            var_15 = (min(var_15, 1));
                        }
                        arr_15 [i_3] [i_3] = ((((8809417881371218479 != -8809417881371218483) ? -23168 : (arr_4 [i_3] [i_1] [i_3 - 1]))));
                        var_16 = (min(var_16, ((((((arr_14 [i_3] [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3 + 1]) * (arr_14 [i_3] [i_3] [i_3] [i_3 + 1] [i_3 + 2] [i_3 + 1]))) + (arr_1 [i_0] [i_1]))))));
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] = 0;
                    }
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        arr_20 [i_2] [i_1] [i_2] = -17817612397821988848;
                        var_17 ^= ((4294967295 ? (((((~(arr_18 [i_0] [i_1] [i_1] [i_1] [i_5]))) * 225))) : ((var_6 ? -86 : var_2))));
                    }
                    var_18 = (max(var_18, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])));
                }
            }
        }
    }
    var_19 = (min(var_19, -7));
    var_20 = var_12;
    var_21 = 8809417881371218479;
    #pragma endscop
}
