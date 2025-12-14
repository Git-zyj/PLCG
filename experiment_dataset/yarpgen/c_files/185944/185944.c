/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185944
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 |= (max(-7186733197558766983, var_2));
    var_15 ^= var_2;
    var_16 = var_5;
    var_17 += ((((((~var_6) ? (max(-7186733197558766983, var_4)) : var_11))) && var_9));

    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_18 |= ((var_8 ? (max(7186733197558766983, var_11)) : (arr_0 [i_0 - 2])));
        var_19 = (min(var_19, ((((arr_0 [i_0 + 1]) || ((((arr_1 [i_0 - 2]) / (arr_0 [i_0 + 1])))))))));
        var_20 = (max((arr_0 [i_0 + 1]), var_8));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = (max(var_21, (((var_0 / (arr_2 [i_0] [i_0]))))));
            var_22 |= (((arr_0 [i_0]) || -7523541703397739598));
        }
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                var_23 = (min(var_23, (((-(min(7186733197558766952, -7186733197558766989)))))));
                var_24 = (max(var_24, ((((arr_1 [i_0]) + var_8)))));
                var_25 = (min(var_25, (((var_10 ? ((max((arr_4 [17] [i_2]), (arr_4 [i_0] [i_0])))) : (max(1032057901, var_1)))))));
                var_26 -= (!-32751);
            }
            /* vectorizable */
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                arr_16 [i_2] = (arr_7 [i_0 - 2]);
                arr_17 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2] = var_13;
            }
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                arr_21 [i_2] = var_12;
                var_27 = (max(var_27, (((min(161, (min(var_3, (arr_11 [11] [12] [i_5])))))))));
            }
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 22;i_7 += 1)
                {
                    {
                        var_28 |= (arr_7 [i_0 + 1]);
                        arr_28 [i_0] [i_0] [i_2] [i_0] [i_2] [i_0 - 1] = 0;
                        var_29 |= (((--7186733197558767017) ? (~1) : ((190 ? 7186733197558766985 : 76))));
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 22;i_8 += 1) /* same iter space */
    {
        var_30 = (((min(2, 101)) % ((-2164132461812669477 ? ((0 ? 74 : -803876396071857634)) : var_0))));
        var_31 = ((max((arr_23 [i_8] [i_8 + 1] [i_8]), (arr_23 [i_8] [i_8 + 1] [i_8]))));

        /* vectorizable */
        for (int i_9 = 0; i_9 < 23;i_9 += 1)
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    for (int i_12 = 4; i_12 < 20;i_12 += 1)
                    {
                        {
                            var_32 = var_11;
                            var_33 = (min(var_33, (((var_3 < (arr_32 [i_8 + 1]))))));
                            arr_45 [i_12] [i_11] [i_11] [i_9] = (var_0 > var_9);
                        }
                    }
                }
            }
            var_34 |= 226;
        }
        for (int i_13 = 1; i_13 < 22;i_13 += 1)
        {
            var_35 = (min(var_35, ((max(((max((arr_24 [i_8] [i_8] [i_13] [14]), (max(-7811530479924275395, (arr_22 [i_8] [i_13])))))), (max((arr_8 [i_8]), var_3)))))));
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 23;i_14 += 1)
            {
                for (int i_15 = 2; i_15 < 21;i_15 += 1)
                {
                    {

                        for (int i_16 = 0; i_16 < 23;i_16 += 1)
                        {
                            var_36 -= ((!(((!var_11) && 7811530479924275395))));
                            arr_57 [i_16] [i_13] [i_13] [i_8] = (((((!(arr_39 [i_13] [i_13] [i_15 + 1] [i_15 + 1] [i_13])))) - (arr_39 [i_13] [i_13] [i_15 + 1] [i_15] [i_15 + 1])));
                            var_37 = (max(var_37, (((((max((arr_19 [i_8 - 1] [i_8] [i_8 - 1] [20]), 0))) ? (max((arr_38 [i_8 - 2] [i_13 - 1] [i_13 - 1]), var_3)) : ((min((arr_38 [i_8 - 1] [i_13 - 1] [i_8 - 1]), (arr_5 [i_8 - 1])))))))));
                            var_38 |= var_9;
                        }
                        for (int i_17 = 0; i_17 < 23;i_17 += 1)
                        {
                            arr_60 [i_8] [i_13] [i_13] [i_13] [18] = (((arr_20 [i_8] [i_8 + 1] [i_8 - 2]) - 18387));
                            arr_61 [i_8] [3] [i_14] [i_13] [i_13] = (max(var_12, (((~(~24126))))));
                            var_39 = ((((((arr_25 [i_15 + 2] [i_14] [i_14] [i_15 - 2] [i_8 - 1]) >> (((arr_51 [i_15 + 2] [i_13] [i_13 - 1] [i_13] [i_8 - 1]) - 1237753711))))) - -7891543807234891925));
                        }
                        for (int i_18 = 1; i_18 < 21;i_18 += 1)
                        {
                            arr_65 [i_8 - 2] [i_13] [i_14] [i_13] [5] [i_18] = (((((((-7811530479924275405 ? var_12 : 4))) && (!8803931627315472567))) ? (((arr_58 [i_13] [i_8 - 2] [i_13] [i_13 - 1] [i_8 - 2] [i_15 + 2] [0]) ? var_9 : var_11)) : (var_2 && -115)));
                            var_40 = min(-12420, ((-127 ? (arr_3 [i_8 - 2]) : -8803931627315472578)));
                            var_41 = (max(var_41, var_13));
                        }
                        for (int i_19 = 1; i_19 < 22;i_19 += 1)
                        {
                            arr_70 [i_8] [i_15] [i_14] [i_13 - 1] [i_8] [i_8] &= var_11;
                            var_42 = -7186733197558766986;
                            var_43 = (max(var_43, (((((max(var_13, var_4))) ? ((var_10 ? (arr_19 [i_15 + 1] [i_8] [i_8] [i_13]) : 4051377092)) : (((arr_11 [i_19 + 1] [i_19 + 1] [i_19 - 1]) ? (arr_19 [i_15 - 1] [i_8] [i_8] [i_8]) : var_8)))))));
                        }
                        arr_71 [i_13] [21] [i_13] [i_13] = var_8;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_20 = 2; i_20 < 22;i_20 += 1) /* same iter space */
    {
        var_44 = (((var_5 + (arr_38 [i_20] [8] [1]))));
        arr_74 [21] [21] = ((((((var_11 + 2147483647) >> var_9))) ? (arr_7 [21]) : 18387));
        var_45 -= (arr_69 [i_20 - 2]);
    }
    #pragma endscop
}
