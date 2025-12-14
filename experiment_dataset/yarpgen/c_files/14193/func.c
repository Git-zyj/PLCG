/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14193
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
    var_12 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) -495671442)))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */unsigned int) -495671442))))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_14 -= ((/* implicit */signed char) -1);
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) min(((signed char)46), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((1073741823U) * (4294967295U)))))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned int) (!(((/* implicit */_Bool) var_7)))))), (arr_4 [i_3])));
                    arr_11 [(signed char)9] [(signed char)9] [i_3] = ((short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)-42))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -495671434)) ? (((/* implicit */int) (short)694)) : (((/* implicit */int) var_0))))));
                        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)62708)))))) * (arr_6 [i_4])));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) ((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_5] [i_6])))))) ? (arr_4 [i_1]) : (min((arr_18 [i_1] [i_2] [i_3] [i_5] [10LL]), (((/* implicit */unsigned long long int) (signed char)46))))))))));
                            arr_22 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_2)) | (-640288141809585413LL))) | (((/* implicit */long long int) ((/* implicit */int) (short)-23920)))))) <= ((((!(((/* implicit */_Bool) 17691449090459239274ULL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-13364)), (469824083)))) : (arr_4 [i_1])))));
                            arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)249)) ? (137438953471LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)80)))))))) ? (((/* implicit */unsigned int) -161258572)) : (((((/* implicit */_Bool) (unsigned char)4)) ? (2079234579U) : (3306055599U)))));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_0))));
                            var_21 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned long long int) ((((unsigned int) (signed char)13)) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_17 [i_1] [(_Bool)1] [i_1] [i_1])), ((unsigned short)19798)))))))) : (((((/* implicit */_Bool) (-(640288141809585412LL)))) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : ((+(arr_4 [(short)8])))))));
                        }
                        for (int i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            arr_26 [6LL] [i_2] [i_3] [6LL] [i_5] [i_3] = (-(((arr_19 [i_3] [i_5] [i_5] [i_5] [i_7] [i_3] [i_2]) / (((/* implicit */unsigned long long int) arr_6 [i_5])))));
                            arr_27 [i_2] [i_2] = ((/* implicit */unsigned long long int) (((!((!(var_4))))) ? (((((/* implicit */_Bool) (~(arr_19 [i_7] [(short)7] [i_1] [i_7] [i_1] [i_7] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1))))))) : ((-(arr_6 [i_1]))))) : (((((67108863U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_7] [i_1] [i_3] [i_1] [i_1]))))) * (arr_3 [i_1])))));
                            var_22 *= ((/* implicit */signed char) ((((((unsigned long long int) arr_25 [i_2] [i_2] [i_3] [i_3] [i_7] [i_5] [i_2])) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_23 = (short)10947;
                        }
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)23858))) <= (((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) | (((/* implicit */int) (short)8887))))) * (arr_2 [i_1]))))))));
                    }
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        var_25 |= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18816))) : (arr_3 [(short)2])))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) | (9256079042967686535ULL)))));
                        var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) <= (2423896785U))))) : (arr_3 [i_2])));
                        var_27 = ((/* implicit */_Bool) (signed char)75);
                        arr_30 [i_1] [i_2] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? ((-(((/* implicit */int) var_8)))) : ((+(var_2)))));
                        var_28 |= ((/* implicit */int) ((unsigned short) var_0));
                    }
                    /* vectorizable */
                    for (short i_9 = 1; i_9 < 14; i_9 += 2) 
                    {
                        arr_33 [i_2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_1] [i_9 + 2] [i_3] [i_3] [i_2] [i_1])) ? (((2819333426377124656ULL) & (((/* implicit */unsigned long long int) -8138267982468028691LL)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)30023)))))));
                        var_29 = ((/* implicit */unsigned short) arr_17 [i_1] [i_1] [i_3] [i_9]);
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) (+(((int) var_11)))))));
                        var_31 *= ((/* implicit */short) ((-986580192) / (((/* implicit */int) (signed char)-97))));
                    }
                }
            } 
        } 
        arr_34 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 3467474092416300838LL)) ? (((/* implicit */int) ((signed char) -208104906))) : (((/* implicit */int) (short)-7527))));
        arr_35 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) 1073741824U)))) ? (max((13398854064442530789ULL), (arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 868119733)) | (1659941559U)))))))));
        arr_36 [i_1] [i_1] = ((/* implicit */long long int) ((int) 161258582));
    }
    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) 
    {
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) min(((-(arr_40 [i_10]))), ((~(((/* implicit */int) var_4))))))) ? (((int) (short)-8888)) : (((((/* implicit */int) (signed char)86)) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)65))))))));
        var_33 ^= ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)87)))))) * (((((/* implicit */_Bool) (signed char)-29)) ? (0U) : (((/* implicit */unsigned int) arr_40 [i_10])))))), (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)23957))) : (1659941578U))) | (((/* implicit */unsigned int) min((((/* implicit */int) (short)8901)), (arr_40 [i_10]))))))));
        var_34 -= (short)22;
    }
    for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) 
    {
        var_35 = ((/* implicit */unsigned int) ((unsigned short) 18446744073709551615ULL));
        var_36 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1897016082)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_3))))))) <= (((((/* implicit */_Bool) ((unsigned int) (unsigned short)47016))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_9)), (var_2)))) : ((~(3117843939154127915ULL)))))));
        arr_44 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_18 [i_11] [i_11] [i_11] [i_11] [i_11]) | (((/* implicit */unsigned long long int) arr_0 [i_11]))))) ? (1418400096U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_29 [i_11] [i_11] [i_11] [i_11]) / (((/* implicit */long long int) ((/* implicit */int) (short)-39))))))))))));
    }
    var_37 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) ? (((((/* implicit */_Bool) ((long long int) var_5))) ? (((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)47016))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (6747345527814367638LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28911))))))));
}
