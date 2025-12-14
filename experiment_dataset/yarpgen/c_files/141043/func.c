/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141043
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
    var_20 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned char) ((unsigned long long int) ((((66060288U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) arr_5 [i_1 + 4] [i_0])))));
                    /* LoopSeq 2 */
                    for (short i_3 = 3; i_3 < 10; i_3 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_14 [i_2 - 1]))));
                            arr_16 [i_0] [i_0] [i_2 - 1] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (signed char)74)) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (signed char)75))))))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0]))))) : (max((((/* implicit */unsigned long long int) arr_13 [i_4] [i_0] [i_2 - 1] [i_0] [i_0 + 3])), (arr_6 [i_1] [i_1] [i_0])))))));
                            var_23 = ((/* implicit */long long int) ((((arr_14 [i_3 + 1]) ? (var_16) : (((/* implicit */int) arr_14 [i_3 - 3])))) != (((((/* implicit */int) arr_14 [i_3 + 1])) * (((/* implicit */int) (signed char)74))))));
                            arr_17 [i_0] [8U] [i_0] [i_3] [i_0] [i_4] = arr_13 [i_4] [i_0] [i_2] [i_0] [i_0];
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 4; i_5 < 8; i_5 += 3) 
                        {
                            var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_7))));
                            var_25 = ((/* implicit */_Bool) ((short) var_19));
                        }
                        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) (-(((((unsigned long long int) (signed char)76)) & (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_10 [i_0] [i_0] [i_0] [i_0] [(unsigned short)1] [i_0])), (arr_12 [2LL] [i_1] [i_2]))))))))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        arr_22 [i_0] = ((/* implicit */_Bool) (-((+(((long long int) var_18))))));
                        var_27 = (signed char)-74;
                        /* LoopSeq 1 */
                        for (short i_7 = 1; i_7 < 8; i_7 += 3) 
                        {
                            arr_26 [i_0] [i_1 - 2] [i_0] [i_6] [i_7] = ((/* implicit */unsigned short) max((((long long int) arr_12 [i_0] [i_7 + 3] [i_0])), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_7 - 1] [i_0])))))));
                            arr_27 [i_0] [i_0] = ((/* implicit */short) min(((-(arr_2 [i_0 - 1]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
                        }
                    }
                    arr_28 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)76))) / (((562949949227008LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)57)))))))) ? (2501247387969662821LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)74)))));
                }
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 3; i_9 < 8; i_9 += 3) 
                    {
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                arr_35 [i_10] [i_0] = ((/* implicit */long long int) min(((+(((/* implicit */int) ((unsigned short) arr_21 [i_10] [i_9] [i_0] [i_1] [i_0]))))), (((/* implicit */int) var_5))));
                                arr_36 [i_0] [i_0] [i_8] [i_9] [i_1 - 3] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_9] [i_8 - 1] [i_1] [i_1 - 4] [i_0])) ? ((+(arr_19 [i_0] [i_1] [i_8] [i_0] [i_0]))) : (max((((/* implicit */int) (signed char)57)), (-1)))));
                                var_28 = ((/* implicit */int) max((((/* implicit */unsigned int) (_Bool)0)), (4294967295U)));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [4] [i_1] [4])))))) ? (((/* implicit */long long int) (((~(((/* implicit */int) arr_5 [i_0] [i_1])))) ^ (arr_8 [(short)6] [i_1] [(short)6])))) : (5072044110287897136LL))))));
                }
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 8; i_11 += 2) 
                {
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0 + 2] [i_12 - 1])) ? (((/* implicit */int) max((((/* implicit */signed char) arr_20 [i_0] [i_1] [i_11] [i_11] [i_12])), (arr_9 [i_0])))) : (((32767) ^ (((/* implicit */int) (_Bool)1))))))), (((unsigned int) ((unsigned int) (unsigned short)29185)))));
                            arr_42 [i_0] [i_1] [i_1] [i_1 + 3] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((arr_33 [i_1] [i_1 - 2] [i_1 - 1] [i_1 + 3] [i_1 - 1]), (arr_40 [i_0] [i_12 + 2])))), (min(((-(arr_39 [i_0] [i_1]))), (((/* implicit */long long int) (signed char)33))))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_19), (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)-63)), (1853688659580335703ULL))))))), ((+(arr_25 [i_0] [i_1 - 3] [i_11] [i_11] [i_1 - 3])))));
                        }
                    } 
                } 
                arr_44 [2LL] [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) max((((/* implicit */unsigned short) var_1)), (var_0))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) -2501247387969662821LL))))) != ((-(var_19))))))));
    /* LoopNest 2 */
    for (signed char i_13 = 2; i_13 < 20; i_13 += 2) 
    {
        for (short i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            {
                var_32 = (unsigned short)7763;
                var_33 = ((/* implicit */unsigned char) ((unsigned short) arr_49 [i_14] [i_14]));
                arr_52 [i_13] [i_14] [i_13] = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) ((arr_51 [i_14]) != (((/* implicit */long long int) 0U)))))) < (min((arr_51 [i_14]), (((/* implicit */long long int) (_Bool)1)))))), (((((((/* implicit */_Bool) 1610465366)) && (((/* implicit */_Bool) -1417335659)))) && (((/* implicit */_Bool) max(((unsigned short)29185), (((/* implicit */unsigned short) (short)63)))))))));
                arr_53 [i_13] [i_13] [i_13] = ((/* implicit */short) max((((/* implicit */long long int) (_Bool)1)), (-7948635917228041165LL)));
            }
        } 
    } 
}
