/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10541
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
    var_14 &= ((/* implicit */unsigned short) ((((int) ((((/* implicit */_Bool) var_0)) ? (1729382256910270464LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-14237)))))) / (((/* implicit */int) ((short) var_10)))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_15 *= ((/* implicit */_Bool) (unsigned short)0);
        var_16 -= ((/* implicit */unsigned short) ((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)65534)) < (((/* implicit */int) (unsigned short)65535))))) < ((+(((/* implicit */int) var_10)))))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)18806)) ? ((-(var_5))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_3))) ? ((+(((/* implicit */int) arr_2 [(signed char)8])))) : (((/* implicit */int) ((signed char) var_0))))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (+((~(arr_3 [(signed char)8] [i_2]))))))));
                var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) (unsigned short)7)))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned short i_5 = 2; i_5 < 13; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (7720562781728069495ULL))) ? (((/* implicit */int) ((unsigned char) 0LL))) : (((/* implicit */int) (unsigned short)46722)))))));
                            var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_1)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned short)46718)))))))))));
                            var_23 -= ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) > (-837731929)))), (var_6)));
                        }
                    } 
                } 
                arr_13 [(short)8] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) var_13)) - (((/* implicit */int) var_9))))))) ? (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned long long int) (unsigned short)18810))))) ? (arr_3 [(short)0] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) ((int) var_2)))));
                var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-35)) ? (var_5) : (((/* implicit */unsigned long long int) arr_3 [12U] [12U]))))) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)18797))))));
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 3; i_7 < 11; i_7 += 2) 
                    {
                        var_25 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) arr_12 [i_7 + 2] [i_0] [i_7 + 1] [i_6] [i_0]))) ? ((-(arr_12 [i_7 + 2] [i_7 - 2] [i_7 + 1] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((arr_14 [(_Bool)1] [12LL] [i_7 + 1] [i_7 + 3] [(_Bool)1]) - (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
                        var_26 = ((/* implicit */_Bool) max((var_26), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) ^ (var_5))))))));
                        arr_19 [i_0] [i_0] [(signed char)8] [(short)8] [i_7] &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_6] [i_7 - 3] [i_7 + 1] [(signed char)2])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) - (arr_14 [i_0] [i_7] [i_7 - 3] [i_7 + 1] [12]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))))));
                        var_27 &= ((/* implicit */unsigned char) ((signed char) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < (var_0)))));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_8 = 2; i_8 < 13; i_8 += 1) 
                    {
                        var_28 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned short)18806), (((/* implicit */unsigned short) (signed char)15))))) > (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) < (arr_22 [6])))) >> (((var_3) - (3622521412862262600LL)))))));
                        var_29 &= ((/* implicit */unsigned short) ((-381640477) >= (-381640479)));
                        arr_24 [i_0] [10LL] [i_3] [(signed char)10] [10LL] &= ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 725781897U)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_8 [(_Bool)0] [i_8 - 2] [(_Bool)0]))));
                        var_30 &= ((/* implicit */unsigned char) (~(((/* implicit */int) ((4294967288U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9))))))));
                        arr_25 [10U] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) -1841228695807919491LL))) ? (432345564227567616ULL) : (min((((/* implicit */unsigned long long int) var_11)), (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_6]))) : (var_5)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        arr_28 [i_1] [2] |= ((/* implicit */unsigned short) ((signed char) var_6));
                        var_31 *= ((/* implicit */short) ((381640478) <= (((/* implicit */int) (unsigned short)18807))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_31 [i_0] [i_0] [i_1] [i_1] [(_Bool)1] &= ((/* implicit */unsigned short) arr_4 [2ULL]);
                        var_32 &= ((signed char) min((((/* implicit */unsigned int) var_4)), (((((/* implicit */_Bool) (short)-29979)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_22 [(short)6])))));
                        arr_32 [i_6] [(short)8] [i_0] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) arr_21 [0U] [i_0] [i_1] [4U] [i_6] [i_1] [i_10]))) | (((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_3] [0] [i_3] [i_6] [i_10])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10))))));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_33 *= ((/* implicit */_Bool) min((830308956U), (2139311549U)));
                        var_34 |= arr_20 [i_0] [i_1] [i_3] [(_Bool)1] [i_11];
                    }
                    var_35 |= ((/* implicit */signed char) ((var_5) > (((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0])))));
                    var_36 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) min(((unsigned short)18809), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) (unsigned short)18797))))) * (var_0)));
                }
                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((var_6) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) <= (((((/* implicit */long long int) (+(((/* implicit */int) (signed char)81))))) - (var_3))))))));
            }
            var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_2))))) >= (var_3))))));
            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) ((_Bool) arr_0 [(unsigned short)6] [i_1])))));
        }
        /* vectorizable */
        for (long long int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            var_40 &= ((/* implicit */unsigned char) var_7);
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) -221719901)) ? (((int) var_9)) : (((/* implicit */int) var_9)))))));
        }
    }
    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) var_2))));
    /* LoopSeq 1 */
    for (short i_13 = 0; i_13 < 18; i_13 += 4) 
    {
        var_43 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (signed char)-1)) ? (3109328778945614060ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-84))))) <= (((unsigned long long int) arr_40 [i_13] [i_13]))));
        var_44 |= ((/* implicit */unsigned long long int) (short)-19441);
    }
}
