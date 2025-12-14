/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166518
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */int) (signed char)64)) << (((2010460880U) - (2010460861U)))));
                var_12 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 730179619349620090LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17295))) : (14ULL))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)248)))))));
                var_13 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [0ULL] [i_0] [i_1]))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    arr_11 [i_0] [(unsigned char)7] [i_1] [i_2] |= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0] [i_1])) > (((/* implicit */int) ((short) 2300639322647397755ULL)))));
                    arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_1] [i_2])) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_0] [i_2]))));
                    arr_13 [i_1] [(_Bool)1] [i_2] = (-(((/* implicit */int) (unsigned char)255)));
                }
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    var_14 = ((/* implicit */int) min((((((_Bool) (signed char)66)) ? (((unsigned long long int) (unsigned char)19)) : (arr_0 [i_0]))), (((((unsigned long long int) arr_1 [i_0] [i_1])) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1] [0U])))))))))));
                    var_15 &= ((unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (arr_2 [4LL])))) & (((arr_1 [i_0] [i_1]) >> (((arr_2 [i_0]) - (700221748)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        arr_18 [i_4] [i_4] [i_3] [i_4] [i_3] = ((/* implicit */short) 0);
                        arr_19 [i_4] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) arr_2 [i_0]))) <= (((/* implicit */int) ((arr_14 [i_0]) > (((/* implicit */int) arr_7 [i_0] [i_1])))))));
                        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */unsigned long long int) arr_16 [i_0] [i_1] [i_3] [i_3] [i_3])))))));
                    }
                    for (unsigned short i_5 = 2; i_5 < 7; i_5 += 3) 
                    {
                        arr_22 [i_0] [9] [i_1] = ((/* implicit */short) arr_8 [i_0] [i_0]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            arr_25 [i_0] &= ((/* implicit */short) ((((/* implicit */int) var_5)) <= ((-(((/* implicit */int) arr_15 [i_0] [i_0]))))));
                            arr_26 [i_0] [(signed char)6] [i_3] [i_5 + 2] [i_6] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) & ((~(var_11)))));
                        }
                    }
                    arr_27 [i_3] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_3] [(short)5])) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) (~(arr_24 [i_0] [i_1] [i_0] [i_0] [i_3] [i_3] [i_0]))))))) == (((((/* implicit */_Bool) -1687975820)) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_10 [i_0] [i_1] [i_3] [9ULL]) : (((/* implicit */unsigned long long int) 2410602276U)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_0] [i_3])))))))));
                }
                for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    arr_32 [(unsigned short)5] [i_1] [(short)1] [i_7] = ((((/* implicit */_Bool) 2300639322647397755ULL)) ? (((/* implicit */int) ((arr_16 [(unsigned char)6] [i_1] [i_1] [i_1] [i_1]) <= (arr_16 [i_0] [1LL] [6U] [i_7] [i_7])))) : (((/* implicit */int) var_5)));
                    arr_33 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_24 [i_0] [i_1] [i_0] [i_0] [i_7] [i_0] [i_1])) <= (((var_0) ? (arr_16 [(short)7] [(short)7] [i_7] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [6ULL] [6ULL] [i_7] [i_1])))))))) <= (((((/* implicit */int) var_3)) & (((((/* implicit */_Bool) arr_28 [i_0] [(unsigned char)9] [i_7] [i_0])) ? (((/* implicit */int) (unsigned char)7)) : (arr_28 [i_0] [i_0] [i_0] [3ULL])))))));
                }
                /* LoopSeq 3 */
                for (int i_8 = 1; i_8 < 8; i_8 += 3) 
                {
                    var_17 &= ((/* implicit */unsigned long long int) (-(max((var_11), (((/* implicit */int) arr_37 [5ULL] [i_8 + 1] [i_8 + 2]))))));
                    var_18 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)-60))))));
                    var_19 = ((/* implicit */unsigned short) arr_30 [i_0] [i_1] [(_Bool)1] [i_0]);
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_41 [2] [i_0] [i_1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [(short)4] [i_1] [i_1] [i_9]))) : (arr_39 [(unsigned char)3] [i_1] [i_1] [i_9])));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 2; i_10 < 8; i_10 += 1) 
                    {
                        arr_45 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_42 [i_9] [i_10 + 2] [(unsigned short)6] [(signed char)3])) ? (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_23 [i_10] [0ULL] [0ULL] [(unsigned char)6] [i_10] [0U]))))) : (((/* implicit */int) var_1))));
                        arr_46 [i_0] = arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0];
                        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) arr_3 [i_9]))));
                        var_21 = ((/* implicit */unsigned int) var_8);
                        arr_47 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_9] [i_9] [i_9] [i_10 - 1])) ? (((/* implicit */int) (unsigned short)25326)) : (((((/* implicit */_Bool) arr_21 [(unsigned short)6] [9U] [i_9] [i_10])) ? (((/* implicit */int) arr_36 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_37 [i_0] [i_1] [i_9]))))));
                    }
                    for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) 
                    {
                        arr_50 [1] [i_1] [i_1] [i_1] [(short)0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)7936))));
                        arr_51 [(_Bool)1] [i_1] [i_9] [(unsigned short)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_36 [i_1] [i_11 - 1] [i_1])) : (((/* implicit */int) arr_36 [1] [i_11 - 1] [i_11 - 1]))));
                    }
                    for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_56 [i_12] [(short)9] = ((/* implicit */short) 2305843009213693944LL);
                            arr_57 [i_0] [i_1] [i_9] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_13]) + (((/* implicit */unsigned long long int) arr_49 [i_0] [i_1] [i_9] [(short)2] [i_13] [i_13]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_0] [i_1]))))) : (((((/* implicit */_Bool) (short)18079)) ? (-730179619349620091LL) : (((/* implicit */long long int) 2410602271U))))));
                        }
                        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_14] [i_1])) ? (((((/* implicit */_Bool) arr_20 [9ULL])) ? (((/* implicit */int) arr_21 [(short)9] [(unsigned char)7] [i_9] [i_12])) : (((/* implicit */int) arr_36 [i_0] [i_1] [i_12])))) : (((((/* implicit */int) var_0)) << (((arr_28 [i_0] [i_1] [i_9] [i_14]) - (423727527)))))));
                            var_23 = (!(((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_9] [(signed char)3])));
                        }
                        for (short i_15 = 0; i_15 < 10; i_15 += 3) 
                        {
                            arr_63 [i_0] [i_12] [i_9] [i_12] = ((/* implicit */unsigned char) ((_Bool) arr_34 [i_0] [i_9] [i_9]));
                            var_24 = ((unsigned char) arr_7 [i_12] [i_12]);
                            var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_12]))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_9] [i_12])) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0] [8LL] [i_9] [i_9])))))) : (arr_38 [i_9] [i_0] [i_15])));
                        }
                        var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((((/* implicit */_Bool) var_8)) ? (4665795455358460978LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27536))))) : (((/* implicit */long long int) -443687989))));
                        arr_64 [i_0] [(unsigned char)8] [i_9] [i_9] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)31820)) : (((/* implicit */int) (short)-31836))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_0] [i_1] [i_9])))));
                        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1201326357186806454ULL)) && (((/* implicit */_Bool) -730179619349620091LL))));
                    }
                    var_29 -= ((/* implicit */short) (~(arr_49 [i_0] [i_1] [i_9] [i_1] [i_1] [i_0])));
                    var_30 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [(signed char)6] [i_9] [i_9])) ? (arr_16 [i_0] [i_1] [i_9] [i_9] [i_9]) : (arr_16 [i_0] [i_1] [i_1] [i_1] [i_9])));
                }
                for (short i_16 = 1; i_16 < 8; i_16 += 1) 
                {
                    arr_67 [i_16] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)51))))) ? (arr_20 [i_16]) : (arr_40 [(short)2] [i_16 + 1]))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((((/* implicit */int) var_10)), (arr_49 [i_17] [i_17] [i_17] [5U] [i_17] [i_17])))))) * (((0U) / (((/* implicit */unsigned int) arr_44 [i_16] [i_16] [i_16 + 1] [i_16 - 1] [(unsigned short)2] [i_16]))))));
                        var_32 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_68 [i_1] [i_1] [i_16] [i_17] [i_1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0])) || (((/* implicit */_Bool) max((var_11), (var_11)))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31836))) ^ (1201326357186806454ULL))));
                    }
                    var_33 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) var_2)), (((1578058319U) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [9U] [i_0] [i_0] [i_16] [9U] [i_0] [i_0]))) <= (arr_1 [(unsigned char)9] [(unsigned char)9])))))))));
                }
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (max((var_11), (((/* implicit */int) (short)31820)))) : (((((/* implicit */int) var_8)) | (((/* implicit */int) var_8))))))));
    var_35 ^= ((((((/* implicit */int) var_2)) * (((((/* implicit */int) var_4)) % (((/* implicit */int) var_4)))))) <= (((/* implicit */int) ((((/* implicit */int) var_9)) > (((/* implicit */int) ((unsigned char) var_11)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_18 = 0; i_18 < 11; i_18 += 4) 
    {
        var_36 = ((/* implicit */unsigned char) min((3790936968U), (8388607U)));
        var_37 ^= ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_72 [i_18]))))) ? (min((arr_73 [i_18] [8ULL]), (((/* implicit */unsigned long long int) arr_72 [(_Bool)1])))) : (((arr_72 [(_Bool)1]) ? (arr_73 [0LL] [i_18]) : (arr_73 [i_18] [i_18]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) << (((/* implicit */int) ((arr_72 [i_18]) || (((/* implicit */_Bool) var_1))))))))));
    }
    /* vectorizable */
    for (signed char i_19 = 0; i_19 < 18; i_19 += 3) 
    {
        arr_77 [i_19] = ((/* implicit */_Bool) (signed char)-33);
        arr_78 [i_19] = ((/* implicit */int) ((signed char) arr_75 [i_19]));
    }
    for (unsigned char i_20 = 3; i_20 < 11; i_20 += 1) 
    {
        var_38 = ((/* implicit */int) (short)27731);
        arr_83 [i_20] = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_75 [i_20 - 1])) <= (((/* implicit */int) arr_76 [i_20 - 2] [i_20]))))));
        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_20]))) : ((~(((((/* implicit */_Bool) -730179619349620097LL)) ? (574208952489738240ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)27535)))))))));
        var_40 *= ((/* implicit */unsigned short) ((((/* implicit */int) (((-(((/* implicit */int) arr_75 [i_20 - 1])))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_20] [i_20]))) < (arr_79 [i_20] [i_20 - 2]))))))) > (((((/* implicit */_Bool) arr_80 [i_20 - 2] [(short)12])) ? (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)57)))))) : (((/* implicit */int) (unsigned char)69))))));
        /* LoopNest 3 */
        for (signed char i_21 = 0; i_21 < 13; i_21 += 2) 
        {
            for (short i_22 = 2; i_22 < 10; i_22 += 2) 
            {
                for (unsigned char i_23 = 0; i_23 < 13; i_23 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_24 = 4; i_24 < 11; i_24 += 3) 
                        {
                            arr_96 [i_20] = ((/* implicit */unsigned int) arr_95 [(short)10] [3] [(short)10] [i_23] [i_23] [(short)5] [i_20]);
                            var_41 = ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_95 [i_20] [i_20] [i_21] [i_21] [i_22 - 2] [i_21] [i_20])));
                        }
                        for (unsigned char i_25 = 1; i_25 < 11; i_25 += 2) 
                        {
                            arr_99 [i_25 + 2] [i_21] [i_22] [i_23] [i_22] &= ((/* implicit */int) var_9);
                            var_42 = ((/* implicit */long long int) var_2);
                        }
                        var_43 = ((/* implicit */unsigned char) arr_88 [i_20 + 2] [i_20]);
                        var_44 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_82 [i_20])) && (((/* implicit */_Bool) ((arr_91 [i_20] [(signed char)1] [2U] [i_23] [i_20]) + (9966007203145015174ULL)))))))));
                    }
                } 
            } 
        } 
    }
}
