/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149540
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
    /* LoopSeq 1 */
    for (long long int i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_11 = ((/* implicit */long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9316))) * (arr_0 [i_0 - 4]))), (((/* implicit */unsigned int) max(((short)-1), (((/* implicit */short) (signed char)-112)))))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 4; i_2 < 20; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_3 = 4; i_3 < 20; i_3 += 3) 
                {
                    var_12 |= ((/* implicit */_Bool) min(((((!(((/* implicit */_Bool) (unsigned char)112)))) ? (min((18446744073709551587ULL), (((/* implicit */unsigned long long int) (unsigned short)56219)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)9325), (((/* implicit */unsigned short) (unsigned char)255)))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)15)))))));
                    arr_12 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)25852)))) >> (((((-1551526884264889457LL) ^ (((/* implicit */long long int) arr_0 [i_3 + 2])))) + (1551526886349257016LL))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)32)) <= ((-(((/* implicit */int) (unsigned short)56231)))))))));
                    arr_13 [i_0 + 1] [i_1] [i_1] [i_0] = ((/* implicit */long long int) 3375898651U);
                    var_13 = ((/* implicit */short) (unsigned char)255);
                    var_14 = ((/* implicit */int) ((_Bool) arr_2 [i_0]));
                }
                arr_14 [i_0] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (unsigned char)22)), (arr_5 [i_0 + 1] [i_0] [i_0 + 1]))), (((/* implicit */unsigned long long int) max((4124155143U), (((/* implicit */unsigned int) (short)511)))))));
                var_15 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (((long long int) ((9223372036854775796LL) ^ (((/* implicit */long long int) arr_10 [i_0] [i_0] [i_0] [i_0])))))));
            }
            for (long long int i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
            {
                var_16 -= (-(min((((((/* implicit */_Bool) -2028472222)) ? (((/* implicit */int) arr_3 [i_4])) : (((/* implicit */int) (short)-1434)))), ((+(1200359016))))));
                /* LoopSeq 4 */
                for (long long int i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3375898651U)), (min((((/* implicit */unsigned long long int) ((arr_16 [i_0] [i_0] [i_0]) ? (3375898648U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_4 - 1] [i_1] [i_0 + 2])))))), (min((var_10), (((/* implicit */unsigned long long int) 2147483647))))))));
                    arr_21 [i_0] [i_4 + 1] [i_1 + 1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_1 + 1] [i_0] [i_4 + 1]))))), (min((((/* implicit */unsigned long long int) (unsigned char)207)), (arr_5 [i_0 - 4] [i_0] [i_0 + 1])))));
                }
                for (long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) ((min((arr_9 [i_4 + 1] [i_4 + 1] [i_4] [i_0 - 3] [i_4 - 1]), (((/* implicit */long long int) var_7)))) >= (((/* implicit */long long int) max((arr_10 [i_0] [i_1] [9ULL] [i_0 - 3]), (arr_10 [i_0] [i_6] [i_4 + 2] [i_0 - 3]))))));
                    var_19 = ((/* implicit */unsigned long long int) arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0] [(unsigned char)7]);
                    arr_24 [i_0] [i_0] [i_4] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(short)18] [i_1] [i_0]))) < (min(((-(arr_0 [i_4]))), (min((((/* implicit */unsigned int) (_Bool)0)), (3375898648U)))))));
                }
                for (long long int i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */short) max((var_9), (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_1 + 1] [i_4 + 1] [i_0])) >= (((/* implicit */int) (_Bool)1)))))));
                    var_21 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_0]))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (281474976710655LL) : (9223372036854775807LL)))));
                    arr_28 [i_0] [10] [10] [i_7] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) -1256061287)) & (min((-9223372036854775807LL), (((long long int) var_2))))));
                }
                for (long long int i_8 = 0; i_8 < 22; i_8 += 4) /* same iter space */
                {
                    arr_32 [i_0] = ((/* implicit */unsigned char) 9223372036854775807LL);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_9 = 0; i_9 < 22; i_9 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-39))))) ^ ((+(var_9)))));
                        var_23 = ((/* implicit */long long int) (_Bool)1);
                        var_24 = ((/* implicit */long long int) ((arr_22 [i_0] [i_1 + 1] [i_1 + 1] [i_4 + 2] [i_0] [i_9]) | (((/* implicit */int) arr_30 [i_0] [i_0] [7ULL] [i_1 + 1]))));
                    }
                    /* vectorizable */
                    for (short i_10 = 0; i_10 < 22; i_10 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */int) ((919068640U) >> (0ULL)));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-1)) : (arr_34 [i_0] [i_0 + 2] [i_0 + 2] [i_0] [i_0] [i_0])));
                        var_27 = arr_31 [i_0] [i_0];
                    }
                    for (short i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
                    {
                        arr_40 [i_0] = (+(((/* implicit */int) arr_31 [i_11] [i_0])));
                        arr_41 [i_11] [i_8] [i_0] [i_0] [i_1] [i_0 + 2] = ((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_1] [i_0] [i_1]);
                        var_28 = ((unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) == (var_9))))));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_0] [i_0 - 1] [i_0] [i_0 - 4] [i_0 - 2] [i_1] [i_1 + 1])) ^ (((/* implicit */int) arr_36 [i_0] [(short)2] [i_0 - 4] [i_0 + 1] [i_0 - 2] [i_0 + 1] [i_1 + 1]))))) ? (3904297098399293869LL) : (((/* implicit */long long int) min(((-(arr_0 [i_4 - 1]))), (((((/* implicit */_Bool) -1008422770)) ? (2291277562U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)50))))))))));
                    }
                    arr_42 [i_0] [i_0] [i_1] [i_4] [i_8] = ((/* implicit */long long int) -269494165);
                }
            }
            /* vectorizable */
            for (long long int i_12 = 1; i_12 < 20; i_12 += 3) /* same iter space */
            {
                var_30 &= ((/* implicit */signed char) var_9);
                var_31 = ((/* implicit */long long int) 4294967295U);
                var_32 = ((/* implicit */int) (((~(((/* implicit */int) arr_16 [i_0] [i_0 - 3] [i_0])))) < (((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (long long int i_13 = 1; i_13 < 20; i_13 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned int i_14 = 0; i_14 < 22; i_14 += 2) 
                {
                    var_33 = ((/* implicit */unsigned char) -866665397);
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_34 [i_0] [i_1 + 1] [i_13 - 1] [i_14] [i_15] [16LL])) - (((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))));
                        var_35 = ((/* implicit */short) (+((-9223372036854775807LL - 1LL))));
                        var_36 -= arr_23 [i_0] [i_1] [i_13] [i_14] [i_15];
                        arr_52 [i_0 + 1] [i_1 + 1] [i_0 + 1] [i_0] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_5 [i_14] [i_14] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_0] [i_0] [i_14]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1)))))));
                        arr_53 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 4] [i_0] = ((/* implicit */unsigned char) (signed char)-40);
                    }
                    for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                    {
                        var_37 |= ((/* implicit */unsigned char) arr_56 [i_1 + 1] [i_13] [i_13] [i_13] [i_13] [i_13 - 1] [i_13 + 2]);
                        var_38 = ((/* implicit */unsigned short) 6291456);
                        arr_58 [i_1 + 1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-866665408)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) -1LL))));
                    }
                }
                var_39 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) arr_48 [i_0] [i_1 + 1] [i_1 + 1])) <= (((/* implicit */int) var_6)))));
                arr_59 [i_0] [i_1 + 1] = ((/* implicit */signed char) (_Bool)1);
                arr_60 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (short)329);
            }
            /* LoopSeq 1 */
            for (short i_17 = 1; i_17 < 21; i_17 += 3) 
            {
                arr_64 [i_0] [i_1] [i_17] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)173)), (((((/* implicit */unsigned int) -136487692)) & (919068640U)))));
                var_40 = (unsigned char)87;
                /* LoopSeq 2 */
                for (int i_18 = 0; i_18 < 22; i_18 += 4) 
                {
                    arr_67 [(short)6] [i_1] [i_17] [i_18] [i_17 - 1] [i_18] &= ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_18])) ? (arr_2 [i_18]) : (((/* implicit */long long int) 2147483647)))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16)))));
                    arr_68 [i_0] = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [(signed char)20]);
                }
                for (long long int i_19 = 0; i_19 < 22; i_19 += 3) 
                {
                    var_41 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) (short)579))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_19 [(short)4] [i_1] [i_1] [21ULL]))))) : (min((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)-39)))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 3375898655U))))));
                    arr_72 [i_0] [i_0] [20ULL] [(short)13] = ((/* implicit */_Bool) ((signed char) min((arr_38 [i_0] [i_1 + 1] [i_17 + 1]), (((/* implicit */int) (unsigned char)105)))));
                    arr_73 [i_1] [i_0] [18] = ((/* implicit */int) (~(var_9)));
                }
                arr_74 [i_0] = ((/* implicit */int) ((long long int) (+(7317882259141190861ULL))));
                var_42 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)83)))) ? (((/* implicit */long long int) arr_6 [i_0 + 2])) : ((~(max((var_9), (((/* implicit */long long int) (unsigned char)16))))))));
            }
            arr_75 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((arr_29 [i_0] [i_1 + 1]) >> (((-3558784314454802640LL) + (3558784314454802665LL)))))) ? (6633010143549591213LL) : (((/* implicit */long long int) arr_35 [i_0 - 3] [i_0])))));
        }
        var_43 = ((/* implicit */unsigned int) ((((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)2615), (((/* implicit */unsigned short) (unsigned char)63)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */long long int) ((-866665397) > (((/* implicit */int) (unsigned char)139))))), (arr_37 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 2] [i_0] [i_0])))));
        arr_76 [18] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-114))) - (7317882259141190866ULL)));
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 20; i_20 += 3) 
        {
            for (unsigned char i_21 = 0; i_21 < 22; i_21 += 4) 
            {
                {
                    arr_83 [i_0] = ((/* implicit */short) max((min((18446744073709551588ULL), (arr_5 [i_0 - 2] [i_0 - 2] [i_0 - 2]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)249)))))));
                    /* LoopSeq 3 */
                    for (int i_22 = 1; i_22 < 21; i_22 += 3) 
                    {
                        var_44 += ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)48))) + (6633010143549591213LL))) ^ (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)65535), (arr_15 [i_21])))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_23 = 0; i_23 < 22; i_23 += 1) 
                        {
                            var_45 = var_4;
                            arr_90 [(short)16] [(short)16] [i_20 + 1] [i_0] [i_21] [(short)16] [i_23] = ((/* implicit */long long int) (((+((-(arr_80 [i_22 - 1] [i_21] [20ULL]))))) >= (min((((/* implicit */int) (signed char)-114)), (((((/* implicit */_Bool) (short)23831)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-124))))))));
                            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */int) min(((!(((/* implicit */_Bool) 0LL)))), ((!(((/* implicit */_Bool) 3971487320746580829LL))))))) & (1219243399))))));
                        }
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_25 = 0; i_25 < 22; i_25 += 1) 
                        {
                            arr_97 [i_20] [i_20 + 2] [i_0] [(short)15] = ((((/* implicit */_Bool) min((min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_5))))) ? (3971487320746580847LL) : (-3945259527189113524LL));
                            arr_98 [i_0] = ((/* implicit */long long int) (unsigned char)239);
                        }
                        arr_99 [i_0] [i_20] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_81 [i_0 + 2] [i_20 + 1] [i_0]))) ? (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1692))) : (arr_81 [i_0 - 2] [i_20 + 1] [i_0]))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_81 [i_0 - 2] [i_20 + 1] [i_0])))));
                    }
                    /* vectorizable */
                    for (short i_26 = 1; i_26 < 21; i_26 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
                        {
                            arr_106 [i_0] [i_0] [i_21] [i_26] [i_27] = var_8;
                            var_47 = ((/* implicit */int) 3971487320746580829LL);
                            arr_107 [i_0] [i_20 - 1] [i_26 - 1] [i_0] [i_27] [i_27] = (signed char)-40;
                        }
                        arr_108 [i_0] [i_0] [i_20] [i_21] [i_26] [i_26] = ((/* implicit */_Bool) ((arr_101 [i_21] [(unsigned char)21] [i_20 + 2] [i_26] [i_26 + 1] [i_20]) / (arr_101 [i_0] [i_20] [i_20 + 2] [i_0 - 4] [i_26 + 1] [i_20])));
                        /* LoopSeq 2 */
                        for (int i_28 = 1; i_28 < 19; i_28 += 3) 
                        {
                            arr_111 [i_0] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3971487320746580847LL)) ? (((/* implicit */long long int) 159549136)) : (3971487320746580857LL)));
                            arr_112 [i_0] [i_0 - 1] = -1880816606;
                        }
                        for (unsigned short i_29 = 0; i_29 < 22; i_29 += 2) 
                        {
                            var_48 &= ((/* implicit */unsigned long long int) arr_31 [i_0] [i_29]);
                            arr_116 [i_0] [i_0] [i_0] [i_29] |= ((/* implicit */signed char) (-((-(var_10)))));
                        }
                    }
                    arr_117 [i_0 - 3] [i_20] [i_0] [i_21] = var_3;
                }
            } 
        } 
        arr_118 [i_0] = ((/* implicit */short) min((1219243390), (((/* implicit */int) (signed char)127))));
    }
    var_49 = ((/* implicit */short) var_7);
}
