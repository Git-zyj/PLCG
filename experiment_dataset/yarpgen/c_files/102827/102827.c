/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_11 ^= ((var_1 ? var_10 : ((((!(arr_10 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3])))))));

                            for (int i_4 = 0; i_4 < 19;i_4 += 1)
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] [i_4] = (min((3760325640 / var_2), -2879093348519878849));
                                var_12 = 6081346229723422954;
                                var_13 = ((-5498515819647989424 || ((min((arr_11 [i_4] [i_4] [i_4] [i_1] [i_4]), 0)))));
                                arr_15 [1] [i_1] [i_2] [i_1] [i_2] = -6081346229723422955;
                                arr_16 [i_0] [i_1] [i_0] [i_0] = (arr_9 [i_1] [i_3] [i_1] [i_1]);
                            }
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_3] = (((arr_12 [16]) || var_10));
                            var_14 = (((arr_8 [i_1] [i_2 + 1] [i_1]) >= (max((arr_12 [i_1]), (arr_3 [i_0] [i_1])))));
                        }
                    }
                }
                arr_18 [4] [i_1] [i_1] = 255;
                arr_19 [i_0] [i_1] [i_0] = ((((((~(arr_0 [i_1]))) + 2147483647)) >> (var_4 - 2446032297035746377)));
            }
        }
    }
    var_15 = (max(var_15, var_10));
    var_16 = var_6;
    var_17 = -643146472;
    #pragma endscop
}
