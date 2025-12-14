/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_8));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_12 = min((max((arr_1 [i_0]), var_4)), (arr_2 [i_0] [i_0]));
        var_13 = (((max((!-17985), var_2)) * (min((~var_6), (((arr_1 [i_0]) ? 24397 : var_0))))));
        var_14 = (max(var_14, (((((min(15637, (arr_0 [i_0])))) <= (arr_2 [i_0] [i_0]))))));
        var_15 += ((((max((!var_0), ((24401 ? var_0 : -18869))))) ? ((max(-24414, (arr_1 [i_0])))) : var_6));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_16 = (min(var_16, ((((((arr_5 [i_2 - 1] [i_2 + 1]) ? (var_0 || 16) : (arr_8 [i_2] [i_2] [i_2] [i_2]))) / ((max((max(var_8, -24401)), var_2))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_17 = var_9;
                                arr_17 [i_1] [i_2 - 1] [3] [i_4] [10] [3] [i_3] = (!32767);
                            }
                        }
                    }
                    var_18 = (max((((arr_12 [i_2 + 1] [i_3] [i_3]) - (arr_6 [i_2 + 1] [i_2 + 1] [i_2]))), ((min(-24383, 14575)))));
                    var_19 = (min(var_19, ((((((((16383 ? (arr_4 [i_2 + 1]) : var_7))) ? var_8 : 32767)) > var_3)))));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_3] [i_2 + 1] = (((((((!(arr_4 [i_6]))) ? (((var_10 <= (arr_12 [i_2] [i_3] [i_2])))) : (var_4 - -647)))) ? (((((max(var_7, var_9))) < (~0)))) : (((((11825 ? var_2 : var_7))) ? (((arr_9 [i_1] [i_1] [1]) ? var_6 : var_10)) : (((-32767 - 1) % -9531))))));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            arr_25 [4] [4] [i_1] |= arr_6 [i_7] [6] [6];
                            arr_26 [i_1] [i_3] [i_1] [i_1] [i_1] [i_1] [18] = (((((((max((arr_10 [i_1] [i_3]), var_7))) < (arr_24 [5] [5] [12] [i_3] [i_6] [i_7] [i_7])))) ^ var_8));
                            arr_27 [i_7] [i_3] [6] [i_3] [12] = ((var_2 ? ((-(~var_8))) : 9531));
                        }
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            var_20 &= ((((max((arr_4 [i_1]), ((((arr_20 [i_8] [i_6] [i_2] [i_2] [i_2] [i_1]) >= var_2)))))) >> (((-19 ^ 24) + 26))));
                            var_21 -= ((((var_8 ? (arr_29 [i_2 + 1] [i_1]) : (arr_29 [i_2 + 1] [i_1]))) ^ (arr_15 [i_1] [i_1] [i_2] [i_2] [i_3] [i_2] [i_8])));
                            arr_30 [14] [0] [i_3] [i_3] [i_1] [i_1] = (arr_4 [i_2]);
                            arr_31 [i_2] [i_2] [i_6] [8] |= min(((((arr_21 [i_8] [i_6] [14] [i_1] [i_1]) > -31052))), 4357);
                        }
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            var_22 = ((!(((((min(var_2, var_5))) / (20989 * 28226))))));
                            arr_34 [i_9] [i_3] [i_3] [i_1] = ((((((arr_4 [i_9 - 1]) ? var_5 : var_5))) ? ((((arr_13 [i_2 - 2] [i_2 + 1] [i_2 + 1]) || (((17526 ? -423 : (-32767 - 1))))))) : ((-29141 ? 21866 : -14835))));
                        }
                        for (int i_10 = 0; i_10 < 20;i_10 += 1)
                        {
                            arr_37 [i_10] [16] [i_3] [i_3] [i_2 + 1] [i_1] = ((~(var_10 <= var_5)));
                            var_23 = (((((~(arr_36 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1] [i_2 - 1])))) ? (((arr_36 [i_2 + 1] [i_2 + 1] [13] [i_2 - 1] [15]) ? (arr_36 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_3]) : (arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2]))) : ((var_5 / (arr_21 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1])))));
                        }
                        var_24 = ((var_1 && (((var_3 ? (arr_11 [i_6] [i_2 - 1] [8]) : (arr_32 [i_6] [i_6] [i_3] [i_6] [i_2 + 1]))))));
                        var_25 = arr_16 [18] [i_3] [i_3] [i_2 + 1] [i_3] [i_1] [i_1];
                    }
                }
            }
        }
        arr_38 [i_1] = (min((((-29927 < -20351) ? ((var_8 ? -15888 : -13096)) : (arr_9 [i_1] [i_1] [i_1]))), -12100));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 16;i_11 += 1)
    {
        var_26 = (max(var_26, var_6));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 16;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 16;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 16;i_14 += 1)
                {
                    {
                        var_27 = (~var_6);
                        arr_48 [i_12] = (((arr_42 [i_11]) ^ var_8));

                        for (int i_15 = 0; i_15 < 16;i_15 += 1)
                        {
                            var_28 = arr_16 [i_11] [i_12] [i_13] [i_14] [i_12] [i_12] [i_13];
                            var_29 += ((~((var_10 ? 32767 : 10452))));
                        }
                    }
                }
            }
        }
    }
    var_30 = var_5;
    #pragma endscop
}
