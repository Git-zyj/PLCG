/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166183
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166183 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166183
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
    var_12 = (signed char)68;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 -= ((/* implicit */signed char) (+(((/* implicit */int) (signed char)85))));
                                arr_18 [i_0] [(signed char)1] [i_0] |= (signed char)-114;
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 2) 
                    {
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */int) (signed char)14)), ((+(((/* implicit */int) var_4)))))))));
                        var_15 ^= (signed char)85;
                        /* LoopSeq 3 */
                        for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            arr_25 [i_0] [(signed char)1] [i_2] [i_5] = (signed char)7;
                            arr_26 [i_0] [i_0] [(signed char)6] [(signed char)15] [i_0] = (signed char)-69;
                            var_16 = ((/* implicit */signed char) min((var_16), ((signed char)-34)));
                            var_17 = max(((signed char)-68), ((signed char)-10));
                        }
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            var_18 -= arr_22 [i_1] [i_2] [i_2] [i_7];
                            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-67))))) ? (((((/* implicit */int) var_1)) >> (((/* implicit */int) (signed char)10)))) : (((/* implicit */int) (signed char)86))));
                            var_20 = var_2;
                            var_21 = var_3;
                        }
                        for (signed char i_8 = 2; i_8 < 15; i_8 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)126)), (((((/* implicit */_Bool) (signed char)88)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (signed char)119))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_8 + 2] [i_8 + 2] [i_8 + 2] [i_8])) >= ((-(((/* implicit */int) arr_2 [i_5]))))))) ^ ((((((+(((/* implicit */int) (signed char)-113)))) + (2147483647))) << (((((((/* implicit */int) var_11)) + (((/* implicit */int) (signed char)67)))) - (55)))))));
                            var_24 *= arr_23 [(signed char)15] [i_1] [(signed char)14] [i_1] [(signed char)14] [(signed char)15];
                            var_25 = ((/* implicit */signed char) min((var_25), (var_9)));
                            var_26 += arr_15 [(signed char)10] [(signed char)13] [(signed char)13];
                        }
                        var_27 *= ((signed char) arr_19 [i_0] [i_0] [i_0] [(signed char)16] [i_0] [i_0]);
                    }
                    for (signed char i_9 = 1; i_9 < 13; i_9 += 2) 
                    {
                        arr_34 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) max(((signed char)-121), (var_4)))) ? (((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) (signed char)95)))) : (((/* implicit */int) (signed char)-111)))) : (((/* implicit */int) (signed char)64))));
                        var_28 = ((/* implicit */signed char) min((var_28), (arr_31 [i_0])));
                        /* LoopSeq 3 */
                        for (signed char i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_2] [i_2])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-53)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)-98))))) ? (((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) (signed char)126)))) : (((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */int) (signed char)113)) : (((/* implicit */int) (signed char)-123)))))))))));
                            arr_38 [i_10] [(signed char)6] [i_10] [i_9] [i_10] = ((signed char) (signed char)67);
                        }
                        for (signed char i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) max((var_30), ((signed char)-13)));
                            var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_36 [i_0] [i_9 - 1] [i_9 + 1])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_2])))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_1]))))) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [(signed char)10] [(signed char)10] [(signed char)3]))))))))))));
                        }
                        for (signed char i_12 = 0; i_12 < 17; i_12 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)8))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) var_6))))));
                            var_33 = (signed char)123;
                        }
                        arr_44 [i_0] [i_0] [i_0] [i_2] &= var_11;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_13 = 2; i_13 < 15; i_13 += 4) 
                        {
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_28 [i_0] [i_1] [i_2] [i_9] [i_13] [(signed char)3]))));
                            var_35 ^= ((signed char) ((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (signed char)56)) : (((/* implicit */int) (signed char)-126))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 17; i_14 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_29 [(signed char)14] [i_14] [(signed char)6] [i_0] [i_1] [i_0]))));
                        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (signed char)87))));
                    }
                    var_38 = ((/* implicit */signed char) min((var_38), (var_3)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        arr_53 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */int) ((signed char) (signed char)86))) : (((/* implicit */int) arr_36 [(signed char)7] [(signed char)7] [(signed char)8]))));
                        var_39 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) arr_40 [i_0] [i_1] [i_1] [(signed char)8] [(signed char)6] [i_1])) != (((/* implicit */int) (signed char)107))))) < (((/* implicit */int) arr_39 [i_0] [i_1] [i_2]))));
                        arr_54 [i_15] [i_2] [i_2] [i_1] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_28 [i_15] [i_2] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */int) (signed char)-114))));
                        var_40 = ((/* implicit */signed char) max((var_40), (((signed char) ((((/* implicit */_Bool) arr_22 [(signed char)1] [(signed char)1] [i_1] [(signed char)1])) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)-82)))))));
                    }
                }
                for (signed char i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    var_41 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) var_8)))))) <= (((/* implicit */int) ((signed char) var_6)))));
                    var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-124)) / (((/* implicit */int) (signed char)124))))) ? (((((((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_16] [i_1] [(signed char)12])) * (((/* implicit */int) (signed char)18)))) * (((/* implicit */int) (signed char)41)))) : (((/* implicit */int) arr_23 [(signed char)2] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    arr_57 [i_1] = (signed char)7;
                }
                /* LoopSeq 2 */
                for (signed char i_17 = 1; i_17 < 16; i_17 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_18 = 2; i_18 < 16; i_18 += 3) 
                    {
                        arr_64 [i_0] [i_0] [i_0] [i_0] |= (signed char)40;
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_19 = 1; i_19 < 13; i_19 += 1) 
                        {
                            var_43 -= (signed char)-57;
                            arr_67 [i_0] [i_0] [i_0] [i_0] [i_0] &= var_1;
                        }
                        for (signed char i_20 = 2; i_20 < 16; i_20 += 1) 
                        {
                            arr_70 [i_0] [i_0] [i_0] [(signed char)11] [i_20] [i_0] [i_0] = (signed char)127;
                            arr_71 [i_20] = (signed char)-19;
                            arr_72 [i_0] [i_1] [i_20] [i_1] [i_1] [(signed char)15] = var_11;
                            arr_73 [i_18] [i_0] &= arr_50 [(signed char)14] [(signed char)14] [(signed char)14] [(signed char)14];
                        }
                        for (signed char i_21 = 3; i_21 < 16; i_21 += 2) 
                        {
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) (signed char)-82))))) : (((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */int) (signed char)-122)) : (((/* implicit */int) var_7))))));
                            var_45 *= (signed char)-20;
                        }
                        for (signed char i_22 = 0; i_22 < 17; i_22 += 3) 
                        {
                            var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) arr_8 [i_18 - 1] [i_1] [i_1] [i_17 - 1]))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)22))))))))));
                            var_47 += ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-89))));
                            var_48 = ((/* implicit */signed char) min((var_48), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_18 + 1] [(signed char)7] [i_17 + 1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)-15))))) ? (((/* implicit */int) max(((signed char)15), ((signed char)(-127 - 1))))) : (((/* implicit */int) min((arr_62 [i_18 - 1] [(signed char)11] [i_17 + 1]), (arr_62 [i_18 - 1] [i_18 - 1] [i_17 + 1])))))))));
                        }
                    }
                    for (signed char i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        var_49 = ((/* implicit */signed char) min((var_49), ((signed char)99)));
                        /* LoopSeq 1 */
                        for (signed char i_24 = 0; i_24 < 17; i_24 += 2) 
                        {
                            var_50 = ((/* implicit */signed char) min((var_50), (((/* implicit */signed char) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_51 [i_0] [i_17] [i_23] [i_0])) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) arr_68 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) != (((/* implicit */int) ((((/* implicit */int) arr_23 [i_17] [(signed char)6] [i_17] [i_17 - 1] [i_17 - 1] [i_17 + 1])) > (((/* implicit */int) (signed char)98))))))))));
                            var_51 = ((/* implicit */signed char) min((var_51), ((signed char)125)));
                            var_52 = var_1;
                            arr_86 [i_24] [i_23] [(signed char)6] [(signed char)6] [i_1] [i_0] = (signed char)(-127 - 1);
                            var_53 = ((/* implicit */signed char) min((var_53), ((signed char)-61)));
                        }
                    }
                    for (signed char i_25 = 2; i_25 < 16; i_25 += 1) 
                    {
                        arr_89 [i_0] [(signed char)14] [i_1] [i_17] [i_25] [i_25] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-12)) ^ (((/* implicit */int) (signed char)-33))))) ? (((/* implicit */int) arr_40 [i_25] [(signed char)12] [(signed char)12] [i_25] [i_0] [i_25])) : (((((/* implicit */_Bool) arr_56 [(signed char)16] [i_1] [(signed char)16] [i_25])) ? (((/* implicit */int) (signed char)-22)) : (((/* implicit */int) (signed char)84)))))) >= (((/* implicit */int) var_10))));
                        var_54 *= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)33)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-91)))), (((((/* implicit */int) (signed char)93)) | (((/* implicit */int) (signed char)99))))))) ? (((((/* implicit */_Bool) arr_19 [i_0] [(signed char)9] [i_0] [i_0] [(signed char)9] [i_0])) ? (((/* implicit */int) arr_9 [i_25 + 1] [i_25 - 2] [i_17 - 1] [i_17 - 1])) : (((/* implicit */int) (signed char)96)))) : (((/* implicit */int) (signed char)-57))));
                        var_55 = ((/* implicit */signed char) min((var_55), (var_3)));
                    }
                    for (signed char i_26 = 0; i_26 < 17; i_26 += 3) 
                    {
                        var_56 = (signed char)49;
                        var_57 = (signed char)63;
                    }
                    /* LoopNest 2 */
                    for (signed char i_27 = 0; i_27 < 17; i_27 += 1) 
                    {
                        for (signed char i_28 = 1; i_28 < 14; i_28 += 1) 
                        {
                            {
                                var_58 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) arr_10 [i_28 + 2] [i_17 - 1] [i_1])) ? (((/* implicit */int) (signed char)-100)) : (((/* implicit */int) (signed char)-122)))) : (((((/* implicit */int) arr_49 [i_28 + 3] [i_28 + 3] [i_28] [i_28] [i_28 + 3] [(signed char)14])) ^ (((/* implicit */int) (signed char)-110))))));
                                var_59 &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [(signed char)13] [(signed char)13] [i_27] [(signed char)10])) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) var_2))));
                                arr_98 [i_1] [i_27] [(signed char)15] [i_28] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-19))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_29 = 2; i_29 < 16; i_29 += 1) 
                    {
                        arr_101 [i_0] [i_0] [i_17 + 1] = ((signed char) (signed char)-9);
                        var_60 += (signed char)-18;
                    }
                }
                /* vectorizable */
                for (signed char i_30 = 1; i_30 < 14; i_30 += 4) 
                {
                    var_61 = (signed char)-96;
                    var_62 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) (signed char)-33)) : (((/* implicit */int) (signed char)-69))))) ? (((/* implicit */int) ((signed char) var_5))) : (((/* implicit */int) ((signed char) arr_17 [i_30] [i_1] [i_30 + 3] [(signed char)2] [i_1] [i_0])))));
                    var_63 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)53)) ? (((/* implicit */int) (signed char)121)) : (((/* implicit */int) (signed char)61))));
                }
            }
        } 
    } 
    var_64 = ((/* implicit */signed char) min((var_64), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) (signed char)-4))) ? ((~(((/* implicit */int) var_9)))) : (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) var_4)))))));
}
