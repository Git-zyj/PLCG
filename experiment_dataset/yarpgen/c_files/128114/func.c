/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128114
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = var_13;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = (short)-26119;
        arr_3 [i_0] = (short)16153;
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 2; i_2 < 10; i_2 += 3) 
        {
            for (short i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (short i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                var_19 ^= (short)-31381;
                                arr_17 [i_1] [i_1] [i_3] [i_4] [i_5] &= (short)-12178;
                            }
                        } 
                    } 
                    arr_18 [i_1] [i_1] [i_2 + 1] [i_2] = (short)-5171;
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (short i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            {
                                arr_24 [i_6] [i_2] [i_2 - 2] [i_3] [i_3] [i_6] [i_7 + 2] &= (short)-22880;
                                var_20 = ((/* implicit */short) max((var_20), ((short)16135)));
                                var_21 = (short)-16297;
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_25 [i_1] = (short)-5171;
    }
    for (short i_8 = 0; i_8 < 24; i_8 += 2) 
    {
        arr_28 [i_8] [i_8] = (short)-460;
        var_22 = (short)-17536;
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_10 = 3; i_10 < 13; i_10 += 4) 
        {
            var_23 = ((/* implicit */short) min((var_23), ((short)4536)));
            var_24 *= (short)-30439;
        }
        for (short i_11 = 4; i_11 < 15; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_12 = 1; i_12 < 15; i_12 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_13 = 1; i_13 < 16; i_13 += 2) 
                {
                    arr_40 [i_9] [i_11 - 2] [i_12] [i_13] = (short)6203;
                    var_25 = (short)-13450;
                }
                /* LoopNest 2 */
                for (short i_14 = 2; i_14 < 15; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 17; i_15 += 3) 
                    {
                        {
                            arr_45 [i_14 - 1] = (short)32750;
                            var_26 = (short)-3396;
                            var_27 += (short)17681;
                        }
                    } 
                } 
                arr_46 [i_12] &= (short)-9027;
                arr_47 [i_9] = (short)17681;
            }
            var_28 = (short)17686;
            var_29 *= (short)248;
            /* LoopSeq 2 */
            for (short i_16 = 0; i_16 < 17; i_16 += 2) 
            {
                arr_50 [i_9] [i_11 - 4] [i_11] = (short)15;
                arr_51 [i_9] [i_16] = (short)-5262;
                var_30 ^= (short)-16267;
            }
            for (short i_17 = 3; i_17 < 16; i_17 += 2) 
            {
                var_31 = (short)(-32767 - 1);
                arr_54 [i_17] [i_17] = (short)10550;
                /* LoopNest 2 */
                for (short i_18 = 1; i_18 < 14; i_18 += 3) 
                {
                    for (short i_19 = 0; i_19 < 17; i_19 += 3) 
                    {
                        {
                            var_32 = (short)4536;
                            var_33 = (short)-13555;
                            var_34 = ((/* implicit */short) max((var_34), ((short)21146)));
                        }
                    } 
                } 
            }
        }
        for (short i_20 = 4; i_20 < 15; i_20 += 2) /* same iter space */
        {
            arr_62 [i_20] [i_9] [i_9] = (short)(-32767 - 1);
            arr_63 [i_9] [i_9] [i_20 - 3] = (short)127;
        }
        /* LoopSeq 1 */
        for (short i_21 = 0; i_21 < 17; i_21 += 1) 
        {
            var_35 = ((/* implicit */short) max((var_35), ((short)17531)));
            arr_66 [i_21] [i_9] = (short)-19324;
            var_36 += (short)-17675;
        }
    }
}
