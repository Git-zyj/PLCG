/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146484
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
    var_20 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_15)))) : (((((/* implicit */_Bool) var_16)) ? (var_3) : (((/* implicit */long long int) 4294967295U))))))), (var_10)));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) arr_2 [i_0]);
        var_22 = ((/* implicit */unsigned int) ((arr_1 [i_0]) * (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) & (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))))));
        var_23 = ((/* implicit */int) ((max((13264300405123133372ULL), (((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_0]))))))) | (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (3547922653U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) arr_1 [i_1]))))), (arr_1 [i_1])));
        var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */long long int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) arr_5 [i_1])) : (max((((/* implicit */unsigned long long int) arr_4 [4ULL])), (5182443668586418243ULL)))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_26 = ((/* implicit */short) (~((~(arr_0 [i_3] [i_2])))));
                        arr_12 [i_1] [(unsigned char)10] [i_1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(arr_4 [i_1])))) ? (((/* implicit */int) max((arr_9 [i_3]), (((/* implicit */unsigned short) arr_11 [i_1] [i_2] [i_3] [(signed char)5] [i_4] [2]))))) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) ((signed char) ((arr_1 [i_1]) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1])))))))));
                        arr_13 [i_1] [i_1] [i_3] [i_3] [i_4] = (-(((((/* implicit */_Bool) 5182443668586418243ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) : (13264300405123133372ULL))));
                    }
                } 
            } 
        } 
        var_27 = ((/* implicit */long long int) (+(5182443668586418244ULL)));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_6] [i_6])) ? (arr_0 [i_6] [i_7]) : (arr_0 [i_1] [i_5]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6] [i_6])) ? (arr_4 [i_1]) : (((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))))))));
                        var_29 = ((/* implicit */int) (-(13264300405123133371ULL)));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((arr_1 [i_7]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_5] [i_1] [i_7])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-28999))) / (4294967295U)))))))) : (max((((/* implicit */unsigned long long int) arr_20 [i_5] [i_5])), (arr_17 [i_1] [i_5] [i_6])))));
                        /* LoopSeq 2 */
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) max((((max((arr_5 [i_1]), (((/* implicit */unsigned int) (unsigned char)90)))) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5]))))), ((!(((/* implicit */_Bool) arr_17 [i_5] [i_5] [i_5]))))));
                            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_22 [i_8] [i_8] [i_8] [i_8] [i_8])), (arr_5 [i_6])))) ? (((unsigned long long int) arr_6 [i_6])) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5] [i_5] [i_5]))))))));
                            arr_25 [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)65280))))), (max((((/* implicit */unsigned int) arr_10 [i_5] [i_5] [i_5] [i_6] [i_5])), (arr_5 [i_1])))));
                            var_32 = ((/* implicit */int) ((unsigned char) (unsigned short)0));
                            var_33 = ((/* implicit */signed char) ((((((/* implicit */int) (signed char)-33)) != (((/* implicit */int) arr_9 [i_7])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((arr_23 [i_5] [i_1] [i_6] [3LL] [i_8] [i_5] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)210)))))))) : (((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6047))) : (5182443668586418243ULL)))))));
                        }
                        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 2) 
                        {
                            arr_28 [i_9] [i_7] [i_6] [i_5] [i_1] = ((/* implicit */unsigned char) arr_4 [i_1]);
                            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_6 [i_1]))));
                            arr_29 [i_1] [11U] [i_6] [i_7] [i_6] = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))), (arr_18 [i_5] [i_5] [(signed char)6]))) / (((/* implicit */long long int) ((/* implicit */int) (short)922)))));
                        }
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_7] [i_1]))))))) > (arr_4 [i_5]))))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        arr_32 [i_5] [(signed char)11] [i_10] = ((/* implicit */signed char) (((+(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) -1409423789)) : (arr_1 [i_1]))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_1] [i_1] [i_1] [11] [i_1] [i_1] [11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)11))))) : (max((arr_19 [3LL]), (((/* implicit */int) arr_10 [(unsigned char)11] [i_6] [i_6] [i_5] [i_1])))))))));
                        var_36 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_30 [i_1] [(signed char)2])) - (((/* implicit */int) arr_30 [i_5] [i_6]))))));
                        var_37 *= ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (signed char)-47)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [8])) && (((/* implicit */_Bool) arr_6 [i_1])))))));
                        var_38 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_6] [10ULL] [i_1]))) | (arr_17 [i_10] [i_5] [i_1])))) ? (((((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_10] [i_1] [i_6] [i_10]))) : (2575967888U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-12))))))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_12 = 0; i_12 < 12; i_12 += 2) 
                        {
                            var_39 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 2190504543U)) ? (arr_4 [i_1]) : (((/* implicit */int) arr_30 [i_5] [i_5])))))))));
                            var_40 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_12])) ? (arr_36 [i_1] [i_1] [i_1] [i_11] [i_12]) : (arr_36 [i_11] [i_11] [i_11] [i_11] [i_11]))) < (((/* implicit */long long int) max((arr_4 [i_11]), (((/* implicit */int) (signed char)-12)))))));
                            arr_37 [i_11] [i_11] [i_11] [(short)8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))));
                        }
                        var_41 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned int) arr_6 [i_5])), (360788450U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)7532)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-68)))))))) ? (((((/* implicit */_Bool) arr_9 [i_5])) ? (max((arr_17 [i_6] [i_5] [11U]), (((/* implicit */unsigned long long int) arr_2 [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 2104462753U)))))) : ((+(((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (13264300405123133372ULL) : (((/* implicit */unsigned long long int) -132592408))))))));
                    }
                    var_42 = ((/* implicit */short) arr_2 [i_6]);
                    /* LoopNest 2 */
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            {
                                arr_43 [i_1] [i_5] [2LL] [i_5] [i_6] [i_5] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((long long int) arr_0 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [(unsigned short)3] [(unsigned short)3] [i_6] [i_6] [i_13] [i_13] [10LL])) ? (((/* implicit */int) arr_8 [i_13] [i_6] [i_5] [i_1])) : (((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_6] [(short)5] [i_1]))) : (((arr_0 [(unsigned short)10] [i_13]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)53))))))) : (((/* implicit */unsigned int) arr_4 [i_1]))));
                                arr_44 [i_1] [i_5] [i_6] [i_13] [i_1] = ((/* implicit */unsigned short) (+(((((/* implicit */int) ((unsigned short) arr_18 [i_5] [i_5] [i_5]))) & (((/* implicit */int) (unsigned short)29390))))));
                                var_43 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_17 [i_5] [i_6] [i_13]))) ? (((/* implicit */int) max((arr_22 [i_1] [i_13] [i_6] [i_1] [i_1]), (arr_22 [i_5] [i_5] [(unsigned short)11] [i_5] [i_5])))) : (((/* implicit */int) arr_34 [(unsigned char)10] [i_13] [i_6] [i_5] [i_1]))));
                                arr_45 [i_1] [i_5] [i_6] [i_13] [i_14] [i_6] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 13264300405123133372ULL))) ? (((/* implicit */unsigned long long int) (~(((unsigned int) (unsigned char)174))))) : (((((/* implicit */_Bool) max((5182443668586418243ULL), (((/* implicit */unsigned long long int) arr_35 [i_1] [i_5] [i_5] [i_13] [i_14]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)51981)) / (arr_4 [i_6])))) : (((unsigned long long int) 16777215U))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
