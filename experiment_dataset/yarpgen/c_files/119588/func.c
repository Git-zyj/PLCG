/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119588
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
    var_17 = ((/* implicit */unsigned int) ((unsigned char) var_6));
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((long long int) (unsigned short)13832))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -2104398538)) : (-646176012023389738LL))) : ((-(var_15))))), (((((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)22111), (((/* implicit */unsigned short) (unsigned char)19)))))) - (var_10)))));
    var_19 = ((/* implicit */unsigned char) 1120601698U);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned long long int) var_12);
                            var_21 = ((/* implicit */short) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned int) max(((short)18769), ((short)-18773)))), (min((((/* implicit */unsigned int) arr_1 [i_0])), (1605615694U))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
                    {
                        var_23 *= ((/* implicit */unsigned char) max((min((((((/* implicit */unsigned int) arr_4 [i_1])) * (3063640759U))), (((/* implicit */unsigned int) (unsigned char)56)))), (var_16)));
                        var_24 *= ((/* implicit */short) (~(((/* implicit */int) max(((short)-18782), ((short)-18782))))));
                        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (((~(((1120601708U) * (268435392U))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [0LL] [i_5])) ? (((/* implicit */int) (short)-18782)) : (((/* implicit */int) arr_3 [i_0] [i_1]))))))))));
                        arr_18 [6LL] [i_1] [6LL] [i_1] |= ((/* implicit */long long int) ((unsigned int) min((var_11), (((/* implicit */unsigned long long int) var_5)))));
                    }
                    for (short i_6 = 3; i_6 < 12; i_6 += 4) 
                    {
                        arr_23 [i_4] [i_4] [i_4] [i_6 + 2] [0U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_10) / (((/* implicit */long long int) arr_4 [i_1])))) * (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_6 + 2])))))) ? (min((1120601726U), (((/* implicit */unsigned int) ((unsigned char) 4294967295U))))) : (((/* implicit */unsigned int) (~(-342435508))))));
                        arr_24 [i_0 + 1] [i_4] [i_4] [i_6 - 2] = ((/* implicit */unsigned char) var_12);
                        var_26 = ((/* implicit */unsigned char) arr_6 [i_0] [i_0 + 1] [i_0]);
                    }
                    for (int i_7 = 1; i_7 < 11; i_7 += 2) 
                    {
                        var_27 = ((/* implicit */long long int) ((unsigned int) max((143877411), (-2087900667))));
                        var_28 = ((/* implicit */unsigned long long int) ((var_16) * (((((/* implicit */_Bool) (~((-2147483647 - 1))))) ? (4294967295U) : (((unsigned int) (short)14328))))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (-(12U))))));
                        arr_27 [i_4] = arr_1 [i_0];
                        arr_28 [i_4] [i_7 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_4])) * ((+(((/* implicit */int) (_Bool)1))))));
                    }
                    arr_29 [i_4] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                }
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
                        {
                            {
                                var_30 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((int) arr_36 [i_1] [i_9] [6U] [i_1] [i_0]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))) : (var_3))));
                                var_31 &= ((/* implicit */unsigned char) arr_1 [i_10]);
                                var_32 = ((/* implicit */unsigned long long int) var_1);
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_0] [i_0 + 1] [i_0 - 1] [i_1] [i_8])) ? (((((/* implicit */_Bool) 2852898489449142984LL)) ? (arr_6 [i_0 - 1] [i_0 - 1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 - 1] [(unsigned short)4] [12LL] [i_0 - 1] [i_0 + 1] [i_0 - 1]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_35 [i_0] [i_0 - 1] [i_0 + 1] [i_0]))))))))));
                    arr_39 [i_0] = ((/* implicit */unsigned int) (short)16261);
                }
                for (unsigned char i_11 = 3; i_11 < 12; i_11 += 2) 
                {
                    var_34 = ((/* implicit */unsigned short) var_10);
                    arr_44 [i_0] [i_11] [i_11 - 1] [7U] = ((/* implicit */short) ((unsigned char) max(((~(((/* implicit */int) (short)-18790)))), ((-(((/* implicit */int) (unsigned char)132)))))));
                    /* LoopSeq 2 */
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 2) 
                    {
                        arr_48 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) arr_8 [i_11 + 2] [i_11 + 2] [i_11])), (6288815688520383931LL)))));
                        var_35 = min((min((((/* implicit */unsigned long long int) (unsigned char)178)), (18435626979598068131ULL))), (((/* implicit */unsigned long long int) (-(var_7)))));
                        arr_49 [i_11] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_38 [i_0] [(signed char)10] [i_0] [i_11] [i_12] [i_0 + 1])) ? ((+(var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))));
                        var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) (short)-16261)) * (((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) 3763292152U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((7324546592360942822ULL) * (var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)74)))))))));
                        var_37 = ((/* implicit */unsigned int) (unsigned char)188);
                    }
                    for (signed char i_13 = 4; i_13 < 10; i_13 += 3) 
                    {
                        arr_52 [i_11] [i_11] = ((/* implicit */unsigned long long int) ((517139381U) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_0 - 1])))))));
                        var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)42))));
                        /* LoopSeq 4 */
                        for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 1]);
                            var_40 -= ((/* implicit */short) max((max((1810126288235455539LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) : (var_0)))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_34 [4U] [i_13 - 4] [4U] [i_1] [i_0 - 1] [i_0])))))));
                            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) max((((/* implicit */unsigned int) (short)720)), (787089192U)))), (6261448342913649921LL))) * (((/* implicit */long long int) ((/* implicit */int) var_6))))))));
                            var_42 = ((/* implicit */short) arr_47 [i_0] [i_0 - 1] [i_11] [i_13 - 1]);
                            var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-80))) * (58720256U)))) ? (((int) var_11)) : ((~(-1607971371)))));
                        }
                        for (short i_15 = 0; i_15 < 14; i_15 += 4) 
                        {
                            arr_61 [i_0] [i_1] [i_0] [i_0] [i_13] [i_11] = ((/* implicit */unsigned long long int) (short)-1);
                            var_44 |= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_59 [10] [i_0 + 1] [i_15] [i_11 + 1] [i_13 + 2])) ? (var_10) : (arr_59 [(signed char)4] [i_0 + 1] [i_15] [i_11 + 2] [i_13 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_15] [(unsigned char)10] [i_15] [i_1] [i_0])))));
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 2) 
                        {
                            var_45 = ((/* implicit */unsigned long long int) ((unsigned int) (short)-709));
                            arr_64 [8ULL] [i_1] [3U] [i_1] [i_11] [i_16] [i_16] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-22129))));
                        }
                        /* vectorizable */
                        for (int i_17 = 1; i_17 < 13; i_17 += 4) 
                        {
                            var_46 -= ((/* implicit */unsigned int) (~(-143877412)));
                            arr_68 [i_0] [i_0] [i_0] [i_0] [i_11] [i_0] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 805306368)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (var_1))) : (((unsigned int) 1120601698U)));
                            var_47 = ((/* implicit */int) (+(arr_59 [i_13 + 3] [i_13 - 1] [(signed char)10] [i_13] [i_13 + 3])));
                            arr_69 [i_11] [i_11] [i_11 + 2] [i_13] [i_0] [i_17] = ((/* implicit */unsigned int) arr_33 [i_0 + 1] [i_1]);
                            arr_70 [i_11] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_50 [i_0] [i_11] [i_11] [i_11] [0U]))))));
                        }
                    }
                }
                var_48 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)232))) : (var_1)))) ? (((/* implicit */int) arr_14 [8LL] [i_0] [10LL])) : (((/* implicit */int) (!(((/* implicit */_Bool) -1828233748))))))))));
                var_49 = ((/* implicit */short) ((signed char) ((unsigned int) (_Bool)1)));
            }
        } 
    } 
}
