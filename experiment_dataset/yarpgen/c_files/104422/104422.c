/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((max((((16 ? var_0 : var_2))), (max(var_11, 16)))) < (((var_4 ? var_10 : 240)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (min(((~(16 - var_7))), (arr_0 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_15 = (arr_2 [i_0]);

                            for (int i_4 = 3; i_4 < 18;i_4 += 1)
                            {
                                var_16 = (min(var_16, (((~((-(max((arr_3 [i_3]), var_3)))))))));
                                var_17 = var_3;
                                var_18 *= (((((min((arr_0 [14]), -6099410877692395789)))) ? (((max((arr_8 [i_0] [i_4 + 3] [i_4 - 2] [i_4 - 2]), (min(32767, var_10)))))) : ((((((arr_13 [i_4] [i_3] [12] [i_1] [i_0]) >> (262112 - 262109)))) ? var_12 : var_5))));
                            }
                        }
                    }
                }
                var_19 = (!971047434);

                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {
                        var_20 = (arr_14 [i_0] [i_1]);
                        var_21 = ((((((arr_15 [i_0]) % (arr_15 [12])))) ? (arr_15 [i_5]) : ((-(arr_2 [i_5])))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_22 = 64;
                            var_23 = (arr_11 [1] [1] [4]);
                            var_24 = ((var_10 ? 735436182 : (arr_1 [i_0] [i_0])));
                            var_25 = 178;
                        }
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            arr_26 [13] [i_1] [i_5] [i_6] = (max(234, 14));
                            arr_27 [i_6] = (min(var_12, (((~(arr_14 [i_1] [i_1]))))));
                            arr_28 [i_0] [i_1] [i_6] = (arr_18 [i_1]);
                            var_26 = (min(((((max(3723719461135394189, (arr_17 [i_1] [i_1] [17])))) ? var_1 : -46)), (46 <= 78)));
                        }
                        var_27 = (min(var_27, ((((max((((46 ? 16 : 33))), (((arr_1 [i_5] [i_6]) ? (arr_20 [i_0] [i_0] [3] [i_0]) : (arr_4 [i_0] [i_6]))))) | (((max((arr_12 [i_0] [i_1] [12] [i_0] [i_1] [6]), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_5] [i_6]))))))))));
                    }
                    arr_29 [i_0] [12] [i_5] = -69;
                }
            }
        }
    }
    var_28 = ((-(max(var_8, (var_8 % 69)))));
    var_29 = (min(((~(-1866154922 <= 12311103309993435218))), ((max(78, (53620 == 153))))));
    #pragma endscop
}
