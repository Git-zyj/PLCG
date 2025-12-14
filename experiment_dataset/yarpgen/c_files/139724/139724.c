/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 139724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=139724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/139724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_18 *= (arr_1 [22]);
        var_19 = (((((arr_1 [i_0]) >> (var_16 - 41841))) - var_8));
        var_20 = (max(var_20, (((-(arr_1 [0]))))));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_21 += (((((70 ? (arr_4 [i_1 + 1]) : 255))) ? ((116 >> (((arr_4 [i_1 - 2]) - 101)))) : (arr_4 [i_1 + 1])));
        var_22 = (((((3356 ? 55 : 5))) ? (!var_6) : 75));
        var_23 = var_7;
    }
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 11;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_24 = ((123 ? 182 : 242));
                                var_25 = ((((((arr_7 [i_6 + 1]) ? 169 : (arr_11 [11] [i_6 - 2] [i_6 - 2] [i_3 + 2])))) ? ((var_7 - (arr_7 [i_6 - 2]))) : ((((arr_7 [i_6 - 3]) != 23)))));
                                var_26 = 186;
                                arr_22 [i_4] [i_4] [5] [5] [i_4] [i_3] = (~224);
                            }
                        }
                    }
                    var_27 = (max(var_27, (((((var_3 ? (arr_1 [i_2]) : var_6)) & (min((((arr_6 [3]) ? var_13 : 23)), var_5)))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    {

                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_28 = min((max((!51), (arr_31 [i_10] [i_10 + 2] [i_10 + 2] [i_10 + 1] [i_10]))), var_0);
                            var_29 = (max(((var_2 - ((var_5 ? var_5 : 185)))), -var_14));
                            arr_32 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_9] [i_2] = ((var_9 / ((((var_16 ? var_10 : var_5))))));
                            arr_33 [i_2] [i_9] [5] [i_2] [i_2] = (max((((~222) ? ((var_17 ? (arr_23 [i_9] [i_9] [i_9]) : var_16)) : 140)), ((31851 ? (arr_15 [9] [i_2 - 1] [i_8 + 1] [i_8 + 1]) : (arr_15 [i_2 - 2] [i_2 + 1] [i_8 - 1] [i_9])))));
                            arr_34 [i_9] [i_9] [i_9] [i_9] = ((!(!5926)));
                        }
                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            var_30 = (max(var_30, 100));
                            arr_39 [i_11 - 1] [i_7] [i_9] [i_7] [i_2] = ((var_8 ? (max(191, (var_14 - var_7))) : var_3));
                            arr_40 [i_7] [4] [i_9] = (166 - 126);
                            var_31 = (min(var_10, (((arr_4 [i_2 - 1]) ? (var_13 / var_9) : ((max(var_6, var_12)))))));
                        }
                        for (int i_12 = 2; i_12 < 12;i_12 += 1)
                        {
                            var_32 = var_17;
                            arr_44 [i_9] [i_7] [i_7] [i_7] [4] [i_9] [i_12 - 1] = 113;
                        }

                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 13;i_13 += 1)
                        {
                            arr_47 [i_2 - 1] [i_2] [i_9] [i_2] [i_2 - 1] = var_11;
                            arr_48 [i_2 - 2] [i_9] [i_2 + 1] = (arr_18 [i_8] [i_9] [i_8 - 1] [i_9] [i_9] [i_8 - 1]);
                            var_33 -= ((79 & ((42 ? 13175 : 114))));
                        }
                        var_34 = var_17;
                    }
                }
            }
        }
        var_35 *= (max((((arr_31 [i_2] [i_2 + 1] [i_2] [i_2 - 2] [i_2 - 1]) ? var_4 : 65535)), 27889));
        arr_49 [i_2 + 1] [i_2 + 1] = 51411;
        var_36 = ((+(((var_12 % 49642) * -177))));
    }
    /* LoopNest 2 */
    for (int i_14 = 1; i_14 < 14;i_14 += 1)
    {
        for (int i_15 = 1; i_15 < 15;i_15 += 1)
        {
            {
                arr_55 [i_14] [i_14] [i_14] = (((((-(arr_0 [i_14 + 2])))) ? (!17207) : var_11));
                var_37 = max(20, 196);
                var_38 = (max(var_38, 45780));
                var_39 = ((!((((var_15 - 45515) * ((var_9 ? var_17 : var_3)))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 11;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 12;i_17 += 1)
        {
            {
                var_40 = var_8;
                arr_61 [i_16] [i_16] = ((((min((((arr_46 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]) & 7786)), (arr_9 [i_16])))) ? (((arr_52 [i_16] [i_16] [i_16]) & (58 != var_3))) : ((((min(85, (arr_1 [i_17])))) ? 191 : ((var_7 ? 215 : var_10))))));
            }
        }
    }
    #pragma endscop
}
