/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171272
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
    var_18 &= ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_16))))) - ((~(-5396964230341403544LL))))), (((/* implicit */long long int) (~(min((var_2), (((/* implicit */unsigned int) var_16)))))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_2 + 2] [(unsigned char)5]))))))))));
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 1])) ? (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 3])) : (((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 - 3] [i_2 + 1])))))));
                    arr_9 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) max(((-(((/* implicit */int) arr_6 [i_0] [5])))), ((+(((/* implicit */int) arr_7 [i_2] [i_2] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_1] [(unsigned short)6] [(unsigned char)4] [i_1] [i_0] = (-(max((arr_10 [i_2 - 3] [i_2 + 2] [i_2 - 2] [i_3 - 1]), (arr_10 [i_2 + 2] [i_2 + 2] [i_2 - 3] [i_3 - 1]))));
                                var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_10 [i_1] [i_2] [i_3 - 1] [i_2]), (((/* implicit */unsigned int) arr_0 [4LL])))), (arr_3 [i_0] [i_0] [i_3])))) && (((_Bool) min((((/* implicit */unsigned short) arr_11 [i_0] [i_0])), (arr_13 [i_3] [i_4]))))));
                                var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_12 [i_2 + 1] [i_3 - 1] [i_3] [i_3 - 1] [i_4])), ((~(arr_3 [i_2 + 1] [i_3 - 1] [i_3])))));
                                var_22 ^= ((max((min((arr_5 [i_1] [i_4]), (((/* implicit */long long int) arr_11 [i_0] [i_2 - 3])))), (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_0] [(signed char)4]))))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2 + 2])) % (((/* implicit */int) arr_0 [i_2 - 3]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        var_23 ^= ((/* implicit */long long int) max((min((((arr_3 [i_0] [i_1] [i_2]) + (arr_16 [(short)7] [i_2] [i_1] [i_0]))), (((/* implicit */unsigned int) arr_7 [i_2 - 2] [i_2] [i_2 - 3])))), (((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_5] [i_2] [8U] [i_0] [i_0])), (arr_7 [i_5] [i_1] [i_2 - 1])))))))));
                        /* LoopSeq 2 */
                        for (int i_6 = 2; i_6 < 7; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-16)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_6 - 2] [i_6] [i_6 - 1] [i_6] [i_6]))) : ((+(arr_3 [i_2] [i_2] [i_2]))))) + (((arr_16 [i_1] [i_2 - 2] [i_5] [i_1]) / (arr_16 [i_6 - 2] [i_5] [i_2] [i_0])))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_7 [i_2 + 2] [i_2 + 2] [i_6 - 1]))))));
                            var_25 ^= ((/* implicit */long long int) (+((+(((/* implicit */int) (signed char)-5))))));
                            arr_20 [i_0] [i_1] [i_2 + 1] [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) ((unsigned char) arr_6 [i_5] [5LL]))), (arr_16 [i_0] [i_1] [i_1] [i_2 + 2])))) * ((((+(3349631252443348271LL))) / ((-(arr_2 [i_1] [i_1])))))));
                        }
                        for (unsigned char i_7 = 1; i_7 < 6; i_7 += 2) 
                        {
                            var_26 ^= ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_23 [i_0] [i_1] [i_1] [i_2] [i_5] [i_0] = max((((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) (signed char)2)) | (((/* implicit */int) (signed char)-69))))) <= (arr_21 [i_2 - 1] [i_7 - 1] [i_1] [i_0] [(short)2])))), (((((arr_5 [i_0] [(_Bool)0]) | (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5] [i_2]))))) & (((/* implicit */long long int) ((((/* implicit */int) arr_0 [(unsigned short)5])) << (((((/* implicit */int) arr_6 [i_0] [i_0])) - (29101)))))))));
                        }
                        arr_24 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_0] [3LL] [i_1] [(short)5] [i_5]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0] [i_0])), (arr_6 [i_0] [(unsigned char)3])))) : ((+(((/* implicit */int) arr_18 [i_5] [i_5] [4ULL] [i_1] [i_1] [i_0]))))))));
                        arr_25 [i_0] [i_5] [i_2] [i_5] [i_0] &= ((/* implicit */short) (((!(((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2 - 2] [i_2 + 1] [i_5])))) ? (((/* implicit */int) min((arr_12 [i_0] [i_1] [i_0] [i_2] [i_5]), (arr_12 [i_0] [i_0] [i_1] [i_2] [i_5])))) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2 - 1] [i_0] [i_5]))));
                    }
                    /* vectorizable */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 2; i_9 < 7; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_26 [i_9 + 3] [i_0] [i_2] [5LL] [i_2 - 1]))));
                            var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_5 [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_1] [i_1] [i_1]))))))));
                            arr_30 [i_1] [i_1] = ((/* implicit */short) arr_16 [i_8] [i_1] [i_2 + 1] [i_8]);
                        }
                        arr_31 [i_0] [i_1] [i_1] [i_1] [(_Bool)1] [i_1] = ((signed char) arr_28 [i_0] [i_0] [i_2 - 3] [i_8] [i_1]);
                        var_29 = ((/* implicit */short) (~(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_2 + 1] [i_8]))));
                    }
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
        {
            arr_36 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)3])) ? (((/* implicit */int) arr_4 [i_0] [i_10])) : (((/* implicit */int) arr_4 [i_0] [i_10]))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                var_30 *= ((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_0] [i_10] [i_11])) >> (((((/* implicit */_Bool) arr_3 [i_0] [i_11] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_11]))) : (arr_2 [i_0] [i_10])))));
                var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_10] [i_11])) : (((/* implicit */int) arr_7 [i_11] [i_10] [i_0]))));
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 10; i_13 += 1) 
                    {
                        {
                            var_32 -= ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_33 [(unsigned short)4] [i_11] [i_10])))));
                            var_33 = ((/* implicit */long long int) (+((+(((/* implicit */int) (short)-31274))))));
                            arr_45 [i_0] [9LL] [i_11] [i_12] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) (!(arr_41 [i_13] [i_12] [i_11] [(_Bool)0])))) * (((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_0] [i_0])) && (arr_18 [i_0] [i_10] [i_11] [9U] [i_13] [i_13]))))));
                            arr_46 [(_Bool)1] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_41 [i_13] [i_12] [i_11] [i_0]) ? (arr_1 [i_0]) : (((/* implicit */long long int) arr_3 [i_0] [i_11] [i_11])))))));
                            var_34 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_32 [i_0])) ? (arr_3 [i_13] [i_13] [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_12] [i_12] [i_11]))))))));
                        }
                    } 
                } 
                var_35 = ((arr_10 [i_0] [i_10] [i_11] [i_11]) != (arr_10 [i_0] [i_10] [i_11] [i_10]));
            }
            var_36 = ((/* implicit */signed char) ((((/* implicit */int) arr_38 [i_0] [i_10] [(_Bool)1])) & (((/* implicit */int) arr_13 [i_0] [i_10]))));
        }
        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
        {
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_14]))))) - (max((-5396964230341403530LL), (((/* implicit */long long int) 524287U))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                arr_52 [i_0] [i_15] = ((/* implicit */signed char) (+(((/* implicit */int) arr_41 [i_0] [i_14] [i_14] [i_15]))));
                var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_14] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_11 [(unsigned char)3] [i_14])) != (((/* implicit */int) arr_4 [(_Bool)1] [i_15])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_14] [i_14]))) + (arr_42 [i_0] [i_14] [i_15] [i_15])))));
                arr_53 [i_0] [i_0] [i_15] |= ((/* implicit */long long int) ((_Bool) (~(arr_1 [i_0]))));
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) ((((/* implicit */int) ((arr_34 [i_14]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_0] [i_0] [i_0] [(short)4])))))) - ((+(((/* implicit */int) arr_29 [i_14] [(_Bool)1] [i_15])))))))));
            }
        }
        for (unsigned short i_16 = 0; i_16 < 10; i_16 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                var_40 = ((/* implicit */unsigned char) min((var_40), (((/* implicit */unsigned char) ((min(((!(((/* implicit */_Bool) arr_33 [i_0] [7LL] [i_17])))), (arr_38 [i_0] [i_16] [i_0]))) && (((/* implicit */_Bool) min((arr_42 [i_0] [i_16] [i_17] [i_16]), (arr_42 [i_17] [i_16] [i_16] [i_0])))))))));
                var_41 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_44 [i_16] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [(short)0] [i_16]))) : ((+(arr_2 [i_16] [i_17])))))));
                var_42 -= ((/* implicit */_Bool) (-(((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0]))) | (arr_5 [i_17] [(short)6])))));
                var_43 ^= ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_16])))) - ((+(((/* implicit */int) arr_0 [i_16]))))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
            {
                var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_47 [i_18] [i_16] [i_0])), (arr_5 [0U] [i_16])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)98))))) : (((/* implicit */int) ((signed char) arr_16 [i_0] [i_16] [i_0] [i_16])))))) : (arr_16 [i_0] [i_0] [i_16] [i_18])));
                var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+((((_Bool)1) ? (7726492957496869706LL) : (5396964230341403522LL))))))));
                var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) (+(max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_0] [i_16] [i_18]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) | (arr_55 [i_0] [i_16]))))))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
            {
                arr_67 [i_19] = ((/* implicit */unsigned int) ((int) (+(((/* implicit */int) arr_66 [i_19])))));
                var_47 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_43 [(signed char)9] [9U]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_16] [i_16] [i_19]))) : (arr_1 [i_19])))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
            {
                var_48 ^= ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) ((unsigned short) arr_48 [i_0] [i_0]))))));
                var_49 = ((/* implicit */unsigned char) arr_49 [i_0] [i_0] [i_16] [i_20]);
                arr_72 [7ULL] [i_16] = ((/* implicit */short) (-((+(min((arr_16 [i_0] [i_20] [i_20] [(unsigned char)1]), (((/* implicit */unsigned int) arr_63 [i_0] [i_0] [i_20] [i_20]))))))));
            }
            var_50 = ((/* implicit */unsigned short) (~(min((((((/* implicit */int) arr_60 [(_Bool)1] [i_16] [(_Bool)1])) & (((/* implicit */int) arr_7 [i_0] [i_16] [i_16])))), (((/* implicit */int) ((_Bool) arr_33 [i_0] [i_0] [i_0])))))));
        }
    }
    /* vectorizable */
    for (short i_21 = 0; i_21 < 10; i_21 += 2) /* same iter space */
    {
        arr_76 [(_Bool)1] = ((((/* implicit */int) arr_4 [i_21] [i_21])) & ((+(((/* implicit */int) arr_11 [i_21] [i_21])))));
        /* LoopNest 3 */
        for (signed char i_22 = 0; i_22 < 10; i_22 += 2) 
        {
            for (signed char i_23 = 1; i_23 < 7; i_23 += 4) 
            {
                for (unsigned short i_24 = 0; i_24 < 10; i_24 += 1) 
                {
                    {
                        var_51 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_70 [i_21] [i_21] [i_23 - 1] [i_23 + 1]))) != (arr_1 [i_23 + 3])));
                        /* LoopSeq 3 */
                        for (signed char i_25 = 1; i_25 < 8; i_25 += 1) 
                        {
                            var_52 ^= ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_23 + 1] [i_25 - 1]))));
                            var_53 = ((/* implicit */unsigned int) arr_79 [i_23 + 3]);
                            var_54 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967281U))));
                            var_55 = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)147))));
                            var_56 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_60 [i_21] [i_22] [i_23]))));
                        }
                        for (short i_26 = 0; i_26 < 10; i_26 += 2) 
                        {
                            arr_90 [i_21] [i_23] [i_22] [i_23] [i_24] [i_23] = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [(unsigned char)6] [i_23 + 1] [i_23 + 1] [i_22] [i_21])) ^ (((/* implicit */int) arr_62 [i_23 - 1] [i_23 - 1] [i_23]))));
                            var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) (~(-5396964230341403549LL))))));
                            var_58 = ((/* implicit */short) min((var_58), (((/* implicit */short) arr_22 [i_21]))));
                        }
                        for (signed char i_27 = 1; i_27 < 8; i_27 += 3) 
                        {
                            var_59 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_82 [i_27 - 1] [(signed char)2] [i_23 + 2]))));
                            var_60 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_69 [(unsigned short)6] [i_22])) ? ((~(((/* implicit */int) arr_87 [i_21] [7LL] [i_21] [(short)2] [i_21])))) : (((/* implicit */int) ((unsigned short) arr_58 [(unsigned short)6] [(signed char)0] [(unsigned short)6])))));
                        }
                    }
                } 
            } 
        } 
    }
    for (short i_28 = 0; i_28 < 10; i_28 += 2) /* same iter space */
    {
        arr_96 [i_28] |= min(((+(((/* implicit */int) (signed char)-19)))), (((/* implicit */int) arr_47 [i_28] [i_28] [i_28])));
        arr_97 [1U] = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_28] [i_28] [i_28] [i_28]))))), ((-(((/* implicit */int) arr_60 [(signed char)0] [i_28] [(short)0])))))));
        /* LoopSeq 1 */
        for (short i_29 = 2; i_29 < 7; i_29 += 2) 
        {
            var_61 ^= ((/* implicit */signed char) (~(((long long int) arr_39 [i_29] [i_29 + 2] [i_29 + 3] [i_29 + 2]))));
            arr_100 [i_28] [i_29 - 2] [i_29] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) | (-3349631252443348275LL)));
            arr_101 [i_28] [i_28] [(_Bool)1] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_69 [i_29 + 2] [i_28]))))), (((((/* implicit */_Bool) (short)508)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (3758096384U)))));
        }
    }
}
