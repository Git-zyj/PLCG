/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137917
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((((/* implicit */short) arr_0 [i_0] [i_0])), (max((((/* implicit */short) arr_0 [i_0] [i_0])), ((short)-18817)))));
        arr_2 [i_0] = ((long long int) arr_1 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 0; i_1 < 14; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_2])), (arr_1 [i_1] [i_1])))))))));
            arr_8 [i_1] [i_1] [i_2] = ((long long int) ((((/* implicit */_Bool) -6935625575415424010LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)56))) : (4910495257994280492LL)));
        }
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) arr_0 [i_1] [i_3]));
            var_21 *= ((/* implicit */_Bool) min((min((((short) (_Bool)1)), (((/* implicit */short) var_3)))), (((/* implicit */short) arr_10 [5ULL] [i_3] [10LL]))));
        }
        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 13; i_5 += 1) 
            {
                arr_17 [i_1] [i_1] [i_5 + 1] = ((((/* implicit */long long int) min((max((arr_9 [i_1] [0LL]), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) arr_1 [7LL] [i_4]))))) & (min((((/* implicit */long long int) (~(arr_9 [i_4] [3U])))), (min((((/* implicit */long long int) arr_1 [i_1] [i_4])), (arr_13 [i_4] [3U]))))));
                arr_18 [(short)10] [i_4] [i_5] = ((/* implicit */unsigned char) min((-5751619563049768344LL), (((/* implicit */long long int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (arr_9 [i_1] [i_1])))))));
                var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_11)), (((unsigned int) var_1)))))))));
                arr_19 [i_4] [i_4] [3LL] [i_1] = ((/* implicit */unsigned char) ((_Bool) min((max(((short)8190), (((/* implicit */short) (unsigned char)147)))), (((/* implicit */short) max((arr_15 [i_1] [i_1] [i_5] [(_Bool)1]), (((/* implicit */signed char) arr_5 [i_5]))))))));
                arr_20 [i_5] [i_5 - 2] [i_5 - 2] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((((-6935625575415424027LL) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */long long int) 2047))))), (max((((/* implicit */unsigned long long int) max(((unsigned char)98), (((/* implicit */unsigned char) (_Bool)1))))), (9009748989744247395ULL)))));
            }
            for (int i_6 = 1; i_6 < 13; i_6 += 1) 
            {
                var_23 = ((/* implicit */short) (~(((/* implicit */int) (short)9128))));
                arr_23 [(_Bool)1] [i_4] [(_Bool)1] = ((/* implicit */unsigned long long int) ((int) var_8));
                arr_24 [i_1] [i_1] [i_1] = arr_13 [i_1] [(short)1];
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 10; i_7 += 1) 
                {
                    for (signed char i_8 = 1; i_8 < 13; i_8 += 1) 
                    {
                        {
                            var_24 = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)-7708)) - (((/* implicit */int) arr_1 [i_1] [i_4]))))), ((~(arr_9 [i_1] [i_6])))))), (min(((+(1008806316530991104ULL))), (((/* implicit */unsigned long long int) var_15)))));
                            arr_32 [i_1] [i_7] [(signed char)0] [i_1] [i_7] = ((((/* implicit */_Bool) max((arr_27 [i_1] [i_7] [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) -3026037541219097570LL)) < (17437937757178560520ULL))))))) ? (arr_29 [i_7] [i_7 + 3] [i_4] [i_4] [i_8]) : (-6742227842295774246LL));
                        }
                    } 
                } 
            }
            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((8871373262795511367LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-18817)))))) ? ((~(((/* implicit */int) (short)9128)))) : (((/* implicit */int) (short)-18982)))))));
            arr_33 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_14)), (((unsigned long long int) arr_9 [i_1] [i_4]))));
        }
        arr_34 [i_1] [i_1] = ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]);
        /* LoopSeq 2 */
        for (unsigned int i_9 = 1; i_9 < 11; i_9 += 4) 
        {
            arr_38 [i_1] [i_9 + 1] = ((/* implicit */_Bool) var_15);
            arr_39 [i_1] = ((/* implicit */short) ((min((var_4), (((/* implicit */unsigned long long int) arr_16 [i_1] [i_9 - 1] [i_9 - 1])))) > (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)-18815)), (arr_14 [10ULL] [i_9 + 3]))))));
        }
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 4) 
        {
            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) != (arr_27 [i_1] [i_10] [i_10] [(unsigned short)4])))), ((+(arr_14 [i_1] [i_10])))))) ? (min((((/* implicit */unsigned long long int) var_5)), (min((((/* implicit */unsigned long long int) 288212783965667328LL)), (var_4))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (3840))))))))));
            var_27 = ((/* implicit */short) (~((+(((/* implicit */int) min((((/* implicit */short) var_16)), ((short)0))))))));
        }
    }
    for (long long int i_11 = 2; i_11 < 20; i_11 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
        {
            for (short i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                {
                    var_28 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) (-(-8534892660628731809LL))))), ((+(((((/* implicit */_Bool) var_0)) ? (arr_45 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_52 [i_11] [i_11] [i_14] [i_14] = ((((/* implicit */int) arr_43 [i_11 + 2])) << (((/* implicit */int) arr_42 [i_11 + 1])));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
                        {
                            arr_55 [i_11 + 2] [i_14] [i_13] [i_11 + 2] [i_11 + 2] = ((/* implicit */short) var_15);
                            arr_56 [i_11] [i_14] = var_16;
                            var_29 = ((/* implicit */short) ((((/* implicit */int) var_11)) << (((2815054334070586718ULL) - (2815054334070586696ULL)))));
                            arr_57 [i_14] [i_12] [(_Bool)1] [(unsigned short)19] [i_12] [i_15] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (-1LL))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_30 = (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                            arr_61 [i_11] [i_12] [i_13] [i_14] [i_14] = (+(((/* implicit */int) arr_48 [i_14])));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                        {
                            arr_65 [i_11] [i_11] [i_12] [i_11] [i_11] &= var_2;
                            var_31 = ((/* implicit */_Bool) ((int) arr_45 [i_11 + 2]));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) arr_54 [i_11]))));
                        }
                        var_33 = arr_47 [i_11];
                        /* LoopSeq 3 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                        {
                            var_34 *= ((/* implicit */short) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                            arr_68 [i_14] [i_12] [i_13] [i_18] = ((/* implicit */unsigned long long int) arr_59 [i_14] [i_12] [i_11]);
                            arr_69 [0LL] [i_14] [i_11 - 1] = ((/* implicit */short) ((((unsigned long long int) (short)6144)) >> ((((~(((/* implicit */int) (_Bool)1)))) + (38)))));
                        }
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
                        {
                            arr_74 [i_11] [i_19] [i_14] [i_14] [i_19] [i_11] = ((/* implicit */long long int) 1355300540U);
                            var_35 = ((/* implicit */unsigned long long int) ((unsigned char) arr_51 [i_11] [i_14] [i_14]));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_36 = arr_42 [i_14];
                            arr_77 [i_11 + 2] [i_11 + 2] [i_14] [i_11 + 2] [(_Bool)1] [i_11] [i_11 - 2] = ((/* implicit */short) var_4);
                        }
                    }
                    for (long long int i_21 = 0; i_21 < 22; i_21 += 4) 
                    {
                        arr_82 [i_21] [i_13] [1LL] [i_11 + 2] = ((/* implicit */long long int) ((unsigned char) min((((/* implicit */unsigned int) var_2)), (arr_71 [i_11] [(signed char)6] [i_12] [i_12] [i_12] [i_13] [i_12]))));
                        arr_83 [i_21] [i_21] [i_21] [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) (~(((int) max((((/* implicit */signed char) var_3)), (arr_67 [i_11] [0ULL] [(_Bool)1] [0ULL] [i_12] [i_13] [i_13]))))));
                        arr_84 [i_11] [i_12] [9LL] [18] [i_21] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))))), (18446744073709551601ULL)));
                    }
                    /* vectorizable */
                    for (int i_22 = 0; i_22 < 22; i_22 += 2) 
                    {
                        var_37 = ((/* implicit */_Bool) ((unsigned long long int) arr_46 [i_11] [i_11 + 1] [i_11 + 1]));
                        arr_87 [i_11 - 1] [i_11] [i_11 - 1] [i_11 - 1] &= ((/* implicit */long long int) arr_45 [i_11 + 2]);
                        var_38 ^= arr_47 [i_13];
                    }
                    var_39 ^= var_17;
                    var_40 = min((((((/* implicit */_Bool) arr_75 [i_12] [i_12] [(signed char)2] [i_12] [i_13])) ? (arr_75 [i_11] [i_11] [i_11] [i_13] [i_13]) : (arr_54 [i_11]))), (((/* implicit */long long int) var_2)));
                    var_41 = ((/* implicit */unsigned short) var_9);
                }
            } 
        } 
        var_42 = max((min((((unsigned long long int) arr_80 [i_11] [i_11] [i_11] [i_11])), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)0)), (arr_67 [8ULL] [i_11 - 1] [i_11] [i_11 - 1] [2ULL] [i_11] [i_11])))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_86 [i_11] [i_11] [i_11]))))));
        arr_88 [i_11] = ((/* implicit */_Bool) max((arr_66 [i_11] [i_11] [i_11] [i_11] [16LL]), (((/* implicit */unsigned long long int) var_1))));
        var_43 &= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) arr_73 [i_11] [i_11] [i_11] [i_11 + 2] [i_11])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_11] [i_11] [i_11 + 2] [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1218412639U)))) : (((unsigned long long int) arr_71 [i_11] [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11]))))));
        var_44 = ((/* implicit */unsigned long long int) ((unsigned int) min((min((arr_47 [i_11 + 2]), (var_10))), ((-(arr_63 [(unsigned short)1] [(unsigned short)1] [(_Bool)1] [(_Bool)1] [i_11]))))));
    }
    for (long long int i_23 = 0; i_23 < 24; i_23 += 1) 
    {
        arr_92 [i_23] = ((/* implicit */_Bool) arr_91 [i_23] [i_23]);
        arr_93 [i_23] [i_23] = ((/* implicit */long long int) arr_91 [i_23] [i_23]);
        arr_94 [i_23] [i_23] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (short)32767)))));
        var_45 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_90 [i_23] [i_23]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_91 [i_23] [i_23]))))))) == (((long long int) 1ULL))));
    }
    var_46 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 696055357U)), (var_4)));
    var_47 = ((/* implicit */unsigned int) max((min((min((var_15), (((/* implicit */long long int) (short)31944)))), (((long long int) var_14)))), (((/* implicit */long long int) max((min((3598911939U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((_Bool) var_12))))))));
}
