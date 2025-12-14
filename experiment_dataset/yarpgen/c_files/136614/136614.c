/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = max((arr_6 [10] [i_1] [i_1] [12]), (((4294967295 ? 3760785236 : 1639922160))));
                    arr_7 [18] [18] [20] &= ((((((max((arr_3 [i_0] [i_0] [i_2]), 3401383229))) ? (((arr_0 [i_0]) ? (arr_1 [16]) : (arr_1 [14]))) : var_8))) ? (max((max(var_3, 2264834383)), 1223686354)) : 893584066);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                {
                    var_16 = (max(var_16, var_2));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_17 = 4294967293;
                                arr_21 [i_3 + 2] [5] [i_5] [i_6] [i_6] [i_6] [i_7] = min((((arr_11 [i_5] [i_4] [i_3]) ? var_3 : (!var_9))), (arr_5 [i_3] [i_4] [i_5] [4]));
                                arr_22 [i_3] [0] [i_4] [i_5] [4] [i_6] [i_7] |= (var_3 ? ((((min((arr_6 [i_7] [i_6] [i_4] [i_3]), 3459448615))) ? 893584064 : (((arr_11 [i_7] [i_7] [i_7]) ? var_1 : 3459448615)))) : 2332685589);
                            }
                        }
                    }
                    arr_23 [i_3] [0] = arr_3 [16] [16] [i_5];
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 11;i_9 += 1)
                        {
                            {
                                var_18 += -835518660;
                                arr_30 [i_3] [i_3] [i_5] [i_8] [i_3] [i_8] [i_5] = arr_19 [i_3 - 1] [i_3] [i_3] [i_3] [i_3] [i_3];
                            }
                        }
                    }
                }
            }
        }
    }
    var_19 ^= (2332685589 << (var_9 - 2371113389));
    /* LoopNest 2 */
    for (int i_10 = 0; i_10 < 21;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 21;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_42 [i_10] [i_10] [i_12] [i_13] [i_10] [i_11] &= arr_35 [i_13] [i_11] [i_13];
                            arr_43 [i_10] = 3071280941;
                            var_20 ^= ((((~(arr_33 [i_10])))) ? (((arr_39 [i_13] [i_13] [i_11]) ? (arr_33 [i_10]) : (arr_33 [i_12]))) : (((((arr_39 [i_10] [i_13] [i_10]) <= 307498570)))));
                            arr_44 [17] [i_10] [17] [i_13] = min(var_14, (((arr_41 [i_10] [i_10] [i_12] [i_13]) ? ((var_13 ? 1570111126 : 3446201786)) : 1570111126)));
                        }
                    }
                }
                var_21 = (((((arr_6 [i_10] [i_11] [i_11] [i_10]) ? 3690478230 : (arr_6 [3] [i_10] [i_10] [i_10])))) ? 3071280942 : (((~var_5) ? (arr_31 [i_10]) : ((1223686354 ? var_4 : (arr_31 [i_10]))))));
                var_22 = (min(var_22, ((((var_5 < ((var_14 ? (arr_35 [i_11] [i_10] [i_11]) : (arr_1 [i_11]))))) ? 4257554319 : ((0 ? 1231597353 : 106525609))))));
                var_23 = (max(var_23, (arr_31 [i_11])));
            }
        }
    }
    #pragma endscop
}
