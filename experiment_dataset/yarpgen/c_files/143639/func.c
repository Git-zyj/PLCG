/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143639
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~((((~(((/* implicit */int) var_9)))) + (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_14))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((13910551060883825618ULL), (((/* implicit */unsigned long long int) (signed char)122))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_2] [i_1] [i_2])))))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        var_22 *= ((/* implicit */unsigned char) (~((-((~(arr_3 [i_0] [i_0] [i_0])))))));
                        var_23 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_4 [i_1] [i_1] [i_3])))) + ((-(((((/* implicit */int) var_9)) + (((/* implicit */int) var_9))))))));
                    }
                    for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
                        {
                            var_24 *= (+(arr_3 [(unsigned char)5] [i_1] [i_0]));
                            var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [14] [(signed char)12] [i_5])) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) var_8))))) >= (((arr_3 [i_0] [i_1] [i_4]) * (((/* implicit */unsigned long long int) var_11))))));
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
                        {
                            var_26 = ((/* implicit */unsigned char) var_14);
                            var_27 = ((/* implicit */short) ((((unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [(unsigned char)11] [i_4] [i_6])) > (((/* implicit */int) (unsigned char)69))))) >= (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_18)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)255)), (var_0)))) : (max((((/* implicit */int) var_12)), (var_3))))))));
                            var_28 = ((/* implicit */short) min((((((/* implicit */_Bool) max((1685002626), (((/* implicit */int) (signed char)109))))) ? (((/* implicit */int) (unsigned char)233)) : (((int) (unsigned char)253)))), (((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */int) arr_16 [i_0])) : (((/* implicit */int) arr_16 [i_4]))))));
                        }
                        var_29 ^= ((/* implicit */signed char) (-((~((~(((/* implicit */int) (unsigned char)180))))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */int) (((~(((/* implicit */int) (short)-26286)))) < (((int) 17592186044408ULL))));
                        var_31 = ((/* implicit */unsigned long long int) (short)-18379);
                        var_32 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (short)-18377)))) & (((((/* implicit */int) (short)16123)) + (-1685002633)))));
                        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_14 [i_0] [i_1] [i_1] [i_7] [i_1]) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_13 [i_0] [i_0] [(short)9] [i_1] [i_1] [i_1] [i_7])))))));
                        var_34 = ((/* implicit */int) (~(((((/* implicit */_Bool) var_15)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
                    }
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_8]);
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 0; i_9 < 15; i_9 += 4) 
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) 144115188075855872ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)18380))));
                            var_37 = ((/* implicit */short) (~(((/* implicit */int) max((arr_4 [i_0] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_0]))))));
                            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_19)))), (((/* implicit */int) var_17))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (var_18))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))))))));
                            var_39 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_10 [i_9] [i_9] [i_2]))) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) < (18446726481523507195ULL)))));
                        }
                        for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            var_40 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_3)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) / (arr_3 [i_0] [(unsigned char)3] [i_2])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_8])) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0])) : (arr_3 [i_2] [i_1] [i_0]))))));
                            var_41 = ((/* implicit */signed char) ((((((((/* implicit */int) var_17)) | (((/* implicit */int) var_17)))) * (max((((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_2] [i_10])), (var_16))))) & (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)32742), ((short)508))))) > (((((/* implicit */_Bool) -1515874428)) ? (((/* implicit */unsigned long long int) var_16)) : (var_7))))))));
                        }
                        for (short i_11 = 3; i_11 < 12; i_11 += 2) 
                        {
                            var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)117))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (signed char)115))))) : (((((/* implicit */int) var_13)) | (((/* implicit */int) var_17))))))) & (((((/* implicit */_Bool) max((var_6), (((/* implicit */short) arr_18 [i_0] [(signed char)4] [i_0] [(signed char)4] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_27 [i_11 - 1])))));
                            var_43 &= ((/* implicit */int) var_13);
                            var_44 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) arr_26 [i_0] [i_11])))))))) + (min((((/* implicit */int) ((((/* implicit */_Bool) (short)29540)) || (((/* implicit */_Bool) (short)13055))))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */int) var_14))))))));
                            var_45 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-5033))))) && (((/* implicit */_Bool) min((var_17), (((/* implicit */short) arr_26 [(signed char)3] [i_1]))))))))));
                        }
                    }
                    var_46 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_0] [(short)11])))))))) + (max((((unsigned long long int) (short)15)), (((/* implicit */unsigned long long int) (short)-5022))))));
                    var_47 += ((/* implicit */short) (((((-(max((arr_8 [i_2] [i_1] [i_1] [i_0]), (((/* implicit */int) var_5)))))) + (2147483647))) >> ((((~(((/* implicit */int) arr_6 [i_2] [i_1] [i_1] [i_0])))) - (24670)))));
                    var_48 -= ((/* implicit */int) arr_26 [i_2] [i_0]);
                }
            } 
        } 
    } 
}
