/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118653
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
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(9218931559557856513ULL)))) ? (arr_8 [i_1] [i_0 + 1]) : (((((/* implicit */_Bool) arr_8 [i_2] [i_0 - 2])) ? (arr_8 [i_1] [i_0 - 3]) : (arr_8 [i_1] [i_0 + 1])))));
                    var_16 = arr_7 [i_0] [i_0] [i_0];
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) ? (var_5) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)(-32767 - 1))))))))) || (((/* implicit */_Bool) max((((/* implicit */short) arr_3 [i_0] [i_0 - 3])), (var_10))))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                {
                    arr_15 [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) (-(((-1LL) + (4207849391727539644LL)))));
                    arr_16 [i_0] [18] [i_3] [(unsigned char)2] &= ((/* implicit */int) ((((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_13 [i_0] [i_0] [i_3] [(unsigned short)21]), (arr_0 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0 - 2] [i_0 - 1]))))) : (max((16873746653020669317ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)36373)), (arr_14 [(short)14] [i_3] [i_3]))))))));
                    arr_17 [(unsigned short)2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) var_13)) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (9227812514151695120ULL)))));
                }
            } 
        } 
        arr_18 [i_0] = ((/* implicit */short) max((((max((((/* implicit */unsigned long long int) var_13)), (var_5))) ^ (((/* implicit */unsigned long long int) arr_7 [i_0 - 3] [i_0 - 3] [i_0 - 2])))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36360))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 1) 
    {
        arr_21 [i_5] = ((/* implicit */int) (~(arr_19 [i_5 - 3])));
        var_17 *= ((/* implicit */unsigned short) arr_20 [i_5]);
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            arr_26 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_20 [i_5])) : ((-(372768112825881112ULL)))));
            var_18 *= ((/* implicit */signed char) -1LL);
            var_19 = (+(((/* implicit */int) (unsigned char)251)));
            arr_27 [i_5] [23ULL] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)54914))));
            arr_28 [i_6] = ((/* implicit */int) (-((-(arr_25 [i_5] [i_6])))));
        }
        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) 
        {
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned short) (~(-1LL)))))));
            var_21 = arr_20 [i_5];
        }
        for (unsigned short i_8 = 0; i_8 < 24; i_8 += 2) 
        {
            arr_35 [i_5 + 1] = ((/* implicit */int) arr_34 [i_5]);
            arr_36 [i_5] |= ((/* implicit */unsigned char) ((unsigned long long int) var_10));
            arr_37 [i_8] [i_5] [i_5] |= ((/* implicit */unsigned int) (unsigned short)36356);
        }
    }
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 11; i_10 += 3) 
        {
            for (int i_11 = 1; i_11 < 10; i_11 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_39 [i_10 + 1])) == (var_9))))) + ((+(6556834492918121936ULL)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_12 = 1; i_12 < 11; i_12 += 2) 
                    {
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (((+(arr_7 [i_9] [16] [i_9]))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_9] [3ULL])))))))))));
                        arr_50 [i_12 + 1] [i_10] [i_12] [i_11 + 1] [i_10] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)54914))))) ? (((/* implicit */int) (unsigned char)14)) : (((/* implicit */int) arr_47 [i_10] [i_10]))));
                    }
                    for (signed char i_13 = 3; i_13 < 10; i_13 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_9))));
                        arr_53 [i_10] [i_9] [i_11] [i_9] = ((/* implicit */long long int) var_2);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            for (unsigned long long int i_15 = 2; i_15 < 9; i_15 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            {
                                arr_65 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))) ? (max(((~(((/* implicit */int) arr_29 [i_14])))), (max((((/* implicit */int) arr_2 [i_14] [21LL])), (var_8))))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9901)) && (((/* implicit */_Bool) min((4207849391727539637LL), (((/* implicit */long long int) (short)32767))))))))));
                                arr_66 [i_9] [i_14] [i_9] [i_14] [i_14] [i_17] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) min((((/* implicit */short) arr_40 [i_14])), (arr_32 [i_16])))), (var_6)))) ? (min((((((/* implicit */_Bool) 9218931559557856513ULL)) ? (arr_60 [2LL] [i_17]) : (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((2335094777U) | (((/* implicit */unsigned int) -2031008526))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_56 [i_14] [i_15 + 2] [i_14]), (arr_56 [i_14] [i_15 - 2] [i_14]))))));
                                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) 2009288708U))));
                                var_26 = ((/* implicit */int) ((min((8026421687422089085ULL), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24765))) : (18446744073709551615ULL))))) > (((/* implicit */unsigned long long int) min((arr_19 [i_15 - 2]), (arr_19 [i_15 + 3]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                    {
                        for (short i_19 = 0; i_19 < 12; i_19 += 4) 
                        {
                            {
                                var_27 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_19 [i_9])))) && (((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned char)3)) < (((/* implicit */int) arr_3 [i_14] [i_14])))))));
                                arr_72 [6ULL] [6ULL] [i_14] [(short)10] [i_19] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_9] [i_18 - 1] [i_19])) + (2147483647))) >> (((((/* implicit */int) var_7)) - (15183))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? ((+(min((var_14), (0LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-58)) : (((/* implicit */int) arr_38 [i_9] [i_9])))))));
                }
            } 
        } 
        arr_73 [i_9] [i_9] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_9] [2] [i_9])) / (var_8))) >= (((((/* implicit */int) (signed char)112)) * (((/* implicit */int) arr_13 [i_9] [i_9] [i_9] [i_9]))))));
    }
    for (unsigned int i_20 = 0; i_20 < 25; i_20 += 4) 
    {
        var_29 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (arr_74 [i_20] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_76 [i_20] [i_20])))))))));
        /* LoopNest 2 */
        for (long long int i_21 = 4; i_21 < 24; i_21 += 2) 
        {
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_12) + (((/* implicit */long long int) ((/* implicit */int) arr_82 [i_20] [11] [11] [11])))))) ? (((/* implicit */unsigned long long int) var_12)) : (((((/* implicit */unsigned long long int) var_9)) ^ (arr_74 [i_22] [(unsigned short)13]))))), (((/* implicit */unsigned long long int) -6550609466658438062LL))));
                    arr_83 [i_22] [17ULL] [17ULL] = ((/* implicit */unsigned char) (unsigned short)7385);
                }
            } 
        } 
        arr_84 [(unsigned char)11] = ((/* implicit */long long int) var_3);
        var_31 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_79 [i_20] [i_20])) ? (arr_74 [i_20] [i_20]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_79 [i_20] [i_20]))))), (((/* implicit */unsigned long long int) var_2))));
    }
    /* LoopSeq 1 */
    for (short i_23 = 1; i_23 < 10; i_23 += 4) 
    {
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) 2363527912991489818ULL)) ? (((/* implicit */int) arr_29 [i_23 + 1])) : (((/* implicit */int) (signed char)37)))) : (((/* implicit */int) ((1LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))))));
        var_33 = ((/* implicit */unsigned int) arr_11 [i_23 + 2] [i_23] [i_23]);
        var_34 = 10042709916420650454ULL;
    }
    var_35 = ((((/* implicit */_Bool) (+(((long long int) (-9223372036854775807LL - 1LL)))))) ? (((int) ((((/* implicit */_Bool) var_2)) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58588)))))) : (((/* implicit */int) (signed char)61)));
    var_36 = ((/* implicit */long long int) var_13);
}
