/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173196
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
    var_17 *= ((/* implicit */unsigned char) (~(min((((unsigned long long int) var_6)), (6846788970580673569ULL)))));
    var_18 = ((/* implicit */unsigned char) var_13);
    var_19 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)26)), (936175959U)))) ? ((~(((/* implicit */int) (signed char)-58)))) : (((/* implicit */int) (unsigned char)46)))), (((/* implicit */int) var_3))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)26))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_7 [i_2 - 2] [i_2 - 2] [i_2 - 1]))));
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 1] [i_0])))))));
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        arr_11 [(unsigned char)0] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_12)))) * (((/* implicit */int) (signed char)-122))))) ? (((/* implicit */int) (unsigned short)6473)) : (((/* implicit */int) var_6))));
        arr_12 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)73))))) ? (min((((/* implicit */unsigned int) (signed char)77)), (arr_10 [i_3] [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_10 [i_3] [i_3]))))));
        /* LoopSeq 1 */
        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_13 [i_4 - 1])) : (((((/* implicit */_Bool) arr_14 [i_3] [i_4 + 2])) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) var_6))))))) ? ((+(((/* implicit */int) arr_13 [i_4 - 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) min((arr_14 [i_3] [i_4 + 2]), ((unsigned char)208)))) || (((/* implicit */_Bool) var_10)))))));
            var_24 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_10 [i_4 + 1] [(unsigned char)7])) || (((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) arr_10 [i_4 + 2] [i_4 + 2]))))));
        }
        /* LoopSeq 1 */
        for (unsigned short i_5 = 0; i_5 < 15; i_5 += 4) 
        {
            arr_17 [i_3] [i_5] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_5])) ? (((/* implicit */int) (unsigned char)229)) : (((/* implicit */int) (unsigned char)229)))))))));
            arr_18 [i_3] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_3] [i_5]))) ? (((/* implicit */int) (signed char)32)) : (((((/* implicit */_Bool) (unsigned char)230)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (signed char)-122))))));
            /* LoopSeq 3 */
            for (unsigned short i_6 = 1; i_6 < 11; i_6 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) < ((-(((/* implicit */int) (signed char)-38)))))))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) (signed char)38))))) ? (min((arr_21 [i_3] [(unsigned short)14] [i_3]), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_20 [i_3] [i_3] [i_6 + 4] [i_5]), (arr_19 [i_3] [i_5] [(unsigned short)4] [i_6 + 4])))))))));
            }
            for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 13; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 15; i_9 += 2) 
                    {
                        {
                            arr_28 [i_3] [i_5] [i_7] [i_8] [i_3] [i_9] [i_5] = ((/* implicit */unsigned int) ((unsigned char) var_8));
                            arr_29 [5ULL] [i_5] [i_7 - 2] [i_8 + 1] [8ULL] = ((/* implicit */unsigned long long int) ((signed char) (-(((unsigned int) arr_26 [(unsigned char)4] [i_5] [i_7] [i_8] [(signed char)10])))));
                        }
                    } 
                } 
                arr_30 [(unsigned char)14] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((unsigned char) var_4))), (var_11)));
                arr_31 [i_3] [i_5] [i_7] &= ((unsigned char) min(((signed char)-50), ((signed char)13)));
            }
            for (unsigned long long int i_10 = 2; i_10 < 13; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_11 = 3; i_11 < 12; i_11 += 3) 
                {
                    arr_38 [i_11] [i_11] [i_11] [i_3] = var_11;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_12 = 1; i_12 < 14; i_12 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned short) 4230325732U);
                        arr_42 [i_11] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)62022)) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)38)))) : (((/* implicit */int) (unsigned char)27))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        arr_45 [i_13] [i_5] [i_10] [i_5] [i_3] |= ((/* implicit */unsigned char) ((signed char) 8312226974135051255ULL));
                        arr_46 [i_3] [i_5] [i_10 - 1] [i_3] [(unsigned char)1] [i_11] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) * (arr_21 [i_11] [i_11 + 2] [i_10 - 1]));
                        var_28 = ((((/* implicit */_Bool) arr_27 [i_3] [i_3] [i_10 - 2] [i_11 - 3] [(unsigned short)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (arr_44 [i_10] [i_10] [i_10 - 2] [i_11 - 3] [i_10 - 2] [i_11 + 3]));
                    }
                    for (unsigned long long int i_14 = 1; i_14 < 13; i_14 += 1) 
                    {
                        arr_49 [i_11] [13ULL] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_15 [i_3]))))) ? (((/* implicit */int) max((var_11), (((/* implicit */unsigned short) var_9))))) : (((/* implicit */int) var_3))));
                        arr_50 [i_11] = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) ((unsigned char) var_12))), (16995106063460455512ULL))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_19 [i_11] [i_10] [i_5] [i_11])) : (((/* implicit */int) (signed char)74)))) : (((((/* implicit */int) (signed char)82)) & (((/* implicit */int) (unsigned short)25155)))))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_36 [i_11] [i_5] [i_11] [i_5] [i_5] [i_5]), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_2)))))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 16054973341651422027ULL))) & (((/* implicit */int) (unsigned short)42627)))))));
                    }
                    var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((unsigned char) arr_27 [i_11] [i_11] [i_11 + 3] [i_10] [i_10 - 2]))), (min((var_11), (((/* implicit */unsigned short) arr_9 [i_3] [i_5]))))));
                }
                for (unsigned int i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (signed char)64))) ? ((+(((/* implicit */int) (unsigned short)35504)))) : ((+(((/* implicit */int) arr_23 [i_10 - 2] [i_10 - 2] [i_10 - 2]))))));
                    /* LoopSeq 1 */
                    for (signed char i_16 = 2; i_16 < 14; i_16 += 4) 
                    {
                        var_32 = ((/* implicit */unsigned short) var_7);
                        var_33 += ((/* implicit */unsigned long long int) var_7);
                        arr_57 [i_15] = ((/* implicit */unsigned char) 1694566111U);
                        var_34 = ((/* implicit */signed char) (unsigned char)140);
                    }
                    arr_58 [i_15] [i_10 - 2] [i_5] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16875)) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned char)47))));
                }
                /* LoopSeq 2 */
                for (signed char i_17 = 2; i_17 < 13; i_17 += 1) 
                {
                    var_35 += ((/* implicit */unsigned short) var_15);
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13012225761504849870ULL)) ? (13806265297292620828ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222)))))) ? ((-(((/* implicit */int) arr_53 [i_10 + 1] [i_10 + 1])))) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (signed char)30)))))));
                    arr_62 [i_17] [i_3] [i_3] [i_17 + 1] [i_17 + 1] [i_3] = arr_27 [i_3] [(unsigned short)3] [(unsigned short)3] [i_3] [i_3];
                    arr_63 [i_3] [i_3] [i_3] [i_3] |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (arr_34 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) ? (2600401181U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) max((((/* implicit */int) var_13)), (((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (unsigned short)22890)) : (((/* implicit */int) (signed char)-1)))))))));
                }
                for (unsigned char i_18 = 1; i_18 < 14; i_18 += 4) 
                {
                    var_37 = ((/* implicit */unsigned char) (signed char)63);
                    var_38 *= ((/* implicit */signed char) (~(((/* implicit */int) (signed char)23))));
                    arr_67 [i_3] [i_5] [i_10 - 1] [(unsigned short)13] [(unsigned char)9] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_6)), (5173962884628297086ULL)))) ? (((((/* implicit */_Bool) arr_24 [i_10 - 1] [i_18 - 1] [i_18])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_10 - 2] [i_18 - 1] [(unsigned short)11]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_24 [i_10 + 1] [i_18 + 1] [i_18 - 1])))))));
                    var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)51))));
                }
            }
        }
    }
    var_40 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) ((unsigned char) (unsigned char)111))) : (((/* implicit */int) var_14))))) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)63))));
}
