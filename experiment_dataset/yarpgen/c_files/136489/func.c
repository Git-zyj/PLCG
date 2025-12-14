/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136489
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
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 7; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0]))))), (var_15)));
                            arr_12 [i_0] [i_2] [5ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)0))))), (13823289212856417275ULL)))) ? (min((var_18), ((~(arr_7 [i_0]))))) : (((/* implicit */unsigned int) (~(arr_5 [i_0]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 9; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_22 [(_Bool)1] [i_5] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_4 [i_0] [9U] [i_0]))))))));
                                var_21 = ((/* implicit */int) min((13823289212856417275ULL), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)180)) | (arr_9 [i_0] [(signed char)7] [i_4] [i_4] [i_5 - 1] [i_6]))))))));
                                arr_23 [i_6] [9LL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(arr_3 [2])));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) ((int) max((arr_21 [i_0] [i_0]), (((/* implicit */unsigned int) arr_9 [(short)4] [(short)2] [(_Bool)1] [i_0] [i_0] [i_0])))));
            }
        } 
    } 
    var_23 ^= ((/* implicit */unsigned int) 4623454860853134351ULL);
    /* LoopNest 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned char i_8 = 1; i_8 < 7; i_8 += 3) 
        {
            for (unsigned int i_9 = 4; i_9 < 8; i_9 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 4; i_10 < 8; i_10 += 1) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_36 [i_10] [i_10] [i_9 - 3] [i_10] [8ULL] = ((/* implicit */short) (+(((((13823289212856417255ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_18 [(unsigned char)0] [(unsigned char)0] [(unsigned char)0] [i_10] [i_11]))))))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (-(((((/* implicit */_Bool) max((13607213415024167886ULL), (((/* implicit */unsigned long long int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) min((arr_6 [(_Bool)1] [i_9] [i_7] [i_7]), (((/* implicit */int) (short)23629))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) + (arr_15 [8ULL] [i_9 + 2] [(signed char)6]))))))))));
                                arr_37 [i_10] [(short)9] [i_10 - 1] [i_10 - 1] = ((/* implicit */signed char) (-(((arr_11 [i_8 + 1] [i_8 + 3] [i_10] [i_9 - 2]) * (((/* implicit */unsigned int) arr_4 [(_Bool)1] [i_8 + 2] [i_10]))))));
                                arr_38 [i_7] [5ULL] [i_9] [i_10] [(_Bool)1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_0 [i_9 - 3]), (arr_2 [(short)8] [0ULL])))) ? ((~(822237056723489258LL))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_30 [(unsigned short)9])), (var_8))))))) == (((/* implicit */long long int) ((/* implicit */int) (short)32767)))));
                                arr_39 [i_10] [i_10] [(unsigned char)5] [i_10] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) 13607213415024167886ULL)) ? (arr_11 [i_7] [(unsigned char)7] [i_10] [i_11]) : (((/* implicit */unsigned int) var_0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 9; i_13 += 1) 
                        {
                            {
                                arr_46 [6U] [0U] [0U] [i_12] [0U] = ((unsigned short) (unsigned char)56);
                                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_18 [i_13] [4ULL] [i_9 - 2] [4ULL] [i_7])), (var_16))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_44 [i_7] [i_8] [7] [0ULL] [i_8])) - (((/* implicit */int) (short)26183)))))))) ? (((/* implicit */int) ((_Bool) (short)32767))) : (((/* implicit */int) arr_20 [i_8])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 9; i_14 += 2) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
                        {
                            {
                                arr_51 [i_14] [i_14 + 1] [i_14] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) arr_9 [i_15] [5U] [6U] [i_9 + 2] [i_8] [i_7])) - (1291039795U)))))), (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_8 + 1] [i_8 + 1]))) / (13823289212856417251ULL))), (((/* implicit */unsigned long long int) ((3003927501U) >= (1226298482U))))))));
                                arr_52 [i_14] [(signed char)1] [i_8 + 3] [i_14] = ((/* implicit */int) var_5);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((18446744073709551602ULL) << (((/* implicit */int) ((((((/* implicit */_Bool) arr_27 [i_8] [i_9 - 4] [i_16])) ? (((/* implicit */int) arr_18 [i_16 + 1] [(signed char)2] [i_9] [(signed char)2] [i_7])) : (((/* implicit */int) arr_32 [i_16] [i_9] [i_8] [i_8 + 3] [(unsigned char)9] [i_7])))) == (((/* implicit */int) (_Bool)0))))))))));
                        arr_55 [i_16] [i_9] [1U] [i_7] [i_16] = ((/* implicit */long long int) (((~(2148425847U))) == (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_8 [(signed char)6] [i_8 + 3] [i_7])) ? (-1705649006) : (arr_26 [i_16 + 1]))) - (((/* implicit */int) ((((/* implicit */int) arr_44 [4ULL] [i_7] [4ULL] [i_7] [7U])) <= (((/* implicit */int) (unsigned short)25873))))))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 10; i_17 += 3) /* same iter space */
                    {
                        arr_58 [i_17] [5ULL] [i_8 + 2] [i_17] = ((/* implicit */unsigned int) (-((-(2147483620)))));
                        arr_59 [i_7] [i_17] [i_17] = ((/* implicit */int) ((9223372036854775794LL) >= (((/* implicit */long long int) ((514021597U) - (((unsigned int) (-2147483647 - 1))))))));
                        arr_60 [i_17] [i_9 - 2] [i_17] [i_17] [(unsigned char)3] [i_7] = ((/* implicit */unsigned short) ((short) ((unsigned int) arr_8 [0LL] [i_8 - 1] [i_8 + 2])));
                        var_27 = ((/* implicit */unsigned int) arr_30 [2U]);
                    }
                    for (unsigned int i_18 = 0; i_18 < 10; i_18 += 3) /* same iter space */
                    {
                        var_28 = (unsigned char)207;
                        /* LoopSeq 2 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_41 [6U] [i_8 + 1] [(short)2]), (((/* implicit */unsigned int) arr_49 [i_19] [i_18] [(unsigned char)2] [i_8 + 2] [i_7] [i_8 + 2] [i_7]))))) + (min((((/* implicit */unsigned long long int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_7))))), ((((_Bool)1) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) 2147483620))))))));
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (((+(max((2147483610), (((/* implicit */int) arr_42 [i_19] [i_19] [i_8 + 1] [i_9 + 1] [i_9 - 3] [i_8 + 1] [i_7])))))) != (((arr_8 [i_8 + 3] [i_8 + 3] [i_9 + 1]) ^ (((/* implicit */int) arr_48 [i_9 + 2] [i_9 + 2] [i_9] [i_18])))))))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                        {
                            arr_67 [(signed char)7] [i_18] [i_9 - 1] [i_9] [(signed char)0] [i_7] [i_7] = ((/* implicit */_Bool) 9713247150450146281ULL);
                            arr_68 [i_7] [i_8] [i_9] [(_Bool)1] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12106))) : (arr_3 [i_7]))) >> (((((((/* implicit */int) (unsigned char)0)) | (arr_6 [(_Bool)1] [i_8] [5] [2U]))) - (767811902)))))) ? (((((/* implicit */int) arr_49 [(unsigned short)0] [i_8 + 2] [i_9 + 1] [i_9 - 4] [i_18] [i_20] [i_20])) % (((/* implicit */int) arr_49 [i_7] [i_8] [i_9 - 1] [i_18] [i_18] [i_20] [i_20])))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            var_31 = ((/* implicit */unsigned int) (+(12385993800998397818ULL)));
                            var_32 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_9] [6U])) ? (max((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))))), (arr_66 [9LL] [i_7]))) : (((/* implicit */unsigned int) max((arr_9 [i_8 + 1] [i_8 + 3] [1] [(unsigned char)0] [i_9 - 3] [(_Bool)0]), (arr_9 [i_8 + 2] [i_8 + 2] [5LL] [i_8 + 2] [i_9 - 3] [i_20]))))));
                            arr_69 [i_9 + 1] [1ULL] [1ULL] = ((/* implicit */long long int) arr_8 [i_8 + 3] [i_8 - 1] [i_8 - 1]);
                        }
                    }
                    arr_70 [4] = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (~(18446744073709551593ULL)))))), (var_13)));
                }
            } 
        } 
    } 
}
