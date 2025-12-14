/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136717
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) var_5);
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_5 [i_0]) & (((/* implicit */unsigned int) -1219755596)))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */int) (signed char)105)))))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-105)) & (((/* implicit */int) (signed char)102))))) : (var_14))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)-46))));
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned int) min((var_19), (min((((/* implicit */unsigned int) ((unsigned char) min((var_4), (((/* implicit */unsigned short) var_11)))))), (((unsigned int) ((((/* implicit */long long int) arr_2 [i_3])) + (arr_0 [(unsigned char)6]))))))));
        var_20 = ((/* implicit */unsigned char) ((unsigned long long int) (_Bool)1));
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)22752)) ? (((/* implicit */int) (unsigned char)44)) : (-1262455052)));
                                arr_21 [15LL] [15LL] [i_5] [(_Bool)1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1135327406)) ? (min((2704267258U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(unsigned char)13])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), (((((/* implicit */long long int) 676245838)) != (-6380070080671534710LL)))))))));
                                var_22 = ((/* implicit */short) (+(min((3041612241U), (((/* implicit */unsigned int) (unsigned char)137))))));
                                arr_22 [i_3] [i_4] [i_4] [4ULL] [4ULL] = ((/* implicit */signed char) ((unsigned char) 16210824844012280643ULL));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */short) ((((int) (unsigned char)119)) | (((/* implicit */int) (signed char)91))));
                    arr_23 [i_4] = ((/* implicit */long long int) ((((unsigned long long int) -1724313784716864700LL)) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    }
    for (int i_8 = 4; i_8 < 21; i_8 += 2) 
    {
        var_24 ^= ((/* implicit */unsigned char) (~(((((/* implicit */int) (signed char)122)) % ((+(((/* implicit */int) (signed char)-105))))))));
        var_25 = ((/* implicit */unsigned int) max((((unsigned long long int) max((-6163063787413772954LL), (((/* implicit */long long int) (signed char)97))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 811621048823627923LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10736))))) ? (((((/* implicit */_Bool) (unsigned short)61401)) ? (((/* implicit */int) (unsigned char)137)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_9)))))));
        var_26 ^= ((/* implicit */long long int) var_10);
    }
    /* vectorizable */
    for (unsigned int i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        /* LoopSeq 4 */
        for (long long int i_10 = 1; i_10 < 15; i_10 += 1) 
        {
            arr_32 [i_9] [i_10] = ((/* implicit */short) (~(366394249)));
            var_27 += ((/* implicit */int) (signed char)-90);
        }
        for (unsigned char i_11 = 3; i_11 < 14; i_11 += 4) 
        {
            var_28 -= ((/* implicit */short) (-(3187860858142019112LL)));
            arr_37 [i_9] [i_11] [i_11 - 1] = ((arr_31 [i_11] [i_9]) << ((((-(((/* implicit */int) var_10)))) + (18487))));
            var_29 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)8)) & (((/* implicit */int) (_Bool)1))));
        }
        for (short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 1; i_14 < 15; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)3)) != (((/* implicit */int) var_13)))))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -710873611)) > (17033208960932543891ULL)));
                            arr_50 [i_9] [i_9] [i_14] [(short)1] [(signed char)11] [(unsigned char)8] [i_15] = ((/* implicit */unsigned char) arr_35 [i_14] [i_14]);
                            var_32 |= ((/* implicit */unsigned long long int) arr_4 [i_9] [i_12]);
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_1) | (((/* implicit */unsigned int) 1674573139)))))));
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
            {
                var_34 ^= ((/* implicit */signed char) arr_11 [i_9]);
                arr_54 [(unsigned short)12] [i_16] [(unsigned char)12] = ((/* implicit */_Bool) var_7);
                /* LoopNest 2 */
                for (long long int i_17 = 2; i_17 < 13; i_17 += 2) 
                {
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((9792341) / (-710873626))))));
                            arr_60 [i_16] [i_17 + 3] [(unsigned char)4] = (+(((/* implicit */int) (signed char)-105)));
                            var_36 -= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)32088)) : (((/* implicit */int) (signed char)-90))));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */short) (+(((/* implicit */int) arr_7 [(short)8]))));
            /* LoopNest 2 */
            for (short i_19 = 0; i_19 < 16; i_19 += 4) 
            {
                for (unsigned short i_20 = 4; i_20 < 13; i_20 += 1) 
                {
                    {
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), (((((/* implicit */_Bool) (unsigned short)41282)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)142))) : (12904548860014700591ULL)))));
                        var_39 = ((((/* implicit */_Bool) ((unsigned long long int) arr_18 [12ULL] [i_12] [(unsigned short)12] [i_9] [i_19]))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)119))));
                        var_40 &= ((/* implicit */int) ((((((/* implicit */_Bool) (signed char)-102)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162))) : (5542195213694851024ULL))) + (((/* implicit */unsigned long long int) ((3588962536U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                        var_41 = arr_7 [i_19];
                        arr_68 [i_9] [(unsigned char)10] [i_19] [i_20] = ((/* implicit */unsigned int) arr_49 [i_20] [i_19] [i_12] [i_12] [i_9]);
                    }
                } 
            } 
            var_42 = ((/* implicit */long long int) arr_66 [i_9] [i_12] [i_9] [i_9]);
        }
        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 4) 
        {
            arr_73 [i_21] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (5542195213694851029ULL)));
            arr_74 [i_9] [i_9] = ((/* implicit */signed char) (((+(var_7))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
        }
        var_43 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (short)18614)) ? (((/* implicit */int) (unsigned char)125)) : (((/* implicit */int) (unsigned short)16695))))));
        arr_75 [10ULL] [10ULL] = ((/* implicit */_Bool) var_10);
    }
    var_44 = ((/* implicit */int) var_10);
}
