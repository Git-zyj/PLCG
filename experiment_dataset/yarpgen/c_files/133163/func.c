/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133163
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
    var_13 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)50))))) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((var_8) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) (unsigned char)128))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            var_14 -= ((/* implicit */unsigned int) ((((arr_2 [i_1 - 2]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_1 - 2])))) | (((/* implicit */int) min((arr_2 [i_0]), (arr_2 [i_0]))))));
            var_15 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((min(((unsigned char)60), ((unsigned char)154))), ((unsigned char)196)))), (((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1 - 1] [i_1 - 1])))))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7168))) * (31U)))) * (((unsigned long long int) 2844563544U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (min((536870911U), (((/* implicit */unsigned int) arr_7 [i_0] [i_2] [i_3]))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_4 + 1])) >= (((/* implicit */int) (unsigned char)255))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 28ULL))))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) | (7086365943721726926ULL))) - (7086365943721726957ULL)))))));
                                arr_13 [i_2] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [(unsigned char)8] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [i_3] [i_4])))) < (((((((/* implicit */int) (unsigned char)113)) + (((/* implicit */int) (unsigned char)81)))) - (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) var_3)))))))));
                                var_18 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)106)), (arr_5 [i_2] [i_2 - 2]))))) != (10068553199922492681ULL));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_6 = 1; i_6 < 20; i_6 += 1) 
        {
            var_19 += ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (unsigned short)58368))))) >= (((/* implicit */int) arr_16 [(unsigned short)13] [i_6] [(unsigned short)13])))))));
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max((((((/* implicit */_Bool) ((18446744073709551613ULL) << (((((/* implicit */int) arr_9 [i_0] [i_6 + 1] [i_0] [i_6 - 1] [i_0])) - (50147)))))) ? (((/* implicit */int) ((2299397926U) == (var_8)))) : (((/* implicit */int) (unsigned char)29)))), (((((/* implicit */int) (unsigned char)6)) + (((/* implicit */int) (unsigned char)89)))))))));
            var_21 += ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)3)), (((arr_12 [(_Bool)1] [i_0] [i_6 - 1] [i_6] [i_0]) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_6 - 1] [i_6] [i_0]))))));
            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) 16720336543963744862ULL))))) * (((/* implicit */int) (!(arr_3 [i_6] [i_6 + 2]))))));
            /* LoopSeq 1 */
            for (unsigned char i_7 = 1; i_7 < 21; i_7 += 2) 
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (unsigned char)210))));
                arr_20 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1149569696U)) ? (1839210380U) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)93)) % (((/* implicit */int) (_Bool)1)))))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)83))) * (18446744073709551608ULL))), (((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))))) : (((/* implicit */unsigned long long int) (((-(var_8))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))))))));
                /* LoopSeq 2 */
                for (unsigned char i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        arr_27 [i_7 - 1] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) max((((var_10) * (2ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_8 + 3] [i_7] [i_6])) * (((/* implicit */int) (unsigned char)63)))))));
                        arr_28 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)96)))), (max((1924888200U), (((/* implicit */unsigned int) arr_14 [i_6] [i_6]))))))) ? (max((arr_17 [i_6] [i_0]), (((/* implicit */unsigned int) (unsigned char)63)))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)31)) * (((/* implicit */int) arr_24 [i_9] [i_9] [i_9] [i_9]))))), (((unsigned int) (unsigned char)255))))));
                        arr_29 [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) var_4);
                        var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) (_Bool)1))));
                        var_25 = var_1;
                    }
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-21)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) : (2708742847U)));
                        arr_33 [i_6] [i_6] [(unsigned short)2] [i_6] [(unsigned char)8] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)96))) ^ (1995569370U))), (((/* implicit */unsigned int) ((arr_7 [(unsigned char)5] [i_6 + 1] [i_8 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0)))))));
                        var_27 = arr_17 [i_6] [i_6];
                    }
                    var_28 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 1839210380U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_19 [i_8 + 3])))), (((/* implicit */int) (unsigned char)0))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_11 = 2; i_11 < 21; i_11 += 4) 
                    {
                        var_29 = ((/* implicit */unsigned short) (((_Bool)1) ? (1839210398U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        arr_36 [i_0] [(unsigned char)6] [i_0] &= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))) - (var_11));
                        arr_37 [i_0] [i_0] [i_0] [i_6] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)0)) || (((/* implicit */_Bool) ((1200702164U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102)))))));
                    }
                    arr_38 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) 2299397924U)) && (((/* implicit */_Bool) var_1))))), (var_7)));
                }
                for (signed char i_12 = 0; i_12 < 22; i_12 += 1) 
                {
                    arr_42 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) 3600739562U);
                    /* LoopSeq 2 */
                    for (unsigned char i_13 = 3; i_13 < 20; i_13 += 2) 
                    {
                        var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)46121)) ? (arr_10 [(unsigned char)14] [i_6]) : (2299397922U))))));
                        arr_46 [i_7] [i_6] = ((/* implicit */_Bool) max((((var_11) >> (((((((/* implicit */int) (unsigned char)63)) << (((((/* implicit */int) (unsigned char)204)) - (183))))) - (132120565))))), (((/* implicit */unsigned int) (_Bool)1))));
                    }
                    /* vectorizable */
                    for (unsigned int i_14 = 2; i_14 < 20; i_14 += 4) 
                    {
                        var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_4))));
                        var_32 ^= ((/* implicit */_Bool) var_0);
                    }
                    arr_49 [i_0] [i_6] = (i_6 % 2 == zero) ? (((unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))), (((((/* implicit */int) var_0)) % (((/* implicit */int) arr_18 [i_12] [i_6] [i_6] [i_0]))))))) : (((unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)7))))), (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_18 [i_12] [i_6] [i_6] [i_0])))))));
                    arr_50 [i_0] [15ULL] [i_0] [i_0] [i_0] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2092154030U)) ? (((/* implicit */int) (unsigned short)4095)) : (((/* implicit */int) (unsigned short)65533))));
                }
            }
        }
    }
    for (signed char i_15 = 0; i_15 < 25; i_15 += 2) 
    {
        var_33 = (unsigned char)255;
        var_34 = (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_53 [i_15])) : (((/* implicit */int) (unsigned char)130))))) : (max((4294967295U), (((/* implicit */unsigned int) (signed char)127)))));
    }
    var_35 = ((/* implicit */signed char) 3U);
    var_36 = ((/* implicit */unsigned char) min((var_36), (max((var_7), (((/* implicit */unsigned char) (_Bool)1))))));
}
