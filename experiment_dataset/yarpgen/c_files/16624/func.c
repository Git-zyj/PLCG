/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16624
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
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_13))))) ? ((~(((/* implicit */int) var_11)))) : (((/* implicit */int) ((unsigned char) (signed char)101))))))))));
    var_17 = ((/* implicit */long long int) (~(((/* implicit */int) var_2))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) arr_1 [i_0] [i_0]))))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) arr_0 [(unsigned short)14])) : (((/* implicit */int) var_14))))))) ? (var_6) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) (signed char)-48)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (5883562757785298033LL)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_10 [(short)12] [(signed char)21] [i_2] [i_2] [i_2])) ? (((/* implicit */int) ((signed char) var_6))) : (((((((/* implicit */int) var_1)) + (2147483647))) << (((arr_7 [i_0] [(signed char)6] [8U] [(unsigned char)14]) - (3272527356148406209LL))))))));
                        arr_11 [i_3] [i_2] [i_1] [(signed char)6] [i_1] [i_3] = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) (signed char)47)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)127)))), (((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) (short)-23075)) : (((/* implicit */int) arr_1 [(signed char)21] [i_2])))))), (((/* implicit */int) arr_1 [i_0] [i_1]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((((/* implicit */_Bool) (short)-5616)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)5616)))), (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_2] [i_2 + 1])))))))));
                            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)29))) : ((+(-3560708623394258422LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)127)), ((unsigned char)145)))))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) /* same iter space */
                        {
                            arr_18 [i_0] [i_3] [i_1] [i_2] [10LL] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) (short)-5616)))));
                            arr_19 [i_0] [(unsigned short)5] [(signed char)19] [i_3] [(short)20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_3] [i_3] [i_2] [(short)1] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) : ((((!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [(unsigned char)22])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)2075)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)82))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))))));
                            var_21 *= ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [12LL] [i_5])) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (short)-25890))))))));
                        }
                        /* LoopSeq 2 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [(signed char)2] [i_3] [i_1] [i_3] [i_3])) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_3 [(signed char)22] [(unsigned char)19])) : (((/* implicit */int) arr_3 [i_0] [(signed char)8]))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_3] [(signed char)19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))) : (arr_6 [i_2] [9U]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)23075))))), (8962999771257754872LL))));
                        }
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            arr_25 [(signed char)0] [i_2] [i_3] [i_7] = ((/* implicit */long long int) max((min(((-(((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) arr_8 [i_0] [23U] [i_3] [i_7])))), (((((/* implicit */int) ((short) (unsigned short)3801))) ^ (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-47))))))));
                            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(3095412269744746261LL)))) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)30253))))) ? (min((((/* implicit */long long int) arr_3 [i_0] [(unsigned char)17])), ((-9223372036854775807LL - 1LL)))) : (var_5)));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((long long int) min((((/* implicit */unsigned int) min((var_11), (arr_14 [(signed char)18] [i_8] [i_8] [(unsigned char)12] [i_8] [i_8] [i_8])))), (arr_15 [(unsigned char)0] [(unsigned char)18])))))));
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        for (signed char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            {
                                arr_37 [(unsigned char)21] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)109))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_0]))) : (((unsigned int) max((((/* implicit */unsigned char) var_12)), (var_10))))));
                                var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) min((((/* implicit */long long int) (signed char)82)), (((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_29 [(signed char)3] [i_8] [i_11]))))))))));
                            }
                        } 
                    } 
                    arr_38 [(unsigned short)6] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_2), ((signed char)127))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */short) max((max(((~(var_8))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max((var_14), (((/* implicit */unsigned short) max(((short)10044), (var_9)))))))));
    /* LoopSeq 1 */
    for (short i_12 = 0; i_12 < 25; i_12 += 2) 
    {
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (unsigned short)61952)) : (((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_39 [i_12])))) : (max((-6992610124521214341LL), (((/* implicit */long long int) arr_39 [i_12]))))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_40 [(unsigned short)4])) : (((/* implicit */int) (signed char)82)))))) : (((/* implicit */int) min((var_9), (min(((short)-21655), (((/* implicit */short) var_12)))))))));
        arr_41 [i_12] = ((/* implicit */unsigned char) (signed char)-82);
    }
}
