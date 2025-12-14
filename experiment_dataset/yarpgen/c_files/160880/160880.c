/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(0, -0)) + -3418041225);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_1] [i_0] [5] [i_3] = ((((((arr_8 [i_0] [i_0] [i_0]) <= (arr_5 [i_0] [i_1] [i_3]))))) ? (min((((arr_10 [i_0] [i_0] [i_2]) ? (arr_11 [i_3] [i_2] [i_2] [i_1] [i_0]) : 0)), (~467529547))) : ((max((arr_10 [i_0] [i_0] [i_2]), var_7))));
                            var_15 = (min(var_15, -4187171985));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 3; i_5 < 8;i_5 += 1)
                    {
                        var_16 = min((((var_3 ? 2310784279 : var_6))), -2812069894);
                        arr_18 [i_5] [2] [i_1] [i_1] [2] [i_0] |= ((((~(max(539558886, 4294967295))))) ? (~var_1) : ((+(((arr_8 [i_0] [4] [i_5]) ? var_0 : var_10)))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 4; i_7 < 9;i_7 += 1)
                        {
                            {
                                var_17 += (((min(var_3, (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) != (min((((!(arr_3 [i_4] [i_6] [i_4])))), ((~(arr_16 [i_0] [i_0] [i_0] [i_7])))))));
                                arr_25 [5] [i_1] [i_4] [i_0] [i_7] = ((-((2563746188 ? 2919146971 : (arr_7 [i_0] [i_0] [0] [i_0])))));
                                var_18 += min(((max(var_2, (arr_24 [i_0] [i_7] [i_0])))), ((min((arr_20 [i_7] [i_6] [i_1] [5] [i_1] [i_0]), var_8))));
                            }
                        }
                    }
                }
                for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                {
                    arr_28 [i_8] [i_0] [i_0] [9] = (~((~(((arr_20 [i_8] [i_8] [i_8] [i_1] [7] [i_0]) ? 1358529094 : var_12)))));
                    var_19 ^= min(((((min((arr_14 [i_0] [4] [i_8]), 704266526))) ? ((var_9 ? var_3 : 4148228166)) : (arr_3 [i_0] [2] [i_8]))), ((~(arr_0 [4] [i_1]))));
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_10 = 2; i_10 < 8;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((((max((min(2470426301, (arr_4 [i_11]))), (max((arr_21 [9]), 57325126))))) ? (((((var_13 ? 131071 : 0))) ? ((var_3 ? 1984183016 : 3493244600)) : (min(2563746188, 1267271482)))) : ((-var_12 ? (max(1112485229, (arr_27 [i_0] [i_9] [i_10 + 1]))) : (min(1052093139, 1660114429))))))));
                                var_21 += (~var_11);
                                var_22 ^= ((((((max((arr_9 [i_11] [i_11]), 193428120))) && (!655517120))) && (((var_7 ? (((!(arr_24 [i_10] [i_11] [i_0])))) : (3552018289 || var_5))))));
                                var_23 = ((((-(!24576)))) + ((~(max(311828886, (arr_29 [i_1]))))));
                            }
                        }
                    }
                    arr_38 [i_0] = (((((var_13 ? var_2 : (arr_33 [7] [i_0] [i_9] [i_0] [i_0] [i_0]))))) ? -287152633 : (((min((arr_32 [i_0] [i_1] [i_1] [i_9]), 16776192)) - (~var_2))));
                }
                arr_39 [i_0] [i_0] = ((((!(arr_4 [i_0]))) ? 4294967295 : (arr_0 [8] [8])));
            }
        }
    }
    #pragma endscop
}
