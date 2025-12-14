/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123612
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            var_19 ^= (max(51619, (arr_5 [i_1] [i_1] [i_1])));
            var_20 = (arr_0 [i_0] [i_0]);
            var_21 = (((((arr_3 [i_0]) || (arr_3 [i_0]))) || (((((((arr_4 [i_0] [i_1]) ? (arr_3 [i_1]) : var_15))) ? (((!(arr_5 [5] [i_1] [8])))) : (arr_4 [1] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_22 = (min(var_22, ((max(((51609 ? var_6 : (arr_4 [i_2] [i_0]))), (((!(arr_4 [i_0] [i_2])))))))));
            var_23 = ((~((-((13941 & (arr_6 [12])))))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_11 [16] [16] [i_3] = ((~(arr_10 [18])));
                var_24 = (min(var_24, (((~(arr_6 [i_3]))))));
                var_25 = (((arr_5 [i_0] [9] [15]) ? 51593 : var_17));
            }
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                var_26 = (~((((arr_3 [i_0]) || (arr_12 [i_0] [i_2] [i_4])))));
                var_27 += ((~(arr_12 [i_0] [i_0] [2])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_28 ^= ((+(((arr_4 [i_6] [i_2]) ? (arr_8 [i_0] [i_4] [i_5] [i_6]) : (arr_6 [i_5])))));
                            arr_19 [i_0] [i_2] [i_4] [i_4] [8] [i_5] [i_6] = (--87);
                            var_29 = (!84);
                        }
                    }
                }
                var_30 = (min(var_30, (((((((max(var_13, (arr_1 [6])))))) ? (((max((arr_9 [i_0] [i_0]), 209)))) : ((((var_17 ? (arr_16 [i_4] [1] [i_0] [i_0] [i_0] [i_0]) : -50)) + ((-(arr_12 [2] [i_2] [14]))))))))));
            }
            for (int i_7 = 2; i_7 < 19;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [19] [i_0] [7] |= (((((-(max((arr_3 [i_0]), 51628))))) ? (((~(~130)))) : (arr_17 [i_0] [i_0] [i_7] [i_8] [i_7])));
                            var_31 = (((+((var_5 ? (arr_26 [i_0] [i_8]) : (arr_3 [i_0]))))));
                            var_32 = (!2719);
                        }
                    }
                }
                arr_28 [i_0] [i_0] [i_0] = ((~((-(!var_18)))));
            }
            var_33 ^= var_15;
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            arr_32 [i_0] [17] [17] = ((var_4 | ((((!(arr_16 [6] [1] [1] [i_0] [i_0] [1]))) ? var_9 : var_16))));
            var_34 = ((+(((((arr_3 [i_10]) + 2147483647)) >> (((~13943) + 13963))))));
            var_35 = ((-(min(((var_14 / (arr_2 [i_0]))), (arr_10 [i_0])))));
        }
        var_36 = (max(var_36, ((((((-((1 ? (arr_20 [i_0]) : var_11))))) ? ((((!(((-(arr_22 [0] [i_0] [i_0])))))))) : (max((arr_10 [i_0]), (arr_22 [5] [i_0] [18]))))))));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1) /* same iter space */
    {
        var_37 = (max(var_37, (((((arr_1 [i_11]) || (arr_26 [i_11] [i_11])))))));
        var_38 ^= (((~51592) ? (arr_13 [i_11] [i_11] [i_11]) : (max(64, 13955))));
        arr_36 [i_11] [i_11] = (~(max(13517, 20371)));
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 1; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 20;i_14 += 1)
                {
                    {
                        var_39 |= arr_39 [i_11] [i_12];
                        var_40 = ((!(max(1, (!549755748352)))));
                        arr_46 [6] [i_12] [i_12] = ((max(var_17, (!13943))));
                        var_41 += (!13934);
                    }
                }
            }
        }
    }
    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
    {
        arr_50 [i_15] = ((((((!(arr_38 [1] [1]))))) ? (89 < 51588) : ((~((98 ? var_16 : var_8))))));
        arr_51 [i_15] [i_15] = (max((!46), (max(var_8, ((max((arr_48 [i_15]), 13934)))))));
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 18;i_17 += 1)
        {
            {
                var_42 = (arr_56 [i_16]);
                arr_58 [i_17] [i_16] = ((((max((min(var_17, var_15)), (!var_13)))) ? ((min((arr_24 [i_17] [15] [i_16] [i_16]), (arr_24 [13] [i_16] [i_17] [4])))) : (max((arr_33 [i_16]), -80))));
            }
        }
    }
    #pragma endscop
}
