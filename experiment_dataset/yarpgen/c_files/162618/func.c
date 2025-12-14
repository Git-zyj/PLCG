/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162618
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
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */short) var_5)), ((short)24201)));
    var_14 = var_12;
    var_15 = ((/* implicit */short) (-(((/* implicit */int) ((signed char) ((((/* implicit */long long int) 1601071768)) + (var_6)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) var_1);
        arr_2 [5] [i_0] = ((/* implicit */int) var_5);
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 14; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (short i_3 = 4; i_3 < 13; i_3 += 2) 
            {
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_17 += ((/* implicit */unsigned short) arr_9 [i_3] [i_2 - 1] [i_3] [i_4]);
                        arr_13 [i_2] [i_2] = ((/* implicit */short) ((unsigned short) arr_6 [i_3 - 4]));
                        var_18 = ((unsigned short) arr_4 [i_2 - 1]);
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)1546))) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) ((signed char) -555796492)))));
                        /* LoopSeq 4 */
                        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)17)))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) - (var_6)))));
                            var_21 = ((/* implicit */unsigned short) arr_9 [i_2] [i_2 - 1] [i_2 - 1] [i_4]);
                            arr_16 [i_2] = ((short) (signed char)-69);
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)75)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3])))))) ? (((/* implicit */int) ((short) arr_4 [i_1]))) : (((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) << (((((((/* implicit */int) (signed char)(-127 - 1))) + (148))) - (20)))))));
                        }
                        for (signed char i_6 = 3; i_6 < 12; i_6 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned short) (-(((((/* implicit */int) arr_3 [(unsigned short)9])) * (((/* implicit */int) var_11))))));
                            var_24 = ((/* implicit */short) arr_14 [i_2] [i_2 - 1] [i_3 - 2] [i_4] [i_6] [i_2] [i_6 + 3]);
                            var_25 = ((/* implicit */int) ((long long int) (signed char)60));
                        }
                        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            arr_22 [i_7] [i_3] [i_4] [i_3] [10LL] [i_3] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) -1LL))) ? (((/* implicit */int) arr_14 [i_3] [i_2 + 1] [i_3] [i_3] [i_3] [i_3] [i_3 + 2])) : (((/* implicit */int) (unsigned short)56640))));
                            arr_23 [i_2] = ((/* implicit */short) ((long long int) ((((/* implicit */int) arr_14 [i_2] [i_2] [(short)7] [i_4] [i_7] [i_1] [i_2 + 1])) != (((/* implicit */int) arr_21 [i_1] [i_2] [i_3 + 1] [i_2] [i_2])))));
                        }
                        for (short i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            var_26 -= ((/* implicit */long long int) arr_1 [i_1]);
                            arr_28 [i_1] [i_1] [i_2] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */int) (unsigned short)8896)) : (((/* implicit */int) (unsigned short)60979))));
                            arr_29 [i_1] [i_3] [i_2] [i_8] = ((/* implicit */signed char) ((unsigned short) (unsigned short)56639));
                        }
                    }
                } 
            } 
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_1] [i_1])) ? (((/* implicit */int) arr_20 [i_1])) : (((/* implicit */int) var_0))));
        }
        for (short i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            var_28 = ((/* implicit */long long int) max((var_28), (arr_30 [i_1] [i_1] [i_9])));
            var_29 = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned short) ((short) var_8)))), (((((/* implicit */int) (unsigned short)8896)) << (((((/* implicit */int) ((short) arr_15 [i_1] [i_1] [i_1] [(signed char)3] [i_1] [i_9] [i_9]))) - (17392)))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                for (signed char i_11 = 1; i_11 < 11; i_11 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 15; i_12 += 1) 
                        {
                            var_30 *= ((/* implicit */short) ((-16LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)32762)))));
                            arr_42 [i_12] [i_9] = ((/* implicit */signed char) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (unsigned short)8902))))), (var_11)));
                            arr_43 [i_1] [i_9] [i_10] [i_11] [i_10] |= ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [i_1])))) + (((0LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))) + (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-63)))))));
                            var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_1]), ((unsigned short)16)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [(signed char)6] [(signed char)6] [i_11] [i_12])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_12]))))))))) : (min((var_6), (((/* implicit */long long int) (unsigned short)65530))))));
                            arr_44 [i_1] [i_1] [i_12] [i_11] [i_12] [i_12] = ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_26 [i_11] [i_12] [i_11 + 4] [i_11] [i_11 + 1])) : (((/* implicit */int) arr_26 [i_12] [i_11 + 4] [i_11 + 1] [i_10] [i_10]))));
                        }
                        arr_45 [i_9] [i_10] = ((/* implicit */signed char) ((((var_7) % (((/* implicit */long long int) ((/* implicit */int) arr_32 [(signed char)2] [i_10] [(short)12]))))) << (((((((/* implicit */_Bool) (short)32752)) ? (((long long int) arr_19 [i_1] [i_1] [i_9] [i_1] [i_11])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_7 [i_11])))))))) + (9094098714164524222LL)))));
                        arr_46 [i_1] [i_9] = ((/* implicit */unsigned short) (signed char)115);
                    }
                } 
            } 
            var_32 = (unsigned short)8884;
        }
        for (short i_13 = 1; i_13 < 11; i_13 += 1) 
        {
            arr_51 [i_1] [i_1] [i_13] = ((short) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_31 [i_13 + 4] [i_13 + 4])) : (((/* implicit */int) ((short) 14LL)))));
            /* LoopSeq 2 */
            for (short i_14 = 2; i_14 < 14; i_14 += 1) 
            {
                arr_54 [i_1] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) var_5))) << (((min((var_1), (((/* implicit */long long int) (unsigned short)65519)))) - (65495LL)))))) ? ((~(((/* implicit */int) arr_15 [i_13] [i_14 + 1] [i_14] [i_13] [i_13 + 3] [i_1] [i_1])))) : (((((/* implicit */int) min(((short)32767), (((/* implicit */short) var_5))))) | (((/* implicit */int) var_8))))));
                var_33 = ((/* implicit */short) min(((unsigned short)0), (((/* implicit */unsigned short) ((short) var_12)))));
                /* LoopNest 2 */
                for (short i_15 = 0; i_15 < 15; i_15 += 1) 
                {
                    for (unsigned short i_16 = 2; i_16 < 13; i_16 += 4) 
                    {
                        {
                            arr_60 [i_1] [i_15] [i_14 - 2] [i_15] [i_16] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_12))));
                            arr_61 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-16)) ? (((((/* implicit */int) (short)7957)) * (((/* implicit */int) (unsigned short)11772)))) : (((/* implicit */int) (signed char)-51))));
                        }
                    } 
                } 
            }
            for (short i_17 = 0; i_17 < 15; i_17 += 1) 
            {
                /* LoopSeq 3 */
                for (signed char i_18 = 0; i_18 < 15; i_18 += 2) 
                {
                    var_34 = ((/* implicit */long long int) (unsigned short)20872);
                    arr_67 [i_1] [i_13] [(signed char)8] [i_13] [(unsigned short)5] = ((/* implicit */short) 14);
                    arr_68 [i_1] [i_13 - 1] [(unsigned short)12] [i_18] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_65 [i_1] [i_13 + 3]), (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) <= (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (9223372036854775807LL))) % (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                }
                for (unsigned short i_19 = 0; i_19 < 15; i_19 += 1) 
                {
                    arr_72 [i_1] [i_19] [i_17] [i_19] = min(((signed char)115), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_1] [i_1] [i_19])) || (((/* implicit */_Bool) arr_5 [i_1]))))));
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_52 [i_1] [i_13 + 2] [i_17] [i_19]))))))) ? (((((/* implicit */_Bool) var_0)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)53))))) : ((+(((long long int) arr_37 [i_1] [i_13] [7] [i_19]))))));
                    var_36 = ((/* implicit */short) (~(min((((/* implicit */long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) (signed char)-96))))), (var_6)))));
                    var_37 = ((/* implicit */signed char) ((((arr_11 [i_1] [i_13] [i_17] [i_13]) > (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_19])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_13 + 3])) == (((/* implicit */int) arr_1 [i_13 + 1]))))) : ((~(min((((/* implicit */int) (short)12764)), (arr_63 [i_1] [i_17])))))));
                    var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) ((signed char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (4224240029630116588LL))), (((/* implicit */long long int) var_10))))))));
                }
                for (signed char i_20 = 2; i_20 < 14; i_20 += 2) 
                {
                    var_39 = ((/* implicit */signed char) min((((((1182588956) >> (((((/* implicit */int) arr_9 [i_20] [i_13] [i_17] [i_20])) + (18668))))) << (((((/* implicit */int) (signed char)-74)) + (78))))), (((/* implicit */int) ((((/* implicit */_Bool) min((-1182588957), (arr_73 [i_1] [i_13 + 1] [i_1] [i_20] [i_20 - 1])))) && (((/* implicit */_Bool) min((((/* implicit */long long int) (short)-32767)), (-9223372036854775777LL)))))))));
                    var_40 = ((/* implicit */unsigned short) arr_1 [i_1]);
                }
                arr_75 [i_1] [5] [i_17] [5] = ((/* implicit */unsigned short) -4);
                var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((short) 1182588944)))) - ((+((-(arr_17 [(short)12] [(signed char)1] [i_17] [(short)12] [i_17])))))));
            }
            arr_76 [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1] [i_1]))));
            var_42 = ((/* implicit */unsigned short) ((arr_0 [i_13 + 1]) / (((/* implicit */int) arr_21 [i_1] [i_13] [i_1] [(signed char)0] [i_13 - 1]))));
        }
        var_43 = ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (short)30662)) - (((((/* implicit */_Bool) arr_24 [i_1] [(unsigned short)14] [i_1] [(signed char)12] [i_1] [i_1])) ? (((/* implicit */int) arr_38 [(short)7])) : (((/* implicit */int) var_9)))))));
    }
    var_44 = ((/* implicit */signed char) ((int) ((((/* implicit */int) ((signed char) var_0))) != (((((/* implicit */int) (signed char)35)) / (((/* implicit */int) (short)-32767)))))));
}
