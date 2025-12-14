/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171141
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171141 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171141
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
                {
                    var_14 *= ((/* implicit */long long int) ((((/* implicit */int) (signed char)6)) >= (((/* implicit */int) (short)23860))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) arr_4 [i_1]);
                                var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_5 [i_1 - 1] [i_1 - 1] [i_1]), (((/* implicit */short) var_6))))), (((((/* implicit */_Bool) 3927522130U)) ? (((((/* implicit */_Bool) 367445166U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (11737598906811024684ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))))))))));
                                var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)62)) >= (((/* implicit */int) (unsigned char)151))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */unsigned int) arr_5 [i_0] [i_1] [i_5]);
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1140939481U)) ? (-1721079393935906177LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */int) (short)-23862)) & (1845478802))) : (-1845478801)))) : (((((((/* implicit */_Bool) var_1)) ? (var_2) : (2219540913U))) << (((var_12) - (4217193040896676675ULL))))))))));
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 13; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_5] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) (_Bool)0))));
                                var_20 = ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)109))))) ? (((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) min((min((((/* implicit */short) arr_6 [i_0] [i_0] [i_0] [i_0])), (arr_10 [i_5] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]))), (((/* implicit */short) var_9))))) : (arr_13 [i_0] [i_1] [i_0] [i_5])));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) ((short) min((((/* implicit */long long int) var_6)), (arr_11 [i_5] [i_5] [i_5]))))) ? (((int) arr_6 [i_1] [i_1 + 1] [i_1 + 1] [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)61))))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_5] [i_1] [i_1] [i_8] [i_9])) : (((/* implicit */int) max((var_8), (var_8))))))))));
                                arr_25 [i_0] [i_0] [i_9] [i_9] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1845478802)) ? (144115188042301440ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33)))));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                {
                    var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10] [i_1] [i_0] [i_10]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) + (4443658371751657355ULL)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (arr_28 [i_0] [i_1] [i_1 + 2] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_7 [i_1 - 2] [i_1 + 2] [i_1 + 1] [i_1 + 1]))))));
                    var_24 = ((/* implicit */unsigned int) (+(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)195)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_10] [i_10] [i_1] [i_10])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((8893343097576227632ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)222)))))) : (((/* implicit */int) ((2219540913U) >= (((/* implicit */unsigned int) -1845478802)))))))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 12; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 4) 
                        {
                            {
                                arr_35 [i_11] [i_0] [i_11] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) 1066455916)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)144))) : (367445185U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_10])) ? (((/* implicit */int) (unsigned char)195)) : (((/* implicit */int) var_3)))))))));
                                var_26 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1 + 1])) ? (arr_21 [i_0] [i_1] [i_1 + 1] [i_11] [i_12]) : (arr_21 [i_0] [i_1] [i_1 + 1] [i_1] [i_1])))) ? (((((((/* implicit */int) (unsigned char)124)) - (((/* implicit */int) var_10)))) + (((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 2] [i_1 + 2])))) : (((((/* implicit */_Bool) ((var_4) ? (arr_27 [i_10] [i_10] [i_1]) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_13))))) : ((+(arr_29 [i_0] [i_1] [i_10] [i_1])))))));
                            }
                        } 
                    } 
                }
                var_27 = ((((/* implicit */_Bool) arr_27 [i_0] [i_1 - 1] [i_1 + 1])) ? (max((arr_27 [i_0] [i_0] [i_0]), (arr_27 [i_0] [i_0] [i_1 - 1]))) : (((/* implicit */int) var_4)));
                arr_36 [i_0] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) 1845478802)) ? (-1378025449725987558LL) : (((/* implicit */long long int) arr_34 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_28 *= ((/* implicit */unsigned long long int) var_8);
}
