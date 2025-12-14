/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183928
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
    var_12 = ((/* implicit */short) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 += ((/* implicit */unsigned char) arr_1 [12LL] [i_0]);
        var_14 *= ((/* implicit */unsigned char) arr_0 [i_0]);
        /* LoopSeq 4 */
        for (int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            arr_6 [21] [i_1 + 2] &= ((/* implicit */unsigned short) arr_4 [i_0] [i_0]);
            arr_7 [i_1] = arr_2 [(_Bool)1] [i_1];
            var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_0 [i_0]))));
        }
        for (int i_2 = 1; i_2 < 23; i_2 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) arr_8 [i_0] [i_0] [i_0]);
            var_17 = ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0]);
            arr_10 [i_0] [i_0] &= ((/* implicit */unsigned char) arr_3 [i_0] [i_0]);
            arr_11 [i_0] [i_0] = arr_3 [i_0] [i_0];
        }
        for (int i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 1; i_4 < 22; i_4 += 3) 
            {
                for (unsigned char i_5 = 1; i_5 < 22; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) arr_12 [i_0] [i_3 - 1]);
                            var_19 = ((/* implicit */signed char) arr_13 [i_0]);
                        }
                    } 
                } 
            } 
            var_20 *= ((/* implicit */unsigned char) arr_16 [i_0] [i_3 + 1]);
        }
        for (int i_7 = 1; i_7 < 23; i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) arr_31 [i_0] [i_7] [i_7] [i_8] [i_9]);
                        arr_33 [i_0] [i_7 + 1] [i_8] [i_9] = ((/* implicit */_Bool) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_22 *= ((/* implicit */unsigned int) arr_26 [i_7]);
                    }
                } 
            } 
            var_23 = ((/* implicit */long long int) arr_32 [i_0] [i_0] [(short)20] [i_7] [i_7]);
            arr_34 [i_0] [i_7] [i_7] = ((/* implicit */short) arr_9 [(unsigned short)10] [i_7 - 1] [(unsigned short)10]);
        }
        var_24 = ((/* implicit */unsigned short) arr_16 [i_0] [i_0]);
    }
    /* LoopSeq 2 */
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        var_25 = ((/* implicit */unsigned int) arr_9 [i_10] [i_10] [i_10]);
        arr_38 [i_10] [i_10] = ((/* implicit */unsigned char) arr_13 [i_10]);
    }
    for (long long int i_11 = 1; i_11 < 17; i_11 += 1) 
    {
        var_26 = ((/* implicit */int) arr_4 [i_11] [i_11 - 1]);
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            for (int i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        for (short i_15 = 1; i_15 < 15; i_15 += 2) 
                        {
                            {
                                var_27 += ((/* implicit */unsigned int) arr_4 [i_11] [i_11]);
                                var_28 = arr_25 [i_11] [i_11];
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned char) arr_8 [i_11] [i_12] [i_13]);
                    var_30 = ((/* implicit */unsigned short) min((var_30), (arr_46 [i_13] [i_13] [i_12] [i_11])));
                    var_31 = arr_8 [i_11] [i_11] [i_13];
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            var_32 -= ((/* implicit */unsigned short) arr_25 [i_11] [i_11]);
            arr_57 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) arr_16 [i_11] [i_16]);
            var_33 = ((/* implicit */int) arr_48 [i_11] [i_11] [i_11] [i_11]);
            /* LoopSeq 4 */
            for (short i_17 = 0; i_17 < 18; i_17 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned short) arr_24 [i_11 + 1]);
                arr_60 [i_16] [i_17] = ((/* implicit */short) arr_40 [i_17]);
                var_35 = ((/* implicit */_Bool) min((var_35), (arr_24 [(_Bool)1])));
            }
            for (short i_18 = 0; i_18 < 18; i_18 += 3) /* same iter space */
            {
                var_36 = ((/* implicit */signed char) arr_40 [(signed char)11]);
                arr_64 [i_11] [i_16] [i_18] [i_18] = ((/* implicit */unsigned long long int) arr_13 [i_11]);
                /* LoopNest 2 */
                for (signed char i_19 = 0; i_19 < 18; i_19 += 1) 
                {
                    for (unsigned int i_20 = 0; i_20 < 18; i_20 += 3) 
                    {
                        {
                            arr_70 [i_11 - 1] [i_11] [i_11] [i_11 + 1] [(short)1] [7U] &= ((/* implicit */int) arr_30 [22] [i_16] [i_16] [i_16]);
                            arr_71 [i_11 - 1] [i_16] [i_18] [i_19] [i_19] [(_Bool)1] = ((/* implicit */unsigned int) arr_68 [i_11] [i_11 + 1]);
                            arr_72 [(unsigned char)3] [i_16] [i_16] = ((/* implicit */long long int) arr_22 [i_11 - 1] [22U] [i_18] [i_19] [i_20] [9LL]);
                            var_37 = ((/* implicit */long long int) arr_25 [i_16] [i_20]);
                        }
                    } 
                } 
            }
            for (unsigned int i_21 = 2; i_21 < 15; i_21 += 1) /* same iter space */
            {
                arr_75 [i_21] = ((/* implicit */short) arr_43 [i_11] [i_11]);
                arr_76 [2ULL] [i_11] = ((/* implicit */unsigned char) arr_41 [i_11]);
                arr_77 [i_16] [i_16] [i_11] = ((/* implicit */int) arr_27 [i_11] [i_16] [i_11]);
                arr_78 [(signed char)17] [i_16] = ((/* implicit */unsigned int) arr_68 [(unsigned short)5] [16U]);
                arr_79 [i_21] [i_16] [i_16] [i_11] = ((/* implicit */signed char) arr_12 [(unsigned char)6] [i_11]);
            }
            for (unsigned int i_22 = 2; i_22 < 15; i_22 += 1) /* same iter space */
            {
                var_38 = ((/* implicit */int) arr_18 [i_22] [i_11]);
                arr_83 [i_22] [i_22] [i_22] [i_22] = ((/* implicit */unsigned char) arr_67 [17]);
            }
        }
        arr_84 [i_11] = ((/* implicit */long long int) arr_49 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
    }
    var_39 = var_6;
}
