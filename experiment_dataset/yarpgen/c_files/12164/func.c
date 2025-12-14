/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12164
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
    var_10 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) var_4)), (min((var_7), (((/* implicit */long long int) var_6))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 8; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                {
                    {
                        arr_8 [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */int) (unsigned char)56)), (1)));
                        arr_9 [i_1] [i_2] [i_2] [(unsigned short)2] [i_1 + 1] [i_3] |= ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_2] [i_3]);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                for (short i_5 = 2; i_5 < 8; i_5 += 2) 
                {
                    for (unsigned short i_6 = 0; i_6 < 10; i_6 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) max((arr_16 [i_0]), (((/* implicit */unsigned short) max((arr_4 [i_0 - 1] [i_1 + 1]), (arr_14 [i_0] [i_1] [i_4] [i_5 - 2] [(unsigned short)0] [i_6])))))))));
                            var_12 = ((/* implicit */unsigned int) max((max((arr_13 [i_0 - 1]), (arr_1 [i_1]))), (((/* implicit */unsigned short) arr_15 [i_6] [i_5 - 1] [i_1 - 1] [i_1] [i_0] [i_0]))));
                            arr_17 [i_0] [i_6] [i_4] [i_6] [i_6] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) min((arr_5 [i_0 - 1] [i_1 + 1] [i_4] [i_1 + 2]), (max((arr_5 [i_0 - 1] [i_1 - 1] [i_4] [i_1 + 2]), (arr_5 [i_0 - 1] [i_6] [i_4] [i_1 + 2])))));
                            arr_18 [i_0] [i_1 + 2] [i_1] [i_4] [i_5 + 2] [i_6] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_5 [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1])), (arr_0 [i_0 - 1] [i_5 + 2])));
                            var_13 = ((/* implicit */_Bool) arr_7 [i_5] [i_5 + 2] [i_5] [i_5 - 1]);
                        }
                    } 
                } 
            } 
            arr_19 [i_0] [i_0 - 1] [i_0] = ((/* implicit */short) max((arr_7 [i_0] [i_0] [i_1 - 1] [i_1 + 2]), (arr_13 [i_0])));
        }
        for (long long int i_7 = 1; i_7 < 8; i_7 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) arr_11 [i_0] [i_7 - 1] [i_0] [i_0 - 1]))));
            arr_22 [i_0 - 1] [i_7] [i_7] = ((/* implicit */short) max((arr_3 [(short)8] [i_0 - 1] [i_7 + 2]), (max((arr_3 [i_7] [i_0 - 1] [i_7 + 1]), (arr_3 [i_0] [i_0 - 1] [i_7 - 1])))));
        }
        arr_23 [i_0 - 1] = ((/* implicit */unsigned int) max((max((arr_10 [i_0 - 1]), (arr_1 [i_0 - 1]))), (arr_10 [i_0 - 1])));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) min((arr_26 [i_0] [i_0 - 1]), (((/* implicit */unsigned short) max((arr_14 [i_0 - 1] [i_0 - 1] [i_8] [i_8] [i_0] [i_8]), (arr_14 [i_0] [i_0 - 1] [i_0] [i_8] [i_0 - 1] [i_0 - 1]))))));
            var_16 *= ((/* implicit */unsigned int) max((max((arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]), (arr_25 [i_0 - 1] [9] [i_8]))), (((/* implicit */long long int) arr_10 [i_0 - 1]))));
            var_17 -= ((/* implicit */short) max((arr_25 [i_0 - 1] [i_0 - 1] [i_0]), (arr_25 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
            /* LoopSeq 1 */
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    for (unsigned int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        {
                            arr_37 [i_11] [i_10] [i_9] [i_8] [i_0] = ((/* implicit */_Bool) arr_28 [i_9] [i_10] [i_11]);
                            var_18 = ((/* implicit */short) arr_28 [i_0 - 1] [i_0 - 1] [i_0]);
                            arr_38 [i_11] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_10 [i_0 - 1])), (min((((/* implicit */unsigned long long int) arr_25 [i_10] [i_10] [i_0 - 1])), (arr_28 [i_11] [i_10] [i_0 - 1])))));
                            var_19 = ((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0 - 1]), (max((arr_0 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0 - 1] [i_0 - 1] [6U]))))));
                            var_20 = ((/* implicit */_Bool) max((min((arr_15 [i_0] [i_8] [i_9] [i_10] [i_10] [i_9]), (arr_15 [i_0] [i_8] [i_8] [i_9] [i_10] [i_11]))), (max((arr_15 [i_11] [i_10] [i_10] [i_9] [i_8] [i_0 - 1]), (arr_15 [(short)1] [i_8] [(short)1] [i_10] [i_10] [i_11])))));
                        }
                    } 
                } 
                arr_39 [i_0] [i_8] [i_8] [i_8] |= ((/* implicit */long long int) arr_27 [i_0] [i_8]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    var_21 |= ((/* implicit */short) arr_30 [i_9] [i_0 - 1] [i_0]);
                    /* LoopSeq 3 */
                    for (short i_13 = 0; i_13 < 10; i_13 += 2) 
                    {
                        var_22 = ((/* implicit */short) arr_42 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                        var_23 = ((/* implicit */unsigned int) arr_10 [i_13]);
                        var_24 = ((/* implicit */unsigned int) arr_12 [i_0 - 1] [i_12] [i_9] [i_12]);
                    }
                    for (short i_14 = 2; i_14 < 8; i_14 += 2) 
                    {
                        arr_50 [i_0 - 1] [i_8] [i_9] [i_12] [i_14 - 1] [i_14] = ((/* implicit */unsigned short) arr_48 [i_14 - 2] [i_8] [i_8] [i_0 - 1] [i_8]);
                        arr_51 [i_0] [i_8] [i_9] [i_9] [9LL] [i_14] = ((/* implicit */unsigned long long int) arr_20 [i_0 - 1] [i_8]);
                        arr_52 [i_0] [i_8] [i_9] [i_9] [i_14 + 2] [i_14] [i_14] = ((/* implicit */int) arr_2 [i_0 - 1] [7ULL] [i_14 - 1]);
                        var_25 = ((/* implicit */unsigned short) arr_29 [i_0 - 1] [i_8] [i_8] [i_8] [i_14 - 2]);
                        var_26 = ((/* implicit */unsigned short) arr_33 [i_0] [i_14 + 2] [i_9] [i_12] [i_0 - 1] [i_0]);
                    }
                    for (short i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_27 &= ((/* implicit */int) arr_30 [i_9] [i_12] [i_15]);
                        arr_55 [i_0] [i_0] [i_9] [i_12] [i_15] = ((/* implicit */unsigned char) arr_47 [i_0 - 1]);
                        arr_56 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_44 [i_0] [i_0] [i_0] [i_0 - 1] [i_0]);
                        var_28 += ((/* implicit */unsigned short) arr_27 [i_0 - 1] [i_15]);
                    }
                }
            }
        }
    }
    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 2) 
    {
        arr_60 [(short)0] = ((/* implicit */_Bool) arr_57 [i_16]);
        arr_61 [i_16] = ((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), (20))), (((/* implicit */int) arr_57 [(_Bool)1]))));
        var_29 = max((arr_57 [i_16]), (max((arr_59 [i_16]), (arr_57 [i_16]))));
        var_30 = ((/* implicit */signed char) arr_57 [i_16]);
        var_31 ^= ((/* implicit */unsigned int) min((min((arr_59 [i_16]), (arr_59 [i_16]))), (max(((short)32761), (arr_58 [i_16])))));
    }
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 22; i_17 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) arr_64 [i_17] [i_17]);
        arr_66 [i_17] = ((/* implicit */int) arr_62 [i_17]);
        var_33 *= arr_62 [i_17];
        var_34 = ((/* implicit */_Bool) arr_65 [(short)9]);
        /* LoopNest 3 */
        for (short i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            for (short i_19 = 0; i_19 < 22; i_19 += 2) 
            {
                for (short i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 22; i_21 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned char) arr_72 [i_17] [i_18]);
                            var_36 -= ((/* implicit */short) arr_62 [i_20]);
                        }
                        arr_80 [i_17] [i_18] [i_19] [i_20] [i_20] [i_20] = ((/* implicit */unsigned int) arr_74 [i_17] [i_18] [i_19] [i_19] [i_20] [i_20]);
                        arr_81 [i_17] [i_18] [i_19] [i_20] = ((/* implicit */int) arr_67 [i_17] [i_20]);
                        var_37 = arr_79 [i_17] [i_18] [i_18] [i_19] [i_20];
                        var_38 = ((/* implicit */int) arr_71 [i_20] [i_19] [i_17]);
                    }
                } 
            } 
        } 
    }
    var_39 |= var_9;
    var_40 = ((/* implicit */short) var_4);
}
