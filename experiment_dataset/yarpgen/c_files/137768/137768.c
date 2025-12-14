/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 = (min((((arr_0 [i_0 - 1]) / (arr_0 [i_0 + 1]))), -895273190));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [10] [i_2] [i_1] [i_3] [i_3] [i_4] |= (arr_3 [i_0 + 1] [i_1]);
                                var_20 |= (((max((arr_3 [i_4] [i_0 - 1]), 61)) | 3630017028));
                            }
                        }
                    }
                    var_21 = -895273190;
                    var_22 = (max((61 - 895273190), ((min(109, var_13)))));
                    arr_12 [i_2] = ((((max(61, (max(195, -23720))))) < (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [i_2])));

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_23 += 35409;
                        var_24 = (max(var_24, -21381));

                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            arr_17 [i_0] [i_0] [2] [i_1] [i_1] [i_0 + 1] [i_0] |= 1;
                            var_25 = (max((min(-1634854168272841515, -23735)), (((-1255995974637091076 ? -895273190 : 21378)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            arr_20 [i_0] [i_1] [i_1] [i_2] [i_5] [i_7] [i_7] = var_6;
                            var_26 = (((arr_7 [i_7] [i_2 + 1] [i_2] [i_0 + 1] [i_0 - 1] [i_0]) ? var_13 : ((-3 ? var_0 : 1))));
                            var_27 = (arr_14 [i_2]);
                            var_28 *= -23733;
                            var_29 = ((arr_3 [i_0 - 1] [i_0]) ? (arr_3 [i_0 + 1] [i_2]) : (arr_13 [i_0 - 1] [i_2 + 1] [i_2] [i_2 + 1]));
                        }
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            var_30 = ((((max((arr_9 [i_0] [i_1] [i_2] [i_5] [5]), 55))) <= (max((arr_22 [i_2] [i_2] [i_2] [i_5] [i_8]), (((-895273190 ? 0 : (-2147483647 - 1))))))));
                            var_31 = ((var_16 != ((max((arr_13 [i_0] [i_1] [i_0] [i_0]), 0)))));
                        }
                    }
                }
                var_32 = (+-3534780881);
                arr_24 [i_0] [i_0] [1] &= (((arr_1 [1]) ? (arr_14 [i_1]) : var_2));
            }
        }
    }
    var_33 = ((var_13 ? var_5 : ((-30 ? 213 : (((-32590 ? var_5 : 0)))))));
    #pragma endscop
}
