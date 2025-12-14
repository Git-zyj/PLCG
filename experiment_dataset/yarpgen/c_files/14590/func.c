/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14590
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_13 = ((/* implicit */signed char) arr_0 [i_0] [i_1]);
            var_14 = ((/* implicit */unsigned short) 1630644377U);
            var_15 = 4763038081282866594ULL;
            var_16 = ((/* implicit */_Bool) (((_Bool)1) ? (2664322903U) : (2664322929U)));
            var_17 &= max((((/* implicit */unsigned int) (short)-25575)), (max((max((1630644377U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_0 [(short)7] [(short)7])))));
        }
        for (signed char i_2 = 2; i_2 < 15; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    {
                        arr_14 [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned int) arr_0 [i_3] [i_3]);
                        var_18 = ((/* implicit */unsigned char) max((2887491626198588996ULL), (((/* implicit */unsigned long long int) arr_6 [i_3] [i_3]))));
                        arr_15 [10] [i_2 + 2] [10U] [i_3] [i_2] [10U] = (_Bool)1;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                    {
                        {
                            arr_23 [i_2] [i_5] [i_0] &= ((/* implicit */short) 2887491626198588998ULL);
                            arr_24 [i_2] [i_5] [i_5] [i_2] [i_2] = ((/* implicit */short) arr_8 [i_2] [i_5] [11U] [i_2]);
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) 1381390453U);
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 17; i_8 += 3) 
            {
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_20 = ((/* implicit */int) min((var_20), (max((((/* implicit */int) ((26U) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)89)))))), (((((/* implicit */int) (signed char)26)) + (((((/* implicit */_Bool) (unsigned short)58285)) ? (((/* implicit */int) (unsigned short)15077)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_8] [i_9]))))))))));
                        arr_31 [i_2] = ((/* implicit */signed char) 1630644367U);
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 16; i_10 += 3) 
        {
            for (short i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)25)), (max((arr_32 [i_10]), (((/* implicit */unsigned long long int) 2755835445U))))))) ? (((((/* implicit */_Bool) arr_2 [13ULL] [i_11])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_11])) ? (((/* implicit */int) arr_20 [i_0] [i_10] [i_0] [8U] [i_11])) : (((/* implicit */int) arr_28 [i_0] [i_10] [i_10] [i_11] [i_11] [i_0]))))) : (max((((/* implicit */unsigned int) (unsigned char)165)), (1U))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_11])))));
                    var_22 &= ((/* implicit */unsigned short) max((arr_34 [i_0] [i_0] [i_0]), (arr_37 [i_0] [i_0])));
                }
            } 
        } 
        arr_39 [i_0] [16LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_11 [8U] [8U] [i_0]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0])))))) ? (arr_11 [(unsigned short)16] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [(unsigned short)2])))));
    }
    /* LoopNest 2 */
    for (signed char i_12 = 2; i_12 < 15; i_12 += 1) 
    {
        for (unsigned int i_13 = 1; i_13 < 17; i_13 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    arr_48 [i_13] [(_Bool)1] = max(((-(8669872742083754742ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16768))))));
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            {
                                var_23 = max((((/* implicit */unsigned char) (signed char)0)), (max((arr_52 [i_16] [i_16] [i_13 + 1] [i_12 + 2]), (((/* implicit */unsigned char) (signed char)84)))));
                                var_24 = arr_40 [i_14];
                                var_25 = ((/* implicit */int) ((max((((12713122949434619992ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29024))))), (((/* implicit */unsigned long long int) max(((short)-19782), (((/* implicit */short) arr_52 [i_12] [i_12] [(unsigned short)9] [i_15]))))))) << (((/* implicit */int) ((2769137068U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)19781))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_17 = 2; i_17 < 17; i_17 += 2) 
                {
                    var_26 = ((/* implicit */short) max((arr_44 [i_13] [i_17]), (((((/* implicit */_Bool) max((14460361640289659648ULL), (17412198584317668673ULL)))) ? (max((((/* implicit */unsigned long long int) arr_51 [i_12] [i_13 + 1] [i_17] [i_17 - 1])), (arr_49 [i_12 + 3] [i_12] [i_12] [(unsigned char)11] [i_13]))) : (((/* implicit */unsigned long long int) (-(arr_41 [(_Bool)1]))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_18 = 1; i_18 < 17; i_18 += 3) 
                    {
                        for (unsigned long long int i_19 = 0; i_19 < 18; i_19 += 3) 
                        {
                            {
                                var_27 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)45405)), (2769137068U)))) + (arr_44 [i_12] [i_13])))) ? (2887491626198588996ULL) : ((-(8537664638465413600ULL)))));
                                arr_62 [i_12] [i_12] [i_17] [i_12] &= ((/* implicit */unsigned char) max((max((((arr_58 [i_17] [i_17]) + (960045923))), (max((((/* implicit */int) arr_46 [i_12] [i_12])), (2147483647))))), (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) (signed char)-84))))));
                                var_28 = ((/* implicit */unsigned char) arr_51 [i_19] [9ULL] [(_Bool)1] [i_12]);
                                var_29 &= ((/* implicit */short) (-(max((2403758201U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)-16)) : (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 0; i_20 < 18; i_20 += 4) 
                    {
                        for (unsigned int i_21 = 0; i_21 < 18; i_21 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_63 [i_17]))));
                                arr_67 [i_13] [17LL] [i_17] [i_20] = ((((/* implicit */_Bool) max((((/* implicit */int) (short)29409)), (((((/* implicit */_Bool) arr_41 [i_13])) ? (((/* implicit */int) (unsigned short)34473)) : (((/* implicit */int) (short)-19186))))))) ? (max((((/* implicit */unsigned long long int) arr_56 [i_12] [i_12 - 2] [i_12])), (15605989820521000204ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-118)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) max(((unsigned short)58237), (((/* implicit */unsigned short) arr_66 [i_12 + 3])))))))), (3112722755U)));
                }
                arr_68 [(signed char)6] [i_13] &= ((/* implicit */short) ((((/* implicit */int) (unsigned char)34)) * (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_46 [i_12] [i_12 + 2])), (3307878454U)))))))));
                /* LoopNest 2 */
                for (unsigned short i_22 = 3; i_22 < 15; i_22 += 3) 
                {
                    for (unsigned char i_23 = 2; i_23 < 17; i_23 += 1) 
                    {
                        {
                            arr_73 [i_12] [i_13] [i_13] [5ULL] [i_23] = ((/* implicit */unsigned int) arr_49 [i_12] [i_13 - 1] [(signed char)12] [i_23] [i_13]);
                            arr_74 [6LL] [6LL] [6LL] &= (_Bool)1;
                            arr_75 [0U] [0U] [i_22] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_70 [i_12] [i_13] [i_13])) ? (4127510681U) : (arr_61 [(signed char)0] [(signed char)0] [(unsigned char)5] [i_23 - 1] [i_23 - 2]))) << (((max((3299243479U), (((/* implicit */unsigned int) arr_58 [(_Bool)1] [i_13])))) - (3299243477U)))))) ? (((9ULL) << ((((((_Bool)1) ? (1469203890) : (((/* implicit */int) (unsigned short)39131)))) - (1469203886))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)45382), (((/* implicit */unsigned short) (_Bool)0))))))));
                        }
                    } 
                } 
                arr_76 [i_12 + 2] [6ULL] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((18446744073709551596ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_63 [(short)12])) ? (28968049U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58219))))))))) ? (((/* implicit */int) arr_66 [i_12])) : (((/* implicit */int) (unsigned short)45389))));
            }
        } 
    } 
    var_32 = ((/* implicit */short) var_5);
    var_33 &= ((/* implicit */unsigned char) max((max((15559252447510962617ULL), (((/* implicit */unsigned long long int) (unsigned char)158)))), (max((2887491626198588998ULL), (((/* implicit */unsigned long long int) -1322733871))))));
}
