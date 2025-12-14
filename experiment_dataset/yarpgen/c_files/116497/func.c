/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116497
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
    var_12 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) ((signed char) arr_10 [i_0] [i_2] [i_2] [i_4])))) != (((/* implicit */int) ((unsigned short) var_3)))));
                                arr_13 [i_2] = ((/* implicit */unsigned long long int) 5327408113805445438LL);
                                var_14 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_3] = ((signed char) arr_6 [i_0 + 3]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 4) 
                        {
                            {
                                arr_21 [i_2] = ((/* implicit */signed char) arr_18 [i_2]);
                                var_15 = ((/* implicit */unsigned short) 14911428135095612667ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_24 [i_0 - 1] [i_1] [i_2] [i_2] = var_4;
                        var_16 -= arr_23 [14LL] [(short)1] [i_1] [i_2] [i_2] [i_7];
                    }
                }
            } 
        } 
        arr_25 [i_0] = ((/* implicit */unsigned int) ((long long int) ((signed char) ((-5327408113805445437LL) / (((/* implicit */long long int) ((/* implicit */int) (short)3752)))))));
    }
    for (unsigned short i_8 = 2; i_8 < 15; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 17; i_12 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) (signed char)-55);
                            var_18 = ((/* implicit */short) (unsigned short)19240);
                            var_19 *= ((/* implicit */unsigned short) ((arr_37 [i_8 - 2] [i_9] [i_11 + 1] [i_11] [i_8]) >= (arr_37 [i_8 - 2] [i_9] [i_11 - 1] [i_11] [i_12])));
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) var_3))));
                        }
                        for (short i_13 = 1; i_13 < 15; i_13 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_29 [i_8 - 2] [i_8 - 2] [i_8 + 1]))));
                            var_22 |= ((/* implicit */unsigned short) ((unsigned int) (~(arr_0 [i_9]))));
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_8] [i_11 - 1] [i_10] [i_10] [i_13])) | (((/* implicit */int) arr_17 [i_8 + 1] [i_11 - 1] [i_8 + 1] [i_11] [i_13]))));
                        }
                        for (unsigned long long int i_14 = 4; i_14 < 16; i_14 += 3) 
                        {
                            arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [(unsigned char)13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_8] [i_8] [i_8 - 2] [i_11 - 1] [i_14] [i_14 - 2])) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)19240)) >= (((/* implicit */int) var_0)))))));
                            arr_43 [(signed char)16] [i_8] [(short)9] [i_8] = ((/* implicit */unsigned char) arr_7 [i_8 - 2] [(short)6] [(short)6] [(short)6]);
                            var_24 = ((/* implicit */unsigned short) var_7);
                        }
                        arr_44 [i_11 + 1] [i_8] [i_10] [i_8] [i_8] [i_8 + 1] = ((/* implicit */int) (unsigned short)19240);
                        var_25 += ((/* implicit */_Bool) 3418760400U);
                        arr_45 [i_8] [i_9] [i_9] [i_10] [i_8] [i_11] = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
                        var_26 = ((/* implicit */unsigned char) (-(arr_32 [i_8 + 1] [i_9] [0U] [i_11 - 1])));
                    }
                    for (signed char i_15 = 1; i_15 < 16; i_15 += 3) 
                    {
                        arr_49 [14ULL] [i_9] [i_9] [(signed char)10] [i_9] [i_9] |= ((/* implicit */unsigned long long int) ((unsigned short) (~(((/* implicit */int) var_11)))));
                        /* LoopSeq 3 */
                        for (signed char i_16 = 0; i_16 < 17; i_16 += 1) 
                        {
                            arr_54 [(unsigned char)14] [i_9] [i_8] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)46296));
                            arr_55 [i_8] = ((/* implicit */signed char) ((int) max((((/* implicit */unsigned long long int) var_1)), (var_4))));
                        }
                        /* vectorizable */
                        for (signed char i_17 = 1; i_17 < 15; i_17 += 4) 
                        {
                            var_27 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) arr_4 [i_9] [i_9])) % (((/* implicit */int) arr_20 [i_8] [i_9] [i_10] [i_15 - 1] [i_15 - 1]))))));
                            arr_60 [i_8] [i_8] = ((/* implicit */unsigned int) (-(arr_36 [i_15] [i_15] [i_15] [i_15 + 1] [i_15] [i_8])));
                            var_28 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) arr_8 [i_8] [i_9] [i_10] [i_8] [i_17] [(unsigned char)9])) >= (arr_6 [i_8]))));
                            var_29 += ((/* implicit */unsigned long long int) arr_17 [i_8] [(unsigned short)14] [i_10] [i_15] [i_17]);
                        }
                        /* vectorizable */
                        for (int i_18 = 3; i_18 < 15; i_18 += 4) 
                        {
                            var_30 ^= (+(((long long int) var_0)));
                            arr_64 [i_8] [i_18] [i_8] [1U] [i_18] [i_8] = ((/* implicit */long long int) var_5);
                        }
                        var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_59 [6] [i_9] [i_9] [i_9] [i_9])), (var_4))))))));
                    }
                    for (long long int i_19 = 3; i_19 < 14; i_19 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_20 = 1; i_20 < 15; i_20 += 4) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((short) var_5));
                            var_33 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)46292)) >= (-547697381)));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_8) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))) >= (((unsigned long long int) (unsigned short)19239))))) != (((/* implicit */int) var_6))));
                        }
                        for (unsigned long long int i_21 = 0; i_21 < 17; i_21 += 3) 
                        {
                            var_35 = ((/* implicit */int) ((unsigned long long int) var_8));
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((var_4) != (min((((/* implicit */unsigned long long int) var_10)), (3623085566615920422ULL))))))));
                            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) ((((unsigned long long int) ((arr_0 [i_21]) | (var_8)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46297))))))));
                        }
                        for (signed char i_22 = 0; i_22 < 17; i_22 += 3) 
                        {
                            var_38 = arr_29 [i_8] [i_9] [i_10];
                            var_39 += ((/* implicit */long long int) ((5327408113805445438LL) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)32745))))));
                            arr_76 [i_8] [4ULL] [4ULL] [i_22] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), ((-(var_2)))));
                            var_40 = ((/* implicit */unsigned long long int) (+(min((var_2), (((/* implicit */long long int) (+(((/* implicit */int) var_9)))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned int i_23 = 2; i_23 < 13; i_23 += 1) 
                        {
                            var_41 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((arr_70 [i_19] [i_19] [(signed char)10] [i_19] [i_19 - 1]) - (((/* implicit */int) arr_16 [i_10] [i_19] [i_23 - 1]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_8 + 1] [(unsigned char)4] [i_10]))) & (var_4)))));
                            var_42 |= min((((/* implicit */int) arr_53 [(signed char)2])), (arr_66 [i_8] [i_9] [i_10] [16] [(unsigned char)16]));
                        }
                        /* vectorizable */
                        for (signed char i_24 = 0; i_24 < 17; i_24 += 3) 
                        {
                            var_43 = ((/* implicit */unsigned char) ((arr_0 [i_8 - 1]) != (((/* implicit */long long int) arr_6 [i_8 - 1]))));
                            arr_82 [i_8 - 2] [(unsigned char)0] [i_10] [i_8] [i_19] [i_24] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)21715))) | (arr_36 [4] [i_8] [i_9] [i_10] [i_19] [i_8])));
                        }
                        for (unsigned long long int i_25 = 4; i_25 < 16; i_25 += 1) 
                        {
                            var_44 ^= var_2;
                            var_45 += ((/* implicit */unsigned int) ((_Bool) var_9));
                        }
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_26 = 0; i_26 < 17; i_26 += 1) 
                    {
                        var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_34 [i_8] [2ULL] [4U] [i_26]))));
                        var_47 *= ((/* implicit */unsigned long long int) ((var_10) & (((/* implicit */int) var_6))));
                        arr_88 [i_8] [i_8] [i_10] [6LL] = var_9;
                        arr_89 [i_26] [i_8] [i_26] [i_26] [i_26] [i_26] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) max((((/* implicit */short) var_11)), (var_6)))))));
                    }
                    for (unsigned char i_27 = 0; i_27 < 17; i_27 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */long long int) var_10)) < (arr_36 [i_8 - 1] [i_8] [i_8] [i_8] [i_8 - 1] [i_8]))));
                        /* LoopSeq 1 */
                        for (int i_28 = 1; i_28 < 15; i_28 += 3) 
                        {
                            arr_97 [i_8] [i_28 + 1] [i_27] [i_10] [i_9] [i_8] [i_8] = ((/* implicit */int) (unsigned short)19240);
                            var_49 ^= ((/* implicit */unsigned char) var_7);
                        }
                    }
                    var_50 *= ((/* implicit */unsigned int) 5327408113805445440LL);
                }
            } 
        } 
        var_51 *= ((/* implicit */unsigned int) ((int) ((long long int) ((arr_51 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
        var_52 ^= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) arr_37 [i_8 - 1] [i_8] [i_8 + 2] [i_8] [i_8 - 1])) ? (max((var_2), (((/* implicit */long long int) var_11)))) : (((((/* implicit */_Bool) (unsigned short)19264)) ? (((/* implicit */long long int) 664137491U)) : (542546936409301101LL))))));
        var_53 = ((/* implicit */short) (-(((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (arr_63 [i_8] [i_8] [i_8] [i_8] [i_8])))))));
    }
    var_54 &= ((/* implicit */unsigned int) ((var_2) | (((/* implicit */long long int) var_5))));
}
