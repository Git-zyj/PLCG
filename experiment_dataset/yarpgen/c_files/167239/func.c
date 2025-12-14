/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167239
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                var_18 |= ((/* implicit */short) var_3);
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    for (long long int i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) max((var_19), ((+(((/* implicit */int) var_3))))));
                            arr_11 [i_1] [(short)2] [i_3] [i_4] = ((/* implicit */long long int) ((((_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_4] [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */int) (signed char)-34)) >= (((/* implicit */int) arr_5 [i_2])))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_20 *= ((/* implicit */short) ((((/* implicit */int) (signed char)-58)) ^ (((/* implicit */int) arr_13 [i_1 - 1] [i_1 - 2] [i_1] [i_1 + 1]))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-122))))) ? (((/* implicit */int) ((short) 511))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        var_22 = ((/* implicit */short) (~(((arr_7 [i_5]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_6])))))));
                        var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-6509))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [i_1] [i_2 - 1] [i_6] [(_Bool)1] [i_1] [(unsigned short)23]))) + (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                        var_24 = ((/* implicit */short) (-(((((/* implicit */_Bool) -9223372036854775795LL)) ? (((/* implicit */int) arr_2 [i_0] [i_6])) : (((/* implicit */int) (signed char)-1))))));
                        var_25 = ((/* implicit */unsigned int) arr_14 [i_0] [i_1] [i_2 - 1] [i_5] [i_6]);
                    }
                    var_26 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))));
                    var_27 = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41008)) * (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2 - 2] [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2]))) : (3445928741149918738LL));
                    var_28 = ((/* implicit */unsigned char) var_7);
                }
                for (unsigned int i_7 = 2; i_7 < 23; i_7 += 3) 
                {
                    arr_20 [i_0] [i_0] [i_7] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-26332)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_7 [i_0])));
                    var_29 = ((short) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))));
                    var_30 = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_1 - 1] [i_1 + 1])) % (((/* implicit */int) (short)(-32767 - 1)))));
                    var_31 &= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_2 + 1] [i_2 - 2] [i_2] [i_2] [(signed char)2] [i_2])) || (((/* implicit */_Bool) arr_14 [(short)12] [i_2] [i_2] [i_2] [i_2 + 1]))));
                }
            }
            arr_21 [i_1] [i_1] [i_0] = ((/* implicit */long long int) 215974087);
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 - 2] [i_0] [i_0] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_2))));
            var_33 = ((/* implicit */long long int) (((~(arr_16 [i_0] [(signed char)2]))) < (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
        }
        var_34 += ((/* implicit */_Bool) ((((var_14) * (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [15LL] [i_0] [i_0]))))) << (((((/* implicit */int) min((arr_5 [8]), (arr_5 [i_0])))) - (27926)))));
    }
    /* vectorizable */
    for (unsigned short i_8 = 1; i_8 < 11; i_8 += 4) 
    {
        var_35 = ((/* implicit */short) arr_7 [i_8 - 1]);
        var_36 = ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8 - 1] [i_8 - 1]))) != (12LL));
        var_37 = ((/* implicit */int) var_9);
        var_38 = ((/* implicit */unsigned int) (short)-5882);
    }
    for (int i_9 = 4; i_9 < 11; i_9 += 3) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) (unsigned short)31988))) << (((((/* implicit */int) ((short) (unsigned short)10232))) - (10218)))))) && (((/* implicit */_Bool) min(((short)-5000), (((/* implicit */short) var_4)))))));
        arr_30 [i_9] = ((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)47343)), ((-(arr_7 [i_9 + 2])))));
        var_40 = ((/* implicit */unsigned int) ((((long long int) (~(9223372036854775806LL)))) % (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))))))));
        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) var_8))));
        var_42 = ((/* implicit */unsigned short) var_3);
    }
    for (int i_10 = 4; i_10 < 11; i_10 += 3) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33536))) : (1150669704793161728LL))))));
        var_44 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((min((((/* implicit */int) (_Bool)1)), (var_10))) + (2147483647))) << (((var_14) - (3896436161U)))))), (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) : (arr_29 [(_Bool)1] [i_10])))));
        /* LoopSeq 4 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            var_45 = ((/* implicit */int) arr_4 [i_11 - 1] [i_10 - 1] [i_10 + 1]);
            var_46 = ((((/* implicit */_Bool) min((var_10), (((/* implicit */int) arr_26 [8ULL]))))) ? ((+(((arr_16 [i_10] [(signed char)16]) * (arr_8 [i_10] [i_10] [i_11]))))) : (((((((/* implicit */_Bool) arr_36 [i_11] [i_11] [i_11])) && (var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_17))))) : (arr_27 [i_10 - 4]))));
        }
        for (signed char i_12 = 2; i_12 < 12; i_12 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_13 = 1; i_13 < 11; i_13 += 1) 
            {
                var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_13])) || (((/* implicit */_Bool) arr_14 [i_10] [i_10 + 1] [i_10] [i_10] [i_10]))));
                /* LoopSeq 3 */
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) /* same iter space */
                {
                    var_48 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)23838)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_10])) ? (((/* implicit */int) (unsigned char)55)) : (((/* implicit */int) arr_26 [i_10])))))));
                    var_49 = ((/* implicit */unsigned char) max((var_49), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-26332)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6509))) : (3549584224U))))));
                }
                for (unsigned char i_15 = 0; i_15 < 14; i_15 += 3) /* same iter space */
                {
                    var_50 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_10]))) != (arr_18 [i_13]))) ? (((/* implicit */int) (!(var_13)))) : ((~(((/* implicit */int) (unsigned short)2))))));
                    var_51 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_19 [i_12] [i_12])) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_5 [i_10 - 3])) : (((/* implicit */int) arr_14 [i_10] [i_13 - 1] [i_13] [i_15] [i_15]))));
                    var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [(short)20])) ? (((/* implicit */int) (unsigned char)123)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_15 [i_10] [6ULL] [6ULL] [i_13] [i_13] [i_15])) : (((/* implicit */int) var_4)))))))));
                }
                for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    var_53 = ((/* implicit */long long int) arr_41 [i_12 - 1] [i_10 - 1]);
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) -2657998773713230032LL)) ? ((~(3733974204U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_13])) && ((_Bool)0)))))));
                    var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)89)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_8 [(signed char)12] [i_12] [i_10])))) ? (((/* implicit */int) arr_47 [i_13] [i_13] [i_13] [i_13 + 1] [i_13 + 1])) : ((-(((/* implicit */int) arr_10 [i_10] [i_10] [i_12] [i_13] [i_13] [(short)4]))))));
                }
                var_56 = 9223372036854775807LL;
            }
            /* LoopSeq 3 */
            for (unsigned int i_17 = 2; i_17 < 13; i_17 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_18 = 1; i_18 < 12; i_18 += 3) 
                {
                    arr_59 [i_10] [i_10] [i_10 + 3] [i_17] [i_10 - 2] [i_10] = ((/* implicit */short) ((arr_15 [i_10 + 3] [i_17] [i_17 - 1] [i_17 + 1] [i_18 - 1] [i_18 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_10 + 2] [i_17] [i_17 - 2] [i_17 + 1] [i_18 - 1] [i_18 + 2]))) : (-2358597919949180364LL)));
                    var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_17))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_14 [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12] [i_12 + 1]))));
                }
                var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_17] [i_17]))))) << (((min((var_14), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_17] [i_12] [i_10]))))))) - (3896436154U)))));
                var_59 = ((/* implicit */short) (~(min(((~(((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) (short)-6509)) + (2147483647))) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775804LL))) + (29LL)))))))));
            }
            for (unsigned char i_19 = 0; i_19 < 14; i_19 += 3) /* same iter space */
            {
                var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_10 + 2] [i_10 - 1] [i_10 + 3])) ? (((/* implicit */int) arr_33 [i_12 - 1])) : (((/* implicit */int) ((((/* implicit */long long int) (~(560993093U)))) == (arr_29 [i_10] [i_12])))))))));
                var_61 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 3041042078U)) ? (((/* implicit */int) (signed char)-8)) : (-100891920))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)54479))))))) * (((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) >> (((((/* implicit */_Bool) arr_61 [i_10] [i_12] [i_12] [i_19])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_48 [i_10] [i_19] [i_19] [i_19] [i_10 - 4]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 3; i_20 < 13; i_20 += 3) 
                {
                    for (short i_21 = 0; i_21 < 14; i_21 += 3) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_34 [i_10 - 1])) ? (min((((/* implicit */long long int) 100891920)), (arr_34 [i_10 + 3]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-1074)) ^ (((/* implicit */int) (_Bool)0)))))));
                            var_63 |= ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)27819)) ? (-186347279) : (((/* implicit */int) (short)-1)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_22 = 2; i_22 < 13; i_22 += 3) 
                {
                    var_64 = ((/* implicit */unsigned char) var_14);
                    var_65 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_42 [i_19])) : (((/* implicit */int) arr_42 [i_19]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 560993092U)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) (unsigned short)15))))) : (((arr_42 [i_19]) ? (48059122U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [(unsigned short)8] [i_12 + 2] [i_22])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_23 = 0; i_23 < 14; i_23 += 3) 
                    {
                        var_66 = ((/* implicit */int) ((((/* implicit */int) arr_44 [i_12] [i_22] [i_22 - 2] [i_19])) > (((/* implicit */int) arr_44 [i_10] [i_19] [i_22 - 2] [i_19]))));
                        var_67 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_10] [i_10] [i_10 + 3] [i_10] [i_12 - 1] [i_22 + 1])) ? (arr_52 [i_10] [(signed char)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_10] [i_10] [i_10 - 3] [i_12] [i_12 - 1] [i_22 - 1])))));
                    }
                    for (unsigned char i_24 = 1; i_24 < 12; i_24 += 4) 
                    {
                        arr_77 [i_10] [i_10] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) (unsigned short)51332))))) ? ((-(17179869183LL))) : (((((/* implicit */_Bool) (short)2764)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (short)14336)))))));
                        arr_78 [(unsigned char)6] [i_22 - 1] [i_19] [i_10] [(unsigned char)6] &= ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_48 [i_22 - 1] [12LL] [i_10 - 1] [12LL] [i_10 - 2])) : (((((/* implicit */int) arr_65 [i_12] [i_19] [i_22])) & (((/* implicit */int) arr_51 [i_10] [i_10] [(unsigned char)2] [i_10])))))), (((/* implicit */int) arr_4 [i_10 + 2] [i_22] [i_24]))));
                    }
                }
            }
            /* vectorizable */
            for (unsigned char i_25 = 0; i_25 < 14; i_25 += 3) /* same iter space */
            {
                var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (short)-1))) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) ((unsigned char) (short)14336)))));
                /* LoopSeq 2 */
                for (unsigned char i_26 = 3; i_26 < 11; i_26 += 2) /* same iter space */
                {
                    var_69 = ((/* implicit */_Bool) max((var_69), (((/* implicit */_Bool) var_10))));
                    var_70 = ((/* implicit */long long int) ((_Bool) var_10));
                    var_71 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_74 [i_10 - 1] [i_12 + 2] [i_12 - 1] [i_12] [i_25] [i_25] [4ULL])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_26] [i_26] [i_25] [i_12] [i_12] [i_25])))));
                    var_72 = ((/* implicit */unsigned char) (unsigned short)14204);
                }
                for (unsigned char i_27 = 3; i_27 < 11; i_27 += 2) /* same iter space */
                {
                    var_73 = ((/* implicit */short) (((-(((/* implicit */int) arr_12 [(unsigned short)20])))) ^ (((/* implicit */int) var_2))));
                    /* LoopSeq 3 */
                    for (short i_28 = 4; i_28 < 10; i_28 += 2) 
                    {
                        var_74 += ((/* implicit */long long int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_8))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_36 [i_10] [i_12] [i_25])))))));
                        var_75 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */_Bool) 1219454925U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)16991))))));
                        var_76 = arr_40 [i_10 + 1] [i_12] [i_12];
                    }
                    for (short i_29 = 0; i_29 < 14; i_29 += 3) 
                    {
                        var_77 = (((_Bool)1) && (((/* implicit */_Bool) 5956680922885225038LL)));
                        var_78 = ((/* implicit */unsigned char) arr_58 [i_29] [i_12] [i_25] [i_12] [i_12 - 1] [i_10]);
                        var_79 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_38 [i_10 + 1] [i_12 - 1] [i_27 - 1]))));
                        arr_91 [i_29] [i_25] [i_12 - 1] [i_10] &= ((/* implicit */short) ((((/* implicit */int) arr_79 [i_12 - 1] [i_12] [i_25])) / (((/* implicit */int) ((((/* implicit */int) arr_26 [i_25])) <= (((/* implicit */int) (unsigned short)14180)))))));
                        var_80 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)14487))));
                    }
                    for (unsigned long long int i_30 = 0; i_30 < 14; i_30 += 2) 
                    {
                        var_81 = ((/* implicit */long long int) arr_51 [i_10 - 2] [i_12 + 2] [i_30] [i_30]);
                        var_82 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_0))));
                    }
                }
                arr_95 [i_12 - 1] [i_12] [i_12] [i_12] = ((/* implicit */signed char) arr_92 [i_10] [i_25]);
            }
        }
        /* vectorizable */
        for (unsigned long long int i_31 = 1; i_31 < 12; i_31 += 3) /* same iter space */
        {
            var_83 = ((/* implicit */short) ((arr_33 [i_10 - 2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_31 - 1]))) : (arr_19 [i_10] [i_31])));
            /* LoopNest 2 */
            for (unsigned short i_32 = 0; i_32 < 14; i_32 += 1) 
            {
                for (unsigned short i_33 = 3; i_33 < 13; i_33 += 3) 
                {
                    {
                        var_84 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)22122)) ? (1694094922514533335LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))));
                        var_85 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-46)) + (((/* implicit */int) arr_15 [i_31] [(_Bool)0] [i_31 + 2] [i_31] [i_31 - 1] [i_31]))));
                        var_86 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_10] [i_31 + 2] [i_31 + 2])) ? (((/* implicit */int) (unsigned short)23197)) : (-567237554)));
                        var_87 &= ((/* implicit */unsigned char) arr_82 [i_33] [i_10 - 3] [(short)3] [i_10 - 3]);
                    }
                } 
            } 
            var_88 = ((/* implicit */_Bool) arr_88 [i_10] [i_31] [i_10] [i_31] [i_31] [i_10]);
            var_89 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_31 + 2] [20]))));
        }
        /* vectorizable */
        for (unsigned long long int i_34 = 1; i_34 < 12; i_34 += 3) /* same iter space */
        {
            var_90 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-32757)) ? (((/* implicit */int) arr_90 [i_10] [i_34 + 2] [i_10 - 2] [i_10])) : (((/* implicit */int) arr_42 [6U]))));
            var_91 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)250))));
        }
    }
    var_92 = ((/* implicit */unsigned long long int) (~(((((((/* implicit */_Bool) (unsigned short)22122)) ? (((/* implicit */int) (short)-1)) : (-435033973))) ^ (((/* implicit */int) var_12))))));
}
