/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_8;

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_15 = ((-(arr_1 [i_0 + 1])));

        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            var_16 &= (min(((((arr_0 [i_1]) * var_4))), (((arr_1 [i_0 + 1]) ? (arr_1 [i_0 + 2]) : 833103158))));
            var_17 = (max(var_17, ((((((max(var_4, (arr_2 [i_1])))) ? var_1 : (min(var_0, (arr_2 [8])))))))));
        }
        arr_6 [i_0] [i_0 - 1] = (((((arr_0 [i_0]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0]))) % ((min((arr_0 [i_0 + 2]), (arr_0 [i_0 + 1]))))));
    }
    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {

        for (int i_3 = 3; i_3 < 17;i_3 += 1)
        {
            arr_12 [i_2] [i_3] [i_3] = (((max((arr_8 [i_3 + 1] [i_3 + 4]), (arr_8 [i_3 - 3] [i_3 - 3]))) < (((arr_8 [i_3 - 1] [i_3 - 3]) ? (arr_8 [i_3 - 1] [i_3 + 3]) : (arr_8 [i_3 + 4] [i_3 + 1])))));

            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                var_18 = (max(var_18, ((((arr_13 [6] [i_3] [i_3 - 1]) >> (-var_2 + 22))))));
                var_19 = ((~(!-122)));
            }
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                var_20 = var_13;
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        {
                            var_21 = ((((((~(arr_16 [i_3 - 1] [i_5] [i_6] [i_7])))) && -12548193828050500331)));
                            var_22 = (max((((arr_16 [i_2] [17] [i_5] [i_6]) ? (arr_16 [i_2] [8] [19] [0]) : (arr_16 [i_2] [i_3 - 3] [i_5] [1]))), ((((arr_17 [6] [i_2] [i_7 + 1]) ? (arr_17 [i_2] [i_2] [i_7 + 1]) : var_3)))));
                        }
                    }
                }
                var_23 = ((-((~((-1647 ? -72 : 64))))));
            }
            arr_23 [i_2] [i_2] [i_2] = (min((var_2 & var_9), (((-var_4 < (arr_19 [i_3] [i_3 + 4] [i_2] [i_3] [i_3] [i_3 + 2]))))));
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_28 [i_2] [i_2] = ((((-72 ? var_13 : ((~(arr_20 [i_2] [i_3]))))) * (((((0 + (arr_18 [i_2] [i_2] [i_2] [i_2])))) ? (arr_20 [i_2] [i_2]) : (max(13, var_0))))));
                        arr_29 [i_2] [i_3 + 1] [i_8] [i_9] [8] &= (71 == 8452873390521822745);
                    }
                }
            }
        }
        for (int i_10 = 0; i_10 < 21;i_10 += 1)
        {
            var_24 &= 118;
            var_25 = (max(var_25, (arr_15 [i_2])));
            /* LoopNest 3 */
            for (int i_11 = 3; i_11 < 17;i_11 += 1)
            {
                for (int i_12 = 4; i_12 < 20;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            var_26 = var_3;
                            var_27 = var_13;
                            arr_40 [i_2] [i_2] [i_2] [14] [i_13] = ((-72 >= (arr_9 [i_2])));
                            var_28 = ((0 ^ (!var_8)));
                        }
                    }
                }
            }
            arr_41 [i_2] = var_10;
        }
        for (int i_14 = 0; i_14 < 21;i_14 += 1)
        {
            arr_45 [i_2] [i_2] = (((!var_1) & (arr_16 [i_2] [i_2] [i_2] [i_14])));
            arr_46 [i_2] = var_0;
            var_29 = ((arr_8 [i_14] [i_14]) + (arr_43 [17] [17] [i_2]));
        }
        /* vectorizable */
        for (int i_15 = 0; i_15 < 21;i_15 += 1)
        {
            /* LoopNest 2 */
            for (int i_16 = 2; i_16 < 19;i_16 += 1)
            {
                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    {
                        arr_54 [i_2] [i_2] [15] [i_16] [15] = 9993870683187728870;
                        var_30 &= (arr_42 [i_16 + 1] [8] [i_16]);
                        arr_55 [i_17] [i_2] [i_2] [i_2] = (~var_9);
                    }
                }
            }
            var_31 = (arr_51 [i_2] [i_2] [i_2]);
        }
        var_32 = ((((max(var_7, 1))) * var_5));
        arr_56 [i_2] = (((arr_14 [14] [i_2] [i_2] [i_2]) ? 6447253709090251570 : ((min((arr_35 [i_2] [i_2] [i_2]), var_1)))));
    }
    /* LoopNest 2 */
    for (int i_18 = 0; i_18 < 22;i_18 += 1)
    {
        for (int i_19 = 0; i_19 < 1;i_19 += 1)
        {
            {
                var_33 = (i_18 % 2 == 0) ? (((+(((((arr_57 [i_18]) + 2147483647)) >> (((arr_60 [i_18]) - 2438975989))))))) : (((+(((((((arr_57 [i_18]) - 2147483647)) + 2147483647)) >> (((((arr_60 [i_18]) - 2438975989)) - 1475485792)))))));
                arr_63 [i_18] = (((((52 ? 0 : 18392661955725442278))) ? ((1 ? -var_8 : (!1))) : (arr_60 [i_18])));
                var_34 = (((((var_8 >> (((arr_61 [i_18]) - 1902107615))))) ? (-116634061 & 18392661955725442278) : var_13));
            }
        }
    }
    #pragma endscop
}
