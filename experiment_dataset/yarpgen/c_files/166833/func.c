/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166833
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
    var_11 = ((/* implicit */long long int) var_0);
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) min((((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19814))) : (var_5))))), (var_5))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            var_13 &= ((/* implicit */short) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (arr_0 [i_1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)13)) || (((/* implicit */_Bool) var_1))))))))));
            var_14 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_1 [i_0])))) ? (((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) var_9)))) & (((/* implicit */int) var_2)))) : (((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_0 [i_0])))) ^ (((((/* implicit */int) arr_2 [i_1] [(signed char)0] [(unsigned short)10])) & (((/* implicit */int) (unsigned short)13434))))))));
            var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((((/* implicit */int) var_10)) & (((/* implicit */int) (short)32766)))) : ((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))) ^ (((/* implicit */int) min((((short) 2726106178U)), (((/* implicit */short) ((((/* implicit */int) arr_3 [i_0] [i_1])) < (((/* implicit */int) arr_2 [i_1] [(unsigned short)6] [i_0]))))))))));
            arr_4 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) (signed char)127)) ^ (((/* implicit */int) (unsigned short)50152)))) : ((~(((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))))), (((/* implicit */int) ((((/* implicit */int) max(((unsigned short)27928), (((/* implicit */unsigned short) (unsigned char)156))))) <= (((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */short) (unsigned char)149))))))))));
            var_16 &= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_0])), (1689533973759968653LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)177), (((/* implicit */unsigned char) var_2)))))) : (((((/* implicit */_Bool) (unsigned short)23814)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))) << (((((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) (unsigned short)52102))))) ^ (((((/* implicit */_Bool) (short)-19806)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (8796090925056LL))))) + (156LL)))));
        }
        for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            var_17 *= ((/* implicit */short) max((min((((arr_5 [i_2 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (short)19814))))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)36)) | (((/* implicit */int) arr_1 [6LL]))))))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 + 2] [i_2 + 1] [i_2 - 1]))) | (arr_5 [i_0])))));
            var_18 = ((/* implicit */unsigned int) arr_5 [i_0]);
            arr_7 [i_0] &= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_0] [i_2 + 1])), (arr_5 [i_0])))) ? ((-(((/* implicit */int) arr_6 [i_0])))) : (((/* implicit */int) ((signed char) (short)-19806))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)3))))))))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_5 = 4; i_5 < 11; i_5 += 4) 
                {
                    arr_14 [i_5] [i_4] [i_0] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4])) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) arr_9 [i_4 + 1]))));
                    var_19 = ((/* implicit */short) (~(arr_5 [i_0])));
                }
                for (unsigned char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_4 + 2])) || (((/* implicit */_Bool) arr_17 [i_4 - 1] [i_4 + 3] [i_4 - 1] [i_4 + 1] [i_4 - 1]))));
                    var_21 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_2 [i_0] [i_3] [i_0])))) * (((((/* implicit */int) var_1)) << (((/* implicit */int) (_Bool)1))))));
                    var_22 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) / (arr_5 [i_0]))) % (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23374))) : (var_0))))));
                }
                arr_19 [i_0] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_18 [i_0] [i_0] [i_0] [i_0] [(signed char)0] [i_4]) / (arr_5 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 + 2] [i_4 - 1] [i_4 + 3] [i_4 - 1]))) : (arr_12 [i_4] [i_4] [i_4])));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (long long int i_8 = 1; i_8 < 9; i_8 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((unsigned char) (unsigned short)42173))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)55011)))) && (((((/* implicit */_Bool) (short)(-32767 - 1))) || (((/* implicit */_Bool) arr_3 [i_3] [i_3])))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_21 [i_4] [i_4 + 1] [i_4 + 1]))));
            }
            var_26 = ((/* implicit */unsigned short) arr_8 [i_0]);
            var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))) ? (-3247751529735499646LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))));
        }
        for (signed char i_9 = 1; i_9 < 9; i_9 += 4) 
        {
            var_28 = var_3;
            /* LoopSeq 2 */
            for (signed char i_10 = 2; i_10 < 10; i_10 += 4) 
            {
                arr_31 [(unsigned char)11] [i_9] [i_9] [i_9] = arr_9 [(short)5];
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 10; i_11 += 1) 
                {
                    for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) ((((((/* implicit */int) (short)27232)) + (((/* implicit */int) arr_23 [(signed char)2] [(signed char)2] [i_10 - 1] [i_11 + 2] [i_12] [(signed char)2] [i_9 + 1])))) - (((/* implicit */int) min((max(((short)-17098), (arr_33 [10LL] [i_11 - 2] [10LL] [i_0]))), (((/* implicit */short) max((((/* implicit */unsigned char) (signed char)-5)), (var_8)))))))));
                            var_30 = ((/* implicit */long long int) ((signed char) arr_33 [(short)6] [i_9 - 1] [i_10] [i_12]));
                        }
                    } 
                } 
                arr_37 [i_10] [i_9] [i_9 + 2] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)79)))))) - (3656796236U)))) ? (((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((2147483648U) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)22))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) arr_34 [i_0] [i_0]))))) ? (((/* implicit */int) arr_13 [i_10 + 1] [i_9] [i_9 + 2] [i_0])) : (((/* implicit */int) (unsigned short)11761)))))));
                var_31 += ((/* implicit */signed char) min((max((((/* implicit */long long int) ((((/* implicit */int) arr_35 [i_0] [i_0] [i_0] [i_9 - 1] [i_10 - 2])) * (((/* implicit */int) arr_13 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 + 2]))))), (((-1319021867411064652LL) % (7658846177054514945LL))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_10 + 1] [i_9 - 1])))))));
                var_32 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_9] [i_9 + 2] [i_9 + 2] [i_10 - 2])) ? ((~(((/* implicit */int) arr_3 [i_0] [i_10 - 1])))) : (((/* implicit */int) arr_2 [i_0] [i_9 - 1] [i_10 + 1]))))) ? (((arr_18 [i_9] [i_9 - 1] [i_10 + 1] [i_10 - 1] [i_10 - 1] [i_10 - 1]) / (arr_18 [i_9] [i_9 + 2] [i_10 - 2] [i_10] [i_10 - 1] [i_10 + 2]))) : (((arr_18 [i_9] [i_9] [(unsigned short)1] [i_9] [i_9 + 3] [i_9 + 1]) + (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)22)) | (((/* implicit */int) (unsigned short)5984)))))))));
            }
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                var_33 = ((/* implicit */unsigned int) min((((/* implicit */int) min(((unsigned char)252), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_34 [i_9] [i_9])))))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_4))))) ? (((/* implicit */int) min(((signed char)8), ((signed char)-30)))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (short)2047)))))))));
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((var_4), ((unsigned char)175)))), (max((((/* implicit */unsigned int) var_10)), (var_0)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [i_9] [i_9])) & (((/* implicit */int) arr_21 [i_0] [i_9 - 1] [i_13]))))) ? (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) (signed char)76))))) : (((arr_5 [(signed char)10]) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))))));
                arr_42 [i_0] [(signed char)8] [(signed char)8] [i_9 + 3] = ((/* implicit */_Bool) ((short) max((((((/* implicit */_Bool) arr_32 [i_13] [(unsigned char)10] [(unsigned char)10] [(unsigned char)10])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)8128)))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_6))))))));
                var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 8589934588LL)) ? (2147483663U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) min((((/* implicit */short) (unsigned char)0)), ((short)19825)))))))));
            }
        }
        /* LoopNest 2 */
        for (signed char i_14 = 4; i_14 < 10; i_14 += 4) 
        {
            for (unsigned short i_15 = 2; i_15 < 11; i_15 += 3) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (-(arr_29 [i_0] [i_14] [i_14 - 4] [i_0])))), (max((((/* implicit */long long int) ((unsigned int) var_7))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) - (8589934588LL)))))));
                    var_37 += ((/* implicit */unsigned short) var_2);
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned char)75), (((/* implicit */unsigned char) arr_8 [i_14 - 4]))))), (((((/* implicit */_Bool) (unsigned short)62956)) ? (((/* implicit */int) (unsigned short)32512)) : (((/* implicit */int) arr_15 [i_0] [i_14] [i_14] [i_15]))))))) ? (((/* implicit */int) (short)-23)) : (((((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_28 [i_0] [i_15 + 1]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (short)4088)) || (((/* implicit */_Bool) (unsigned char)98)))))))));
                }
            } 
        } 
        arr_49 [i_0] = ((/* implicit */_Bool) arr_10 [i_0] [(_Bool)1] [(_Bool)1] [i_0]);
        var_39 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_2)) ? (arr_5 [i_0]) : (-8589934588LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 2613868345U)) ? (((/* implicit */int) (signed char)29)) : (((/* implicit */int) (short)-1000))))))) ? (((/* implicit */int) min((arr_36 [i_0] [i_0] [(short)5] [i_0]), (arr_36 [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-30)), ((unsigned short)42406)))) / ((~(((/* implicit */int) (short)9312))))))));
        /* LoopSeq 2 */
        for (unsigned int i_16 = 1; i_16 < 11; i_16 += 4) 
        {
            arr_54 [i_0] [i_16] [(unsigned short)6] = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_11 [i_0] [i_16] [i_16 + 1] [i_16])) & (((/* implicit */int) arr_10 [i_16 + 1] [i_16] [i_16 - 1] [i_16])))), ((~(((/* implicit */int) arr_28 [i_0] [(unsigned short)9]))))));
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 12; i_17 += 3) 
            {
                for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_19 = 1; i_19 < 11; i_19 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned short) (signed char)28);
                            var_41 = ((/* implicit */short) var_1);
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 3; i_20 < 11; i_20 += 2) 
                        {
                            arr_64 [i_16] [i_20] [(short)10] [i_17] [(unsigned short)0] [i_16 - 1] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_5 [(signed char)7]) < (((/* implicit */long long int) ((/* implicit */int) (short)-18024)))))) - (((/* implicit */int) ((_Bool) 2613868345U)))));
                            var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_0] [i_0] [i_16] [i_16 + 1] [(unsigned char)8] [i_18 - 1])) ? (arr_62 [i_16] [i_16] [i_16] [i_16 + 1] [i_16]) : (arr_62 [i_16] [i_16] [i_16] [i_16 + 1] [(unsigned short)4]))))));
                            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) (((+(((/* implicit */int) var_2)))) ^ (((/* implicit */int) arr_40 [i_16 + 1] [i_18 - 1])))))));
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_20 + 1] [i_16 - 1])) ? (((/* implicit */int) (short)9303)) : (((/* implicit */int) arr_43 [i_20 - 1] [i_16 - 1]))));
                            var_45 = ((/* implicit */short) (signed char)-21);
                        }
                        var_46 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0])) / (((/* implicit */int) arr_10 [i_16 - 1] [i_16 + 1] [i_18 - 1] [i_18 - 1]))))) ? (((/* implicit */int) min((((/* implicit */short) arr_6 [i_0])), ((short)389)))) : (((/* implicit */int) var_3))));
                        var_47 ^= ((/* implicit */short) min(((~(((long long int) arr_6 [i_0])))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_18 - 1] [i_18] [i_18] [i_18 - 1])) ? (((/* implicit */int) arr_56 [i_0] [i_18 - 1])) : (((/* implicit */int) var_7)))))));
                    }
                } 
            } 
        }
        for (signed char i_21 = 1; i_21 < 11; i_21 += 4) 
        {
            arr_67 [i_0] [i_0] |= ((/* implicit */_Bool) (unsigned short)63479);
            arr_68 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) arr_33 [i_21 + 1] [i_21 - 1] [i_21] [i_21 - 1]))), (min((((((/* implicit */_Bool) (short)-12776)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)11)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)1557)) : (((/* implicit */int) arr_17 [i_0] [i_21] [i_21] [i_0] [i_21]))))))));
        }
    }
}
