/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149432
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {

                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            var_18 = (max(var_18, ((max(((15883 ? (max(6655144479652861124, var_17)) : ((((15861 != (arr_7 [i_0] [i_1] [i_2] [i_3]))))))), (max((arr_11 [i_2] [8] [i_2] [i_0] [8] [i_2] [i_0]), (arr_11 [i_4 - 3] [i_4 - 3] [i_0] [i_3] [i_3] [i_2] [i_3]))))))));
                            var_19 ^= (max(((14703936025184654378 << (-15 + 78))), -207427620));
                            arr_13 [i_0] [i_0] [i_2] [i_3] [i_1] = ((-((((~-1017227129) <= -56)))));
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_1] [i_0] [i_0] = ((max((arr_3 [i_0] [i_1]), var_11)));
                            arr_18 [i_0] [i_1] [i_0] [i_1] [i_5] |= (max(var_14, (max(((((arr_2 [i_1] [5] [i_1]) ? -7617835869393203525 : var_4))), 5785124897567681449))));
                        }
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_20 ^= (((arr_5 [i_1] [i_1] [i_6] [i_1]) ? (((+((-1275567817 ? (-127 - 1) : 99))))) : var_2));
                            arr_21 [i_0] [i_1] [i_1] [i_3] [i_3] = -32760;
                        }
                        var_21 ^= ((~(((~2121276906) | (arr_19 [i_0] [i_0] [i_2] [i_2] [i_0])))));
                    }
                    arr_22 [i_0] [i_1] [i_1] = max(4294967288, ((-84 ? (arr_5 [i_2] [i_1] [i_1] [i_2]) : (arr_14 [i_0] [i_0] [i_0]))));
                    var_22 = (((arr_10 [i_2]) ? ((var_8 ? (!66) : 2147483647)) : (arr_15 [i_1] [i_0] [i_1] [i_0])));

                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        arr_27 [i_1] = ((((arr_26 [i_0] [i_0] [i_0] [10]) ? (73 > -95) : 1017227144)));
                        var_23 = (min(var_23, ((((49 ? ((-(arr_16 [i_0] [i_2] [i_0]))) : (arr_19 [i_0] [i_1] [i_2] [i_1] [i_1]))) * (max((arr_2 [i_1] [i_1] [i_1]), -88))))));
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        var_24 = (arr_10 [i_0]);
                        var_25 = 1;
                    }
                }
            }
        }
    }
    var_26 = var_1;
    #pragma endscop
}
