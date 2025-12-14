/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185213
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
    var_19 ^= ((/* implicit */short) var_10);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 + 1])))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((short)332), (((/* implicit */short) (_Bool)1))))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)-54)) ^ (((/* implicit */int) (_Bool)0)))))));
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
            {
                arr_10 [i_2] [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1]))));
                var_22 = ((/* implicit */int) min((var_22), ((-(((/* implicit */int) (short)-12279))))));
            }
            for (long long int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
            {
                var_23 = (unsigned short)25023;
                arr_14 [i_2] [i_4] [i_4] [2ULL] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                arr_15 [i_1] [i_2] [i_1] [i_1] |= ((/* implicit */int) ((65532ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_4)), (arr_5 [i_2] [i_2] [i_2])))))));
            }
            for (long long int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
            {
                arr_19 [i_2] [i_2] [i_1] = ((/* implicit */short) min((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [(short)9])) : (((/* implicit */int) (signed char)27)))), (((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_7 [i_1 - 1] [i_5] [i_5]))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (signed char)-116)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_8 [i_1] [i_1 - 2]))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775787LL)) ? (((/* implicit */int) (short)-26126)) : (((/* implicit */int) (_Bool)1))))), (arr_6 [(unsigned char)5] [i_1 + 1]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-116)), (var_17)))))));
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-41)) * (((/* implicit */int) (signed char)64))))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_2] [i_1]))) : (var_13)))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_1 - 2] [i_1]))))));
                var_26 = (-(((/* implicit */int) ((signed char) ((signed char) (short)32766)))));
                var_27 = ((/* implicit */_Bool) 18041909817303170815ULL);
            }
            var_28 |= ((/* implicit */short) (-(max((((int) arr_5 [(unsigned char)8] [i_2] [17LL])), ((+(((/* implicit */int) (signed char)-43))))))));
            arr_20 [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) var_18);
            var_29 ^= ((((((/* implicit */int) arr_9 [i_1] [(unsigned char)0] [i_1] [i_1])) ^ (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_1 - 1] [i_1])))) >= (((arr_9 [i_1] [4ULL] [(_Bool)1] [i_1]) ? (((/* implicit */int) arr_9 [i_1] [i_1] [8LL] [i_1])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1] [i_1])))));
            var_30 = ((/* implicit */unsigned long long int) arr_12 [i_2]);
        }
        for (long long int i_6 = 1; i_6 < 23; i_6 += 1) 
        {
            var_31 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-406))))), ((~(-9177312779289771724LL)))))), (((unsigned long long int) arr_12 [i_1 - 2]))));
            var_32 = ((/* implicit */unsigned char) ((((long long int) max((((/* implicit */unsigned char) var_11)), (var_16)))) / (((/* implicit */long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) (signed char)-1)))))))));
            var_33 = ((/* implicit */unsigned int) var_7);
            var_34 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)127))))));
        }
        arr_23 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 826864613)) * (min((((/* implicit */unsigned long long int) arr_21 [i_1] [i_1 + 1])), (8574922846869342789ULL)))));
        arr_24 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (signed char)89)), ((short)-333)))) - ((+(((/* implicit */int) ((signed char) var_15)))))));
    }
    for (unsigned short i_7 = 1; i_7 < 18; i_7 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_8 = 2; i_8 < 17; i_8 += 1) /* same iter space */
        {
            var_35 ^= ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((4292870144U) / (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)333))) - (var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_7] [(signed char)2])) ? (((/* implicit */int) arr_4 [i_8 + 1])) : (((/* implicit */int) arr_25 [i_7 + 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_9 [i_7] [i_7] [i_8] [(short)16])), (arr_25 [0LL])))) : (((((/* implicit */_Bool) 70368744177152ULL)) ? (((/* implicit */int) (short)332)) : (((/* implicit */int) (signed char)-1)))))))));
            var_36 += ((/* implicit */unsigned short) (+(((long long int) arr_26 [i_8 + 2]))));
        }
        /* vectorizable */
        for (signed char i_9 = 2; i_9 < 17; i_9 += 1) /* same iter space */
        {
            var_37 ^= ((/* implicit */long long int) arr_27 [(short)14]);
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 20; i_10 += 4) 
            {
                for (long long int i_11 = 2; i_11 < 19; i_11 += 3) 
                {
                    {
                        arr_39 [i_7] [i_7] [i_7] [i_7 + 2] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) var_12)) * ((+(((/* implicit */int) var_16))))));
                        var_38 = (-((-(((/* implicit */int) var_12)))));
                        arr_40 [i_7 - 1] [i_7] [i_7] [i_10] [(signed char)14] [(unsigned char)14] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))) * (((/* implicit */int) (signed char)53))));
                        var_39 = ((/* implicit */_Bool) (-(((/* implicit */int) var_17))));
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_13 = 3; i_13 < 19; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */signed char) arr_45 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]);
                            var_41 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [12U] [(signed char)16] [(signed char)16] [i_14])) || (((/* implicit */_Bool) arr_7 [i_14] [(signed char)6] [(signed char)6]))));
                            var_42 = ((/* implicit */unsigned int) (short)-18841);
                            arr_48 [(short)3] [i_13] [i_7] [i_9] [i_7 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_13 - 3] [(unsigned char)17] [i_7 + 2])) ? (((/* implicit */long long int) (-(1970684770)))) : (arr_21 [i_7] [i_7 - 1])));
                        }
                    } 
                } 
                arr_49 [i_7] [i_7] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_7 - 1] [i_9 + 2] [i_12])) - (((/* implicit */int) var_3))));
                arr_50 [i_7 - 1] [i_7] = ((/* implicit */long long int) ((((/* implicit */int) var_16)) * ((+(((/* implicit */int) (short)-26410))))));
            }
            for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
            {
                var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * ((((_Bool)1) ? (((/* implicit */int) (short)-18833)) : (-1325059527)))));
                var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */int) arr_43 [i_7])) : (((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-110))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                var_45 += ((/* implicit */unsigned char) (((+(((/* implicit */int) var_9)))) % (((((/* implicit */_Bool) (unsigned short)25023)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (signed char)-108))))));
            }
            for (short i_16 = 2; i_16 < 17; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_17 = 0; i_17 < 20; i_17 += 2) 
                {
                    for (short i_18 = 0; i_18 < 20; i_18 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */short) ((unsigned long long int) 4096ULL));
                            var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (unsigned short)65504))));
                        }
                    } 
                } 
                var_48 = ((/* implicit */_Bool) ((unsigned int) (signed char)-16));
                arr_61 [i_9] [i_7] = ((/* implicit */short) ((16492485989961005LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13817)))));
            }
            for (long long int i_19 = 0; i_19 < 20; i_19 += 1) 
            {
                var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) arr_34 [i_9] [19LL]))));
                var_50 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_63 [i_7 - 1])) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) - (var_0)))));
                var_51 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)40512))));
                var_52 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_7 + 2]))) * ((+(0LL)))));
                arr_64 [(short)6] [(short)6] [12ULL] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_47 [i_7] [i_7] [i_7 + 2] [i_7] [(short)0]))));
            }
            arr_65 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_53 [i_7] [i_9] [(signed char)11] [i_9 + 2]))))));
        }
        for (unsigned int i_20 = 1; i_20 < 18; i_20 += 2) 
        {
            /* LoopNest 2 */
            for (short i_21 = 1; i_21 < 19; i_21 += 1) 
            {
                for (unsigned int i_22 = 1; i_22 < 17; i_22 += 2) 
                {
                    {
                        arr_73 [i_20] [(unsigned short)12] [i_7] [13LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned char) (_Bool)1)), (var_1))), (((/* implicit */unsigned char) max((((/* implicit */signed char) (_Bool)1)), ((signed char)25))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_59 [i_21 + 1] [i_22] [(signed char)7] [(unsigned char)10] [i_21 + 1]))) / (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [i_7] [(short)7] [(short)7])))));
                        var_53 -= ((/* implicit */signed char) arr_42 [i_20 + 1] [i_20 + 1]);
                        var_54 = ((/* implicit */unsigned int) (+((-(((((/* implicit */int) arr_29 [i_7] [i_20] [i_20])) * (((/* implicit */int) var_12))))))));
                        var_55 |= ((/* implicit */long long int) (+((-(((/* implicit */int) (unsigned short)41753))))));
                    }
                } 
            } 
            var_56 = ((/* implicit */_Bool) arr_29 [i_7] [6LL] [i_20 - 1]);
        }
        for (unsigned int i_23 = 1; i_23 < 19; i_23 += 2) 
        {
            var_57 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_69 [i_7] [i_7] [i_23]))));
            var_58 = ((/* implicit */unsigned long long int) arr_22 [(_Bool)1]);
            arr_77 [i_7 - 1] [i_23 + 1] [i_7] = ((/* implicit */unsigned char) max(((~((+(var_13))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_21 [i_7] [i_7])))))));
            arr_78 [i_7] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)59708))))));
        }
        arr_79 [i_7] [i_7] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_7] [13U] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)480)) : (((/* implicit */int) arr_33 [(_Bool)1] [(_Bool)1] [17LL] [i_7]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_7] [i_7] [i_7] [i_7 - 1] [i_7]))) : (arr_63 [i_7 + 2])))));
        var_59 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((((/* implicit */short) arr_36 [2LL])), ((short)4955))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_24 = 3; i_24 < 18; i_24 += 2) 
        {
            var_60 = ((/* implicit */short) ((_Bool) (-(((/* implicit */int) var_18)))));
            arr_83 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) (+(arr_66 [(signed char)5] [i_7])));
        }
        /* vectorizable */
        for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_26 = 1; i_26 < 17; i_26 += 1) 
            {
                for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                {
                    {
                        arr_91 [i_7] [(unsigned char)19] [i_26] [i_27] = ((((unsigned int) 9223372036854775807LL)) * (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))));
                        var_61 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-4946)) ? (-9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        var_62 = ((/* implicit */signed char) ((unsigned long long int) arr_12 [i_25]));
                        var_63 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_90 [i_26 + 1] [i_7] [i_7] [i_7 + 1])))));
                    }
                } 
            } 
            var_64 = ((/* implicit */_Bool) var_15);
            arr_92 [i_7] [i_25] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)125)) && (((/* implicit */_Bool) (short)0))));
            var_65 = ((/* implicit */short) ((arr_27 [i_7 + 2]) ? ((-(var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [16LL] [i_25] [(signed char)13] [i_7 + 2])))));
        }
        arr_93 [i_7] [i_7] = (+((-(arr_62 [i_7 + 1] [(signed char)4] [12LL] [6U]))));
    }
    var_66 = ((/* implicit */long long int) var_11);
    var_67 = ((/* implicit */unsigned int) (+((+(((long long int) var_15))))));
}
