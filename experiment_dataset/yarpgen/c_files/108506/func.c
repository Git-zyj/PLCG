/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108506
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
    var_18 *= ((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */_Bool) (~(720944557)))) ? (((((/* implicit */int) var_9)) & (((/* implicit */int) var_11)))) : (((/* implicit */int) ((signed char) -893635089)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) /* same iter space */
                {
                    arr_8 [i_0] [(signed char)7] [(signed char)7] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_2] [i_2]);
                    arr_9 [i_0] [i_0] [i_1] [i_2] = (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (((unsigned int) (unsigned char)231)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1] [i_0]))))));
                }
                for (short i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */_Bool) ((short) arr_2 [18ULL] [i_1]));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (-((~(arr_5 [i_0] [i_4]))))))));
                        var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        arr_17 [i_3] [i_3] [i_1] [i_3] &= ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) arr_2 [(short)19] [16LL])))));
                    }
                    for (int i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((max((arr_19 [i_0] [i_1] [i_1] [i_3] [i_5] [i_5]), (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)24763)))))) : (min((17890004508709346306ULL), (((/* implicit */unsigned long long int) var_2)))))))))));
                        var_22 ^= ((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), ((~(((/* implicit */int) min((var_17), (((/* implicit */unsigned short) arr_16 [(short)14] [(short)14] [i_3] [i_3] [i_3] [(short)14])))))))));
                    }
                }
                for (short i_6 = 0; i_6 < 25; i_6 += 2) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) arr_4 [i_0])))));
                    arr_23 [i_0] [i_1] [i_0] = arr_1 [i_1] [i_1];
                    arr_24 [i_0] [(short)17] [i_6] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned int) (((~(((/* implicit */int) (short)9650)))) - (((((/* implicit */int) (short)24765)) / (((/* implicit */int) arr_15 [i_6] [i_1] [i_0] [i_0]))))))), (((unsigned int) (short)-31994))));
                }
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_30 [i_1] |= ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) arr_22 [i_0])))));
                            var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_6 [i_8] [i_8] [i_8] [18LL])) * (((/* implicit */int) arr_21 [i_0] [i_8] [i_7] [i_7])))) < (((((arr_16 [i_0] [i_0] [i_1] [i_7] [i_8] [i_8]) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_7] [i_0])) : (((/* implicit */int) arr_27 [i_0] [(signed char)5])))) << (((((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0])) - (16)))))));
                            /* LoopSeq 4 */
                            for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
                            {
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_7] [i_8])))) ? (((/* implicit */int) (!(arr_22 [i_0])))) : (((((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_21 [i_0] [i_8] [(unsigned char)21] [i_8])) + (31))) - (22))))))))));
                                var_26 *= min(((+(5464149487273383679LL))), (((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) arr_16 [i_0] [i_1] [i_7] [i_1] [(unsigned char)0] [i_1])))))));
                                var_27 = ((/* implicit */unsigned char) var_0);
                                var_28 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_1] [i_8])) ? (arr_2 [i_8] [i_1]) : (arr_31 [i_9] [i_7] [i_1]))), (((/* implicit */unsigned int) ((unsigned char) var_14)))));
                            }
                            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) /* same iter space */
                            {
                                var_29 &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-(var_0)))))) ? ((~(((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_1] [i_7] [i_8] [i_10] [i_1]))))) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (1105510713U)))) > (((((/* implicit */int) var_16)) * (((/* implicit */int) arr_32 [i_0] [5U] [15U] [i_8] [i_8])))))))));
                                var_30 = ((/* implicit */unsigned long long int) (!(min((((((/* implicit */_Bool) arr_35 [12LL] [i_8] [16LL])) || (((/* implicit */_Bool) var_2)))), (((((/* implicit */_Bool) (short)-24763)) || (((/* implicit */_Bool) 3474180798U))))))));
                                var_31 = ((/* implicit */unsigned char) ((signed char) (short)-24778));
                                var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_28 [i_10] [i_8] [i_7] [i_0])) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) ((var_14) == (((/* implicit */int) (_Bool)1)))))))))));
                            }
                            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 3) /* same iter space */
                            {
                                var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
                                var_34 = (~((-(((((/* implicit */long long int) var_4)) ^ (arr_28 [i_0] [i_1] [i_7] [i_0]))))));
                            }
                            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) /* same iter space */
                            {
                                arr_44 [i_1] [i_1] [i_1] [i_1] [i_1] = (((+((+(((/* implicit */int) var_6)))))) + (((/* implicit */int) ((-3717403607092032117LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-24777)))))));
                                var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) ((((unsigned int) arr_43 [i_0] [15LL] [i_7] [i_8] [i_12] [i_12])) << (((arr_14 [i_0] [i_0] [i_0] [i_0]) - (1233307680472232391ULL))))))));
                            }
                            /* LoopSeq 3 */
                            for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                            {
                                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((min((arr_39 [i_0]), (arr_39 [i_0]))) ? (((/* implicit */int) arr_39 [i_1])) : (((arr_39 [i_7]) ? (((/* implicit */int) arr_39 [i_0])) : (((/* implicit */int) arr_39 [i_8])))))))));
                                var_37 = ((/* implicit */long long int) ((signed char) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (signed char)98)))));
                            }
                            /* vectorizable */
                            for (int i_14 = 0; i_14 < 25; i_14 += 4) 
                            {
                                arr_51 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) (short)28379)) ^ (var_3))));
                                var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) (-(arr_5 [i_1] [i_7]))))));
                                var_39 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (_Bool)0)))));
                            }
                            for (short i_15 = 0; i_15 < 25; i_15 += 2) 
                            {
                                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) arr_28 [i_0] [(signed char)2] [i_7] [(_Bool)1]))));
                                var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) ((unsigned short) var_13)))));
                            }
                            var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((signed char) arr_54 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? ((~(((/* implicit */int) arr_43 [i_0] [i_7] [(unsigned char)15] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_19 [17U] [i_7] [i_7] [(_Bool)1] [21ULL] [(unsigned short)10]))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_16 = 0; i_16 < 25; i_16 += 4) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        arr_61 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) (-(arr_35 [i_0] [14] [i_17])));
                        arr_62 [i_17] [i_17] [i_16] [i_17] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (var_4))));
                        var_43 = ((/* implicit */int) arr_10 [i_1]);
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_65 [i_0] [i_0] [15LL] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_16] [i_18])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_32 [i_0] [(short)16] [i_16] [i_18] [i_16])) : (arr_34 [i_0] [(signed char)23] [i_16] [i_0]))) : (((/* implicit */int) ((260096) == (((/* implicit */int) (short)32767)))))));
                        arr_66 [3LL] [i_1] [i_16] [i_18] = ((/* implicit */unsigned int) var_17);
                        var_44 = ((/* implicit */short) max((var_44), (((/* implicit */short) ((arr_0 [i_16] [i_18]) >= (1886086481U))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_19 = 0; i_19 < 25; i_19 += 1) 
                    {
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            {
                                var_45 *= ((/* implicit */_Bool) var_5);
                                arr_73 [i_0] [i_19] [19LL] [i_0] [i_0] = ((((arr_48 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_52 [i_1] [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_1]))))));
                    var_47 |= ((/* implicit */unsigned short) var_11);
                }
                var_48 |= ((/* implicit */signed char) min((((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [5U] [i_1] [i_1] [i_0]))) | (var_4))))), (((/* implicit */unsigned int) ((var_9) && (((/* implicit */_Bool) arr_69 [i_0] [22LL] [i_1] [i_1] [i_1])))))));
            }
        } 
    } 
}
