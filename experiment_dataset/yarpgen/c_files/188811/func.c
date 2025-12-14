/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188811
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_4))));
    var_12 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned int i_2 = 4; i_2 < 13; i_2 += 1) 
            {
                for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (_Bool)1)) : (520093696))))));
                        var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2349045239U)) ? (2349045239U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)16128))))) >> (((((((/* implicit */int) arr_8 [i_0] [i_0])) ^ (((/* implicit */int) (short)-16384)))) - (29888)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) arr_7 [8] [i_2 + 3] [i_2 - 3])) >= (((/* implicit */int) var_1)))))));
                        arr_12 [i_0] [6LL] [i_0] [10] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_1) ? (((/* implicit */long long int) var_6)) : (597655368250689486LL)))))))));
                        var_15 = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned int) arr_11 [i_2 - 2] [i_2 - 2] [i_2 - 3] [i_3]))))), (arr_1 [i_0])));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_9 [i_3] [i_3 + 1] [i_0]), (((/* implicit */unsigned int) arr_7 [i_0] [i_2 + 1] [i_3 + 2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(29360128U))))))) : (((/* implicit */int) arr_5 [i_0] [i_0]))));
                            var_17 = ((/* implicit */unsigned long long int) max(((short)2078), (((/* implicit */short) (signed char)46))));
                        }
                        for (short i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            var_18 = ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (arr_0 [i_0] [i_5]))), (((/* implicit */unsigned long long int) arr_11 [i_5] [i_3] [i_0] [i_0])))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) (short)-23208)), (var_9)))) - (42311))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((arr_15 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 + 1]) < (min((arr_15 [i_3 + 2] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 + 2]), (((/* implicit */unsigned long long int) arr_11 [i_3 + 2] [i_3 - 1] [i_3 + 1] [i_3 + 1])))))))));
                            var_20 ^= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (16825308629704332086ULL)))) ? (((((/* implicit */_Bool) arr_10 [i_0] [(short)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_2] [i_1] [i_0]))) : (var_10))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) ((short) var_7))) ? (5000951871503453984ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (arr_9 [i_0] [i_2] [i_0])))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-23208)))))))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_22 = ((/* implicit */int) (-((+(268173312ULL)))));
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2759916863U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5596))) : (2759916863U)));
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 15; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned short) var_2);
                        var_25 = ((/* implicit */signed char) (-((-(((/* implicit */int) (unsigned char)54))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */signed char) var_3);
            arr_25 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)114)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_0 [i_0] [i_6])));
        }
        for (unsigned char i_9 = 3; i_9 < 15; i_9 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_10 = 2; i_10 < 15; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 4) 
                {
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_19 [i_0])) ? (((/* implicit */int) arr_19 [i_0])) : (((/* implicit */int) arr_19 [i_0])))), (((/* implicit */int) arr_19 [i_0]))));
                            var_28 -= (!(((/* implicit */_Bool) 9308689144052868470ULL)));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */short) (((!(((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_9 [i_0] [i_9] [i_0])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_9])) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_9 - 2] [i_9] [9U] [i_9 - 2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_28 [i_0] [i_0] [i_9])))) : (((var_1) ? (((/* implicit */int) var_7)) : (219295311))))))));
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    var_30 = ((/* implicit */signed char) 17275073924589964606ULL);
                    var_31 -= ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_20 [i_9 + 1] [i_9 - 2] [i_9] [i_9 - 1])) ? (arr_20 [i_9 + 1] [i_9 - 2] [i_9] [i_9 - 1]) : (arr_20 [i_9 + 1] [i_9 - 2] [i_9 + 1] [i_9 - 1])))));
                    var_32 = ((/* implicit */int) arr_22 [i_0] [i_0] [i_13] [i_14]);
                    arr_40 [i_0] [(short)4] [i_13] [i_13] = ((/* implicit */signed char) max((max((arr_0 [i_0] [i_9]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))))), (((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) var_3)), (arr_9 [i_0] [i_0] [i_0]))))))));
                    var_33 ^= ((/* implicit */short) 134216704U);
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 3) /* same iter space */
                    {
                        var_34 = ((/* implicit */int) arr_39 [i_0]);
                        var_35 = ((/* implicit */unsigned short) (-(17024609299732443466ULL)));
                        var_36 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_0] [(signed char)15] [i_9 + 1])) ? (((/* implicit */int) ((_Bool) 2064384ULL))) : (var_6)));
                    }
                    for (signed char i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */signed char) max((((arr_26 [i_0] [i_15]) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) var_4))));
                        var_38 *= ((/* implicit */short) max((((/* implicit */int) arr_33 [i_9] [i_9 - 1] [i_9] [i_9 - 2])), (((((/* implicit */_Bool) arr_33 [i_9] [i_9 - 3] [i_9 - 3] [i_9 + 1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_33 [i_9] [i_9 - 2] [i_9] [i_9 - 1]))))));
                    }
                    for (signed char i_18 = 0; i_18 < 16; i_18 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) max(((+(((/* implicit */int) min((var_4), (var_4)))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
                        var_41 = ((/* implicit */signed char) ((var_3) > (((/* implicit */int) (short)-5612))));
                    }
                    var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_0] [i_13] [i_13]))) | (((((arr_34 [i_0] [i_0] [(short)13] [i_0] [i_13] [i_15] [i_15]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49152))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)21000)))))) : (arr_15 [i_0] [i_0] [13] [i_9 + 1] [i_15] [i_13] [i_9 + 1]))))))));
                }
                for (unsigned short i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    arr_54 [i_0] [i_0] [i_0] [i_13] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)42)) ? (max((((/* implicit */unsigned long long int) (signed char)111)), (arr_15 [4ULL] [4ULL] [4ULL] [4ULL] [i_13] [i_13] [i_19]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) >= (max((arr_45 [0LL] [i_9 + 1]), (((/* implicit */unsigned long long int) var_9))))))) : (((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), (arr_39 [i_0]))))));
                    var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)123)) >> (((((/* implicit */int) (short)23187)) - (23172)))));
                    arr_55 [i_0] [i_9] [i_13] [i_9] [i_9] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0]))))));
                }
                arr_56 [i_13] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(-219295311)));
                var_44 = ((/* implicit */signed char) (short)-5601);
            }
        }
    }
    for (signed char i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
    {
        arr_60 [i_20] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_20] [i_20]))));
        var_45 = ((/* implicit */long long int) var_4);
        arr_61 [i_20] = ((/* implicit */unsigned int) ((arr_3 [i_20]) ? (((int) var_7)) : (((/* implicit */int) min(((short)-16384), ((short)7185))))));
    }
}
