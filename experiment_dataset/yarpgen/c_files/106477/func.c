/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106477
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 12; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((unsigned int) (-(((((/* implicit */int) var_10)) / (((/* implicit */int) (unsigned short)15058))))))))));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        arr_10 [11LL] [i_1] [i_2] [i_2] [i_3] [i_3] = max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) max((8629066060550721204ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_3])))))))), (((((var_6) || (((/* implicit */_Bool) arr_5 [i_0 - 1] [(signed char)5] [i_3])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [(unsigned short)1])))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_5 [i_3] [i_2] [i_0])), (arr_7 [i_0 + 2])))) != (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3] [i_3]))))) * (((/* implicit */int) var_6))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((int) 4294967295U)))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 12; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) (unsigned short)23157);
                        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max(((-(((/* implicit */int) ((var_9) != (((/* implicit */long long int) 0))))))), (max((((/* implicit */int) arr_13 [i_0] [i_1] [(unsigned short)0] [i_4] [i_0] [i_1])), ((-(((/* implicit */int) var_6)))))))))));
                        var_22 = ((/* implicit */unsigned int) (~(((var_15) & (((/* implicit */int) var_4))))));
                        arr_15 [i_2] [i_0] |= ((/* implicit */short) 2046173534U);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        arr_18 [i_0] [i_1] [6U] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_14 [i_0 + 2] [i_1] [i_1] [i_2 - 1])))));
                        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((arr_0 [i_5]), (max((max((((/* implicit */unsigned long long int) arr_3 [12U] [12U] [i_2 + 1])), (arr_0 [i_0]))), (((/* implicit */unsigned long long int) arr_14 [i_0 - 2] [(signed char)5] [10ULL] [i_5])))))))));
                        var_24 += ((/* implicit */unsigned short) (+(min((((((/* implicit */int) arr_7 [i_0])) >> (((((/* implicit */int) (short)5126)) - (5117))))), (((/* implicit */int) arr_5 [i_0 - 1] [i_1] [i_2]))))));
                    }
                    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((((/* implicit */int) max((((/* implicit */short) var_1)), (var_16)))) == (((/* implicit */int) (_Bool)0)))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) arr_11 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0] [i_2 - 1] [i_2 - 1]))))))))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_26 ^= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)0)), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) % (((long long int) arr_4 [i_6] [i_2]))))));
                                var_27 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_7 - 1] [i_7] [1LL] [i_7])) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_7 + 3] [i_7 - 2] [4U] [i_7])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_7 - 2] [i_7] [i_7 - 2] [i_7])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])) : (arr_16 [i_0 - 2] [i_1] [i_2 - 1] [(signed char)2] [i_6] [(signed char)0])))) ? (((/* implicit */int) max((((/* implicit */short) arr_8 [i_0] [i_1] [12LL] [i_6] [12LL])), (var_16)))) : (arr_22 [i_7 + 2] [i_7 + 3] [i_2 + 1] [i_0 + 2])))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) min((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 1])) >> (((((/* implicit */int) arr_6 [i_0 + 2] [i_0] [i_0 - 1])) - (5))))), (((((/* implicit */_Bool) arr_6 [(_Bool)1] [i_0] [i_0 + 2])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_6 [(unsigned short)10] [i_0] [i_0 - 2])))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (short i_8 = 3; i_8 < 19; i_8 += 4) 
    {
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_26 [i_8] [i_8 - 3]))) ? (arr_26 [i_8 - 2] [i_8 + 1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) arr_25 [i_8])) : (((/* implicit */int) var_14)))))))) : (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8 - 2]))) : (14133478758929172093ULL))), (((/* implicit */unsigned long long int) ((signed char) arr_25 [i_8]))))))))));
        var_30 = max((((((/* implicit */_Bool) arr_26 [i_8 + 1] [i_8 + 2])) ? (arr_26 [i_8 + 2] [i_8 + 2]) : (arr_26 [i_8 - 1] [i_8 - 2]))), (((/* implicit */long long int) 0)));
        var_31 = ((unsigned int) min((arr_26 [i_8 + 1] [i_8 - 2]), (arr_26 [i_8 - 2] [i_8 - 3])));
        /* LoopNest 2 */
        for (unsigned int i_9 = 4; i_9 < 19; i_9 += 4) 
        {
            for (short i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                {
                    var_32 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_32 [i_8 + 2])) & (((/* implicit */int) arr_32 [i_8 + 2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 21; i_11 += 1) 
                    {
                        var_33 = ((((/* implicit */_Bool) arr_26 [i_10] [6U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_8 - 1]))) : (((((/* implicit */_Bool) arr_27 [i_9 - 4])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
                        var_34 = ((/* implicit */unsigned long long int) ((unsigned int) arr_29 [i_8 - 3] [i_9] [i_9 - 1]));
                    }
                    var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_9])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_35 [14U] [14U] [i_10] [i_8 - 2]))))) ? (arr_26 [i_9] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8]))))))))));
                }
            } 
        } 
        var_36 |= arr_31 [i_8] [i_8];
    }
    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        var_37 = ((/* implicit */int) arr_37 [i_12] [i_12]);
        var_38 = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_10)), (0U)))) ? (((/* implicit */unsigned int) max((var_7), (((/* implicit */int) arr_38 [i_12]))))) : (2097024U))));
        var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) min((arr_36 [14LL]), (arr_36 [14]))))));
    }
    for (int i_13 = 3; i_13 < 11; i_13 += 2) 
    {
        var_40 = ((/* implicit */long long int) max((arr_21 [i_13 - 1] [i_13 + 1] [i_13 - 2] [i_13 - 2] [i_13 - 2]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_13 + 1] [i_13 - 3] [i_13 - 1] [i_13 - 2] [6U])))))));
        var_41 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_34 [i_13 + 1] [i_13 + 1] [i_13 - 3] [i_13 + 1]))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_42 = ((/* implicit */unsigned short) max((((unsigned long long int) 0ULL)), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_6)), (arr_8 [i_14] [i_14] [i_14] [i_14] [1ULL]))))));
        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) max(((-(((unsigned long long int) arr_6 [i_14] [i_14] [6])))), (((/* implicit */unsigned long long int) min((arr_22 [i_14] [i_14] [i_14] [i_14]), (2147483647)))))))));
        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) max(((signed char)-115), (arr_6 [i_14] [i_14] [i_14])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_14] [i_14])) <= (0ULL)))) : (((/* implicit */int) arr_5 [i_14] [i_14] [i_14]))))) : (arr_39 [i_14] [i_14])));
        /* LoopSeq 1 */
        for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
        {
            var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) min((((/* implicit */short) ((((/* implicit */unsigned int) -1249900220)) > (arr_3 [i_14] [i_15] [i_15])))), (arr_25 [1U]))))));
            var_46 *= ((/* implicit */unsigned char) max((min((((/* implicit */int) arr_41 [i_14] [i_14])), (arr_28 [i_14] [i_15] [i_15]))), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_28 [0LL] [i_15] [i_15])) && (((/* implicit */_Bool) arr_24 [i_14] [i_14] [i_14] [i_15] [i_15])))))))));
            arr_46 [i_14] [i_14] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) arr_9 [i_15])) ^ (((/* implicit */int) var_10)))) != (((((/* implicit */_Bool) -117778356)) ? (((/* implicit */int) arr_12 [i_15] [i_15] [i_14] [i_14] [i_14])) : (((/* implicit */int) var_4))))))) << (((((((unsigned int) arr_12 [i_15] [i_15] [(signed char)8] [i_14] [i_14])) * (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_14] [i_15]))))) - (4293268749U)))));
            /* LoopNest 3 */
            for (unsigned short i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (short i_17 = 2; i_17 < 11; i_17 += 1) 
                {
                    for (unsigned int i_18 = 2; i_18 < 10; i_18 += 4) 
                    {
                        {
                            var_47 = ((/* implicit */signed char) var_3);
                            arr_54 [i_14] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_28 [i_16] [i_15] [i_16])) ? (((/* implicit */int) (short)32258)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (unsigned char)68))))), (max((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)16277)))))))));
                        }
                    } 
                } 
            } 
        }
        var_48 = ((/* implicit */short) max((((unsigned int) max((((/* implicit */long long int) 576951365)), (var_13)))), (((/* implicit */unsigned int) var_1))));
    }
    var_49 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (long long int i_19 = 0; i_19 < 16; i_19 += 1) 
    {
        arr_57 [i_19] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_35 [13ULL] [i_19] [i_19] [i_19])))) ? (((/* implicit */int) ((signed char) arr_34 [i_19] [i_19] [i_19] [i_19]))) : (((((/* implicit */_Bool) arr_32 [i_19])) ? (arr_56 [i_19]) : (((/* implicit */int) (_Bool)0))))))) ? ((+(max((-946393385), (((/* implicit */int) arr_38 [i_19])))))) : (-1)));
        var_50 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)13805)) : (((/* implicit */int) arr_32 [i_19]))))) ? (arr_35 [i_19] [(signed char)10] [i_19] [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_10), (((/* implicit */unsigned short) (short)-20725)))))))));
    }
    for (unsigned short i_20 = 3; i_20 < 16; i_20 += 3) 
    {
        var_51 = ((/* implicit */int) (signed char)-122);
        var_52 = ((/* implicit */_Bool) 54812085);
        var_53 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? ((+(var_2))) : (((/* implicit */int) ((_Bool) 1851995356703805370ULL)))))), (((unsigned long long int) arr_36 [i_20 - 3]))));
    }
    /* LoopNest 2 */
    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 3) 
    {
        for (unsigned int i_22 = 0; i_22 < 24; i_22 += 3) 
        {
            {
                arr_65 [(_Bool)1] [i_22] [i_22] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_63 [i_21] [i_22] [i_21])), ((+(var_13)))));
                arr_66 [20U] [i_22] = ((_Bool) (-(arr_64 [i_21] [i_21])));
                var_54 = ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (var_0))) != (((/* implicit */unsigned long long int) (+(arr_64 [(_Bool)1] [(_Bool)1])))))) ? (((unsigned int) ((((/* implicit */_Bool) arr_63 [(short)0] [i_22] [i_22])) || (((/* implicit */_Bool) var_11))))) : (((/* implicit */unsigned int) arr_63 [i_21] [i_22] [i_22]))));
                var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_64 [i_22] [i_21])) ? (((((/* implicit */_Bool) arr_62 [i_21])) ? (arr_62 [i_21]) : (((/* implicit */long long int) ((/* implicit */int) arr_61 [(signed char)9] [4ULL]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_61 [i_21] [i_22])) ? (arr_63 [i_21] [i_21] [i_22]) : (arr_63 [i_22] [i_21] [i_21]))))));
            }
        } 
    } 
}
