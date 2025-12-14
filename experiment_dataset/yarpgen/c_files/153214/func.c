/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153214
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (-8727103307168860636LL) : (((/* implicit */long long int) 4294967295U))));
                        arr_11 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [i_3 - 1])) == (arr_5 [i_3 + 3] [i_1] [(signed char)12] [i_3]))))));
                        var_18 -= ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((_Bool) 6ULL))), (max((((/* implicit */unsigned int) (short)12288)), (458752U))))), (((/* implicit */unsigned int) arr_0 [i_0]))));
                    }
                    for (int i_4 = 3; i_4 < 11; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */short) arr_5 [i_4 + 1] [i_2] [5LL] [i_0]);
                        arr_15 [i_0] [12ULL] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1877943721))))) > (((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_6 [i_0])))))))));
                        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (short)32765)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11689001999852532034ULL)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)-32767))))), (((arr_5 [i_0] [i_1] [(short)9] [(short)9]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_5] [i_2] [i_5] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */long long int) var_15)) : (arr_10 [i_4] [i_1] [i_2] [i_4] [i_5] [i_4]))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_4 - 1])))))) + (((((/* implicit */_Bool) arr_8 [(signed char)9] [i_1] [i_2] [i_4 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [9ULL] [i_0] [i_4]))) : (max((((/* implicit */unsigned long long int) 9U)), (var_3)))))));
                            arr_19 [i_5] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) var_8);
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)61)) ? (4294967295U) : (0U))))));
                        }
                        for (signed char i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            var_23 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((var_10) + (2147483647))) << (((18446744073709551609ULL) - (18446744073709551609ULL))))))))), (((unsigned int) arr_3 [i_0]))));
                            var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) -5039635178263734071LL)), (((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)0)))) : (((((/* implicit */_Bool) var_12)) ? (var_13) : (18446744073709551610ULL)))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_4] [i_1] [i_4 + 1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_6))))))) ? (7ULL) : (((/* implicit */unsigned long long int) 4294967293U))));
                            arr_28 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) && (((((((/* implicit */_Bool) arr_0 [8U])) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) arr_6 [i_0])))) < (((/* implicit */int) ((17278429989569472906ULL) >= (((/* implicit */unsigned long long int) arr_16 [(short)9] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                            var_25 -= ((/* implicit */signed char) ((unsigned long long int) min(((~(((/* implicit */int) arr_20 [i_0] [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) 1978471866)) && (((/* implicit */_Bool) (unsigned char)80))))))));
                            var_26 &= 1168314084140078709ULL;
                            var_27 = ((/* implicit */unsigned long long int) (short)-32746);
                        }
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_7 [8U] [i_1] [i_4 - 1] [i_4]), (((/* implicit */unsigned short) arr_13 [(signed char)9] [i_1] [i_4 + 1] [i_2] [i_8] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */int) (short)4096)) | (((/* implicit */int) arr_13 [(short)2] [i_1] [i_4 - 2] [(unsigned short)6] [i_8] [i_2])))))));
                            arr_33 [i_8] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (~(0U)))) ? ((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_2])))) : (((/* implicit */int) (short)(-32767 - 1))))) + (2147483647))) << (((((arr_3 [i_4 + 2]) - (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) - (2156553770U)))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_9 = 2; i_9 < 11; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)6630)) << (((((/* implicit */int) var_8)) - (39957)))));
                            arr_36 [i_0] [(unsigned short)1] [i_2] [6ULL] [i_2] [(signed char)8] [i_0] = ((/* implicit */signed char) ((min((((((/* implicit */int) var_12)) / (arr_2 [i_0]))), (((/* implicit */int) arr_13 [i_9 + 2] [i_9] [(signed char)11] [i_2] [(unsigned char)3] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) (~(4261412864U)))))))));
                            arr_37 [i_0] [i_2] [i_2] [i_4] [(unsigned char)10] = ((/* implicit */unsigned short) (~(max((arr_26 [i_1] [i_1] [i_9 + 1]), (min((arr_5 [5U] [i_1] [i_1] [i_4]), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [2U] [i_4]))))))));
                            var_30 = min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)99)) ^ (((/* implicit */int) (signed char)-93))))) ? (1168314084140078709ULL) : (17251606502559258731ULL))), (((((/* implicit */_Bool) (signed char)32)) ? (max((1168314084140078713ULL), (((/* implicit */unsigned long long int) -563798753)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_32 [i_0] [i_0] [i_2] [i_1] [i_0])))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned int) (signed char)-19);
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) arr_8 [i_4 + 1] [i_4] [i_4 + 1] [i_4 - 3])) : (((/* implicit */int) arr_8 [11ULL] [i_4] [i_4 + 2] [i_4 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_16)))) : (((long long int) var_3))));
                        }
                    }
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 4) 
                    {
                        var_33 ^= 0ULL;
                        var_34 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 4261412864U))))))), (arr_31 [i_0] [i_0] [i_11])));
                        var_35 = ((/* implicit */unsigned long long int) min((arr_8 [i_0] [i_1] [(signed char)12] [i_11]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(591042683019658642ULL)))))))));
                        arr_42 [i_0] [i_11] [i_2] [(unsigned char)0] &= ((/* implicit */unsigned short) min((((/* implicit */int) (signed char)-92)), (-4)));
                    }
                    arr_43 [i_2] [6ULL] [i_0] [i_0] = ((/* implicit */int) ((signed char) var_1));
                }
            } 
        } 
        arr_44 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_8))))) & (((((/* implicit */_Bool) 1202733473)) ? (arr_34 [0ULL] [i_0]) : (var_7))))))));
        arr_45 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (signed char)97)), (11640249922890799133ULL)));
    }
    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) max((((/* implicit */unsigned long long int) var_16)), (6ULL))))) ? (((min((18446744069414584320ULL), (((/* implicit */unsigned long long int) (signed char)-98)))) * (((/* implicit */unsigned long long int) ((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3312672082426466267LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_2)))) ? (((/* implicit */int) ((short) (unsigned short)512))) : (((/* implicit */int) ((unsigned char) var_4))))))));
    /* LoopSeq 1 */
    for (long long int i_12 = 0; i_12 < 12; i_12 += 1) 
    {
        arr_50 [i_12] [i_12] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -8605632263188990346LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [4ULL] [4ULL]))) : (18446744073709551615ULL))), ((((!(((/* implicit */_Bool) (signed char)-119)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -42273642)))))) : (((((/* implicit */_Bool) (signed char)91)) ? (arr_49 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_12] [i_12] [i_12])))))))));
        var_37 -= ((/* implicit */short) ((unsigned char) (~(arr_49 [i_12]))));
        arr_51 [i_12] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) arr_47 [i_12] [i_12])) ? (((/* implicit */int) (signed char)104)) : (arr_47 [i_12] [i_12]))));
        var_38 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_38 [i_12] [i_12] [i_12]))))));
    }
}
