/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101569
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_15;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_17 = (max(var_17, ((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))))));
        arr_2 [i_0] [i_0] = ((-(arr_1 [i_0])));
        arr_3 [i_0] = (((((14588711767917088465 ? 8191 : 3858032305792463138))) ? ((3858032305792463136 ? var_10 : var_1)) : 13));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = (min((arr_4 [i_1] [i_1]), ((((min(var_2, 3858032305792463151))) ? (((arr_4 [i_1] [i_1]) - (arr_4 [i_1] [14]))) : (arr_6 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    {
                        var_18 = (max(var_18, 1));
                        arr_15 [i_1] = (((arr_8 [i_2] [14] [i_4]) == (--3858032305792463144)));
                        var_19 = (((-1594970940 ? (((3858032305792463151 && (arr_9 [i_1]))) : (arr_6 [13] [i_2])))));
                        var_20 = (max(var_20, ((max((((arr_10 [i_4] [i_3] [i_4]) ? (max(var_10, -62)) : (~117786788))), ((((((arr_12 [i_1] [i_2] [i_3] [2]) ? (arr_13 [12] [i_4] [i_3] [i_4] [i_4]) : (arr_10 [i_4] [i_2] [i_3])))) ? ((-(arr_5 [i_4]))) : 15827)))))));
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 14;i_7 += 1)
            {
                {
                    arr_27 [1] [i_5] [i_5] [i_5] = arr_22 [i_5] [i_6] [i_5];
                    var_21 += (arr_12 [i_5] [15] [i_6] [15]);
                    var_22 = (min(var_22, var_3));
                }
            }
        }
        arr_28 [i_5] = (arr_9 [i_5]);
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1)
    {
        var_23 = max(0, ((min((arr_29 [i_8]), (arr_29 [i_8])))));
        arr_31 [i_8] [i_8] = (var_2 ? (+-22952) : (max(22952, 1594970940)));
        /* LoopNest 2 */
        for (int i_9 = 2; i_9 < 18;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 19;i_10 += 1)
            {
                {
                    var_24 -= ((var_10 ? (arr_30 [i_8] [i_8]) : var_11));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 15;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                arr_42 [i_8] [i_8] [i_10] [4] [i_11] [i_12] = (arr_32 [i_8]);
                                var_25 = 13715384731171130346;
                                var_26 = ((((((arr_39 [i_8] [i_9 + 1] [i_8] [i_11 + 2] [i_11 + 3]) % 14588711767917088462))) ? ((~((var_1 ? 286719766 : 2427945756839977773)))) : ((~(min((arr_39 [i_8] [i_8] [i_8] [i_8] [i_8]), var_1))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        for (int i_14 = 0; i_14 < 1;i_14 += 1)
                        {
                            {
                                var_27 = (max(var_27, ((((((-(max(42580, 5718806318658997691))))) ? (~42575) : ((14588711767917088469 ? ((14401411523327059901 ? var_12 : var_9)) : (((-32767 - 1) ? var_0 : var_12)))))))));
                                arr_47 [i_8] [i_9] [i_10] [i_13] &= ((max(520392374248390817, (((65535 ? -2147483631 : -117786789))))));
                                var_28 = ((((((arr_39 [i_8] [i_9] [i_8] [i_13] [i_9 - 1]) ? (arr_39 [i_10] [i_9 + 1] [12] [i_13] [i_9 + 1]) : (arr_39 [i_9] [i_9] [i_10] [8] [i_9 - 2])))) ? ((23974 ? (-32767 - 1) : 2409893306)) : var_13));
                            }
                        }
                    }
                    var_29 = ((((min(((min((arr_41 [i_8] [i_8] [i_8] [i_10]), (arr_44 [i_8])))), ((74566910445533155 ? var_8 : 35933))))) != ((var_11 ? 2029178849 : (arr_32 [i_9])))));
                }
            }
        }
    }
    #pragma endscop
}
