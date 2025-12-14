/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124577
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
    var_12 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_13 = ((/* implicit */_Bool) arr_1 [i_0] [0LL]);
        var_14 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [(short)17])) : (((/* implicit */int) (short)7779)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((34359738366LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) 34359738343LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) (_Bool)1))))) : ((((!(arr_2 [i_1]))) ? (((arr_4 [(_Bool)1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [2ULL]))) : (10913218802113432452ULL))) : (var_3))))))));
        arr_5 [i_1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(34359738336LL)))), (((15930990086026852055ULL) << (((/* implicit */int) arr_3 [i_1]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 3) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3])) ? (arr_7 [i_2]) : (-3954280299756436585LL)));
                    var_17 = ((/* implicit */_Bool) (+(arr_10 [i_3])));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_5 = 1; i_5 < 23; i_5 += 1) 
        {
            var_18 = ((/* implicit */long long int) ((signed char) ((unsigned int) 3954280299756436581LL)));
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 2; i_6 < 21; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (int i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 9223372036854775744LL)) ? (arr_21 [6] [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((_Bool) arr_3 [i_6 - 1])))));
                            var_21 = ((/* implicit */signed char) ((long long int) arr_29 [i_8] [i_8 + 3] [i_6 + 3] [(_Bool)1] [i_5 + 1]));
                        }
                    } 
                } 
            } 
            arr_30 [i_5] [i_5] = ((/* implicit */unsigned short) ((((arr_24 [(_Bool)1] [i_5] [i_5] [(_Bool)1] [i_5]) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)23733)))) > (arr_11 [i_5] [i_5])));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) 34359738369LL))));
            var_23 = ((/* implicit */unsigned long long int) -4323414323367377190LL);
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 2) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */long long int) arr_14 [i_2] [i_2] [i_2] [i_9])) % ((-(-34359738379LL)))));
            /* LoopNest 3 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 2; i_11 < 21; i_11 += 4) 
                {
                    for (signed char i_12 = 4; i_12 < 23; i_12 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) arr_19 [i_10])) ? (((/* implicit */int) var_7)) : (arr_18 [i_2] [9LL]))));
                            var_26 *= (!((!(((/* implicit */_Bool) -4323414323367377188LL)))));
                            arr_40 [i_2] [i_2] [i_2] [i_10] [i_2] [i_2] [i_2] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)512)) < (((/* implicit */int) (signed char)109)))))) <= (144115188075855872LL));
                        }
                    } 
                } 
            } 
            arr_41 [(_Bool)1] = ((/* implicit */long long int) ((signed char) arr_18 [i_2] [i_9]));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
            {
                var_27 ^= ((/* implicit */unsigned long long int) (signed char)85);
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    for (long long int i_16 = 4; i_16 < 22; i_16 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_16 - 2] [i_16 - 3] [i_16 - 1])) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) arr_23 [i_13] [i_16] [i_16 - 2] [i_13]))));
                            var_29 = ((/* implicit */short) var_7);
                            arr_52 [(_Bool)1] [(_Bool)1] [i_13] [i_14] [i_15] [(_Bool)1] [(_Bool)1] = ((/* implicit */short) arr_38 [i_13] [i_13]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_17 = 1; i_17 < 23; i_17 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_30 = ((/* implicit */short) ((arr_13 [i_2] [i_13] [i_17 + 1] [i_17]) % (arr_13 [i_2] [i_13] [i_17 + 1] [14LL])));
                        var_31 &= ((/* implicit */_Bool) (-(arr_7 [i_17 + 1])));
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65025))) / (((((/* implicit */_Bool) -34359738359LL)) ? (((/* implicit */long long int) 22658148)) : (17592186036224LL)))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)126)) ? (17179868160LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_34 = -34359738367LL;
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) /* same iter space */
                    {
                        arr_65 [i_2] [i_13] [i_14] [i_17] [i_20] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_54 [i_17] [i_14] [i_13] [i_2]) ? (var_5) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_36 [i_17] [i_17 + 1] [i_17 + 1] [i_17] [i_17])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        var_35 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_44 [8LL]))));
                    }
                    arr_66 [(_Bool)1] [i_13] [i_13] = ((/* implicit */long long int) ((short) arr_43 [i_13]));
                }
                for (unsigned int i_21 = 3; i_21 < 20; i_21 += 3) 
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_62 [i_21 - 3] [i_21 + 3] [i_21 - 1] [i_21 + 2] [i_21 + 2])) + (2147483647))) >> (((((/* implicit */int) (signed char)-110)) + (117)))));
                    arr_69 [i_2] [23] [23] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) arr_34 [i_2] [7ULL] [7ULL]))) ? (((34359738369LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-16))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)126)) < (((/* implicit */int) arr_3 [i_13]))))))));
                    arr_70 [i_2] [i_13] [i_2] [i_14] [i_13] [i_21] = ((/* implicit */short) arr_57 [6U] [8LL] [i_14] [i_21 - 2] [i_21]);
                }
                for (long long int i_22 = 0; i_22 < 24; i_22 += 3) 
                {
                    /* LoopSeq 2 */
                    for (short i_23 = 0; i_23 < 24; i_23 += 4) 
                    {
                        arr_77 [i_13] [8LL] [8LL] [i_13] [i_23] = ((/* implicit */long long int) arr_2 [i_2]);
                        arr_78 [20] [i_13] [2ULL] [i_13] [(signed char)19] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 4194695027059031002LL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_23] [i_13] [i_2])))))));
                        var_37 = ((((/* implicit */int) (signed char)113)) > (((/* implicit */int) ((((/* implicit */int) (short)25841)) >= (983040)))));
                        arr_79 [i_22] [i_13] = ((/* implicit */short) (-(((((/* implicit */_Bool) (unsigned short)35665)) ? (((/* implicit */unsigned long long int) 34359738406LL)) : (911101245579751906ULL)))));
                        var_38 |= ((arr_47 [(short)12] [i_14] [i_13] [i_2]) >= (((/* implicit */long long int) var_2)));
                    }
                    for (short i_24 = 0; i_24 < 24; i_24 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)11781))))))))));
                        arr_83 [i_2] [i_13] [i_14] [i_2] [i_24] = ((/* implicit */unsigned short) ((arr_72 [i_2] [i_13] [i_14] [i_13] [i_24] [i_13]) ? ((~(((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (_Bool)1))))));
                    }
                    arr_84 [i_13] [i_13] [i_14] [(short)16] = ((/* implicit */unsigned short) ((var_1) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_13])))));
                    var_40 = ((/* implicit */_Bool) max((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_35 [i_13] [i_14] [i_22]) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) var_9))))) ? ((~(36028797018963966ULL))) : (2145386496ULL))))));
                }
            }
            for (long long int i_25 = 0; i_25 < 24; i_25 += 2) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 34359738361LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_2] [i_13] [i_13] [10ULL] [i_2]))) : (arr_21 [i_2] [i_2]))));
                /* LoopSeq 2 */
                for (short i_26 = 0; i_26 < 24; i_26 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) var_8);
                        arr_93 [i_2] [i_2] [i_13] [i_13] [i_26] [i_27] = ((arr_2 [i_13]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_27]))) : (arr_17 [i_26]));
                        arr_94 [i_2] [i_13] [i_27] [i_26] [i_25] [i_13] [i_2] = ((/* implicit */long long int) 11631598441088617740ULL);
                        var_43 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (17592184995840ULL) : (((/* implicit */unsigned long long int) arr_68 [i_25]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_4)))) : (((((/* implicit */_Bool) (signed char)-16)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_13] [i_13] [4U])))))));
                        var_44 = ((/* implicit */unsigned int) (signed char)-105);
                    }
                    var_45 += ((/* implicit */short) ((((/* implicit */_Bool) 1073741568ULL)) ? (((/* implicit */long long int) arr_44 [i_25])) : (-34359738370LL)));
                    var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_25])) ? (-34359738368LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (arr_20 [i_2] [i_25] [i_26]) : (((/* implicit */int) arr_82 [i_2] [i_2]))));
                }
                for (short i_28 = 2; i_28 < 21; i_28 += 2) 
                {
                    var_47 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) (short)-11781))) ? (((/* implicit */int) arr_3 [i_28 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    var_48 = ((/* implicit */signed char) ((unsigned long long int) arr_27 [i_28 + 1] [i_28 + 1] [i_28 + 3] [i_28]));
                }
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (short)-5814))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2]))) : (((arr_56 [i_2] [i_2] [i_13] [i_13] [i_25]) | (((/* implicit */long long int) ((/* implicit */int) arr_73 [i_2] [i_13] [i_25] [i_13])))))));
                arr_97 [i_13] [(signed char)12] [(_Bool)1] [i_13] = ((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_2] [i_2] [i_2])) >> (((((((/* implicit */_Bool) var_1)) ? (-34359738366LL) : (((/* implicit */long long int) var_5)))) + (34359738394LL)))));
                var_50 *= ((/* implicit */unsigned int) (unsigned short)8663);
            }
            for (long long int i_29 = 0; i_29 < 24; i_29 += 2) /* same iter space */
            {
                var_51 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1044480ULL))));
                var_52 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_29] [i_29] [i_13] [i_2]))));
                /* LoopNest 2 */
                for (unsigned long long int i_30 = 0; i_30 < 24; i_30 += 1) 
                {
                    for (signed char i_31 = 0; i_31 < 24; i_31 += 3) 
                    {
                        {
                            arr_105 [i_2] [i_13] [i_2] [i_2] [(signed char)22] = (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) arr_8 [3LL]))));
                            arr_106 [(short)11] [(short)11] [i_29] [i_13] [i_13] = ((arr_46 [i_30] [i_13] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_13] [i_29] [i_30]))) : (-34359738366LL));
                            var_53 = ((/* implicit */long long int) min((var_53), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 3070663676U)) ? (((/* implicit */int) arr_24 [20LL] [i_13] [i_29] [i_30] [(_Bool)1])) : (((/* implicit */int) (unsigned short)37346)))) : (((/* implicit */int) arr_81 [i_2])))))));
                        }
                    } 
                } 
            }
            for (long long int i_32 = 0; i_32 < 24; i_32 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
                {
                    var_54 = ((((/* implicit */_Bool) var_0)) ? (arr_11 [i_13] [i_13]) : (((/* implicit */int) arr_98 [i_33 - 1] [i_33 - 1] [i_33 - 1])));
                    var_55 = ((int) ((var_8) ? (((/* implicit */int) arr_89 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) : (((/* implicit */int) (signed char)15))));
                }
                var_56 &= ((/* implicit */unsigned long long int) ((unsigned int) 1768554278));
                /* LoopNest 2 */
                for (short i_34 = 2; i_34 < 23; i_34 += 3) 
                {
                    for (short i_35 = 0; i_35 < 24; i_35 += 4) 
                    {
                        {
                            arr_116 [i_13] [i_13] [i_32] [i_32] [i_32] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_34 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073708507129ULL))))) : ((+(((/* implicit */int) (short)24563))))));
                            arr_117 [i_32] [i_13] [16] [i_13] [i_35] [16] [i_13] = ((/* implicit */unsigned short) -1768554276);
                            var_57 &= ((/* implicit */long long int) (unsigned short)29722);
                            var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((1919750234779923958LL) - (1919750234779923937LL)))))) ? (((/* implicit */int) (!(var_8)))) : (((/* implicit */int) (short)11357))));
                            var_59 = ((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))) / (arr_103 [i_2] [i_13] [i_13] [i_32] [i_13] [(signed char)23])))));
                        }
                    } 
                } 
            }
            /* LoopSeq 1 */
            for (_Bool i_36 = 0; i_36 < 0; i_36 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_37 = 0; i_37 < 24; i_37 += 2) 
                {
                    var_60 = ((/* implicit */_Bool) min((var_60), ((!(((/* implicit */_Bool) ((long long int) arr_6 [i_36])))))));
                    arr_122 [4ULL] [i_37] [i_13] [i_37] [i_13] [i_36] |= ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-11349))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_13])))))) : ((+(14484259040498986323ULL))));
                }
                var_61 = ((/* implicit */short) (-(((/* implicit */int) arr_99 [i_2] [i_2] [i_2] [i_2]))));
                /* LoopNest 2 */
                for (unsigned long long int i_38 = 1; i_38 < 23; i_38 += 4) 
                {
                    for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                    {
                        {
                            var_62 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_38 + 1])) ? (arr_107 [i_36 + 1] [i_36 + 1] [i_36 + 1] [i_36 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)29731)) ? (((/* implicit */int) arr_112 [i_2] [i_13] [i_36] [i_38])) : (((/* implicit */int) arr_124 [i_36] [(_Bool)1] [i_36])))))));
                            arr_130 [i_2] [i_2] [i_13] [i_36] [i_13] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) 8388606)))));
                            arr_131 [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_86 [i_13] [(_Bool)1] [i_38 - 1])) ? (arr_86 [i_13] [i_38 + 1] [i_38 - 1]) : (var_5)));
                        }
                    } 
                } 
                var_63 = ((/* implicit */short) ((unsigned long long int) arr_38 [i_2] [i_13]));
                arr_132 [i_36] [i_13] [i_2] = -2305863709490708198LL;
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_40 = 0; i_40 < 24; i_40 += 1) 
        {
            for (long long int i_41 = 1; i_41 < 23; i_41 += 2) 
            {
                {
                    var_64 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2359365789206009580LL))));
                    var_65 = ((/* implicit */unsigned long long int) arr_10 [i_40]);
                    arr_138 [i_2] [i_2] [i_2] [i_40] = ((/* implicit */long long int) arr_95 [(unsigned short)11] [i_40] [(unsigned short)1] [(unsigned short)1] [(unsigned short)16]);
                }
            } 
        } 
    }
    var_66 = (!(((/* implicit */_Bool) (unsigned short)30)));
}
