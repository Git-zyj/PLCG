/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += (((((((18 ? 27056 : -8410))) ? var_7 : ((3601759401 ? 127 : -93)))) >= -3));
    var_20 = (min(var_20, 94));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    arr_8 [i_2] [i_1] [i_1] [13] = (((((arr_1 [i_1]) ? (((var_14 ? 5280 : var_7))) : (min((arr_1 [i_0]), var_1)))) > (((max(var_7, (var_4 < var_12)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_21 = (arr_1 [i_1]);
                                arr_15 [0] [20] [i_2 - 2] [i_2 - 2] [20] [i_0] &= (min(((var_13 ? 1493335258 : var_1)), var_6));
                            }
                        }
                    }
                    arr_16 [i_0] [i_1] [i_1] [i_2] = ((((((((2365831520 ? var_11 : var_4))) ? ((((86 < (arr_9 [7] [7] [i_0]))))) : var_12))) >= var_13));
                }
                /* vectorizable */
                for (int i_5 = 3; i_5 < 22;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 4; i_6 < 20;i_6 += 1)
                    {
                        var_22 += (~-27056);
                        var_23 = (var_14 == 0);
                    }
                    var_24 ^= ((var_13 ? (arr_11 [i_5 - 2] [i_1] [i_1] [i_1] [i_1] [i_0 + 1] [i_0]) : (arr_11 [11] [5] [i_5] [i_0 + 1] [i_1] [i_0 + 1] [5])));
                    var_25 = var_5;
                }
                for (int i_7 = 4; i_7 < 20;i_7 += 1)
                {
                    var_26 = (min(var_26, (arr_23 [i_7 - 2] [i_7] [0] [i_0 - 1] [i_0])));
                    arr_26 [i_0] [i_1] [i_7 + 1] [i_1] = ((var_7 || (min((((arr_3 [i_1] [i_1]) <= 4294967290)), (var_0 == var_7)))));
                    var_27 = ((((((((arr_11 [13] [13] [11] [13] [i_7] [13] [i_7]) ? 119 : -8400)) << (-var_12 - 2945798689)))) ? (min(((9664 ? (arr_9 [0] [17] [0]) : 92)), var_16)) : ((min((var_3 & 243), var_8)))));
                }
                arr_27 [i_0] [i_1] [20] = (arr_21 [i_0 + 1] [i_1] [i_0 + 1] [i_0 - 1]);
                arr_28 [0] [i_1] [0] = ((var_13 < (((~(min(var_1, (arr_22 [i_0] [i_1] [i_1] [i_0 + 1] [i_1]))))))));
            }
        }
    }
    var_28 += (min(((((((var_5 ? 13 : 12))) ? (((var_7 ? 0 : var_7))) : (max(-8408, var_14))))), ((var_0 + (((var_7 ? var_3 : 28)))))));
    #pragma endscop
}
