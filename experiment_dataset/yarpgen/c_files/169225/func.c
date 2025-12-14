/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169225
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 6446481018476003429LL)), (min((arr_3 [21]), (((/* implicit */unsigned long long int) var_0))))))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) < (arr_2 [i_0])))))) : (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 23; i_1 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    for (unsigned int i_4 = 4; i_4 < 21; i_4 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_15 [(unsigned char)4] [i_1] [(_Bool)1] [i_3] [i_4 + 2]))));
                            arr_16 [i_3] [12ULL] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_2] [i_3] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_11 [(signed char)5] [(signed char)5] [i_1 + 1] [(short)17]))))) ? ((+(12041236471653646203ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) arr_6 [14ULL] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_10))))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_5 [i_0])))) ? (((long long int) 4294967289U)) : (((((/* implicit */_Bool) arr_8 [13U] [i_4 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [20U] [(short)6] [i_3] [i_4 + 1]))) : (9223372036854775807LL))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        {
                            arr_23 [i_0] [i_1 + 1] [i_5 + 2] [i_0] [i_5] [i_7] = ((/* implicit */long long int) arr_15 [i_5 - 1] [i_1 - 1] [i_1] [i_5] [i_7]);
                            arr_24 [i_0] [i_7] [i_5] [i_0] [i_7] = ((/* implicit */unsigned short) (-(max((max((((/* implicit */unsigned long long int) var_8)), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) arr_18 [i_5 + 2] [i_5 + 1]))))));
                            arr_25 [i_0] [i_1] [i_5] [i_6] [i_7] = arr_18 [i_0] [i_0];
                        }
                    } 
                } 
            } 
        }
        for (signed char i_8 = 1; i_8 < 23; i_8 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) ((unsigned char) 9223372036854775806LL)))));
            var_17 &= ((/* implicit */unsigned short) ((max((var_1), (((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [(short)12] [i_8]))) : (var_13))))) % ((~(((((/* implicit */_Bool) arr_6 [18] [i_8 - 1] [i_8] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)49))) : (var_3)))))));
            /* LoopNest 2 */
            for (long long int i_9 = 2; i_9 < 21; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) ((min((18446744073709551594ULL), (((/* implicit */unsigned long long int) (unsigned char)25)))) << (1ULL)));
                        var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)27076)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_20 [(short)23] [13ULL] [i_9] [i_10])) || (((/* implicit */_Bool) arr_20 [i_0] [(signed char)0] [i_0] [i_0])))))) : ((((((_Bool)1) ? (18446744073709551606ULL) : (1ULL))) % ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))) : (10761442451173534396ULL)))))));
                        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) var_12)))), (((((/* implicit */int) arr_0 [i_0] [i_9 + 3])) >> (((var_1) - (4078554743167279513ULL)))))))) ? (max((max((arr_13 [i_0] [i_8]), (((/* implicit */unsigned long long int) (unsigned char)23)))), (((/* implicit */unsigned long long int) arr_17 [i_9 + 1] [i_9] [i_9 - 1] [i_9 + 1])))) : (((/* implicit */unsigned long long int) 4611681620380876800LL))));
                        var_21 ^= ((/* implicit */_Bool) -9223372036854775807LL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_11 = 3; i_11 < 20; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 24; i_12 += 2) 
                {
                    {
                        arr_38 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 2673201970U)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (_Bool)1))));
                        arr_39 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned int) arr_36 [i_8 - 1]));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (unsigned int i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        var_22 *= ((/* implicit */signed char) var_9);
        /* LoopSeq 2 */
        for (short i_14 = 0; i_14 < 17; i_14 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_15 = 2; i_15 < 15; i_15 += 1) 
            {
                var_23 = ((/* implicit */long long int) var_11);
                arr_48 [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_26 [i_15 + 1] [i_15 - 2] [i_15 - 2]) / (arr_26 [i_15 + 2] [i_15] [i_15 + 1])))) ? (((/* implicit */long long int) max((arr_26 [i_15 + 2] [i_15 + 2] [i_15]), (arr_26 [i_15 - 2] [i_15 + 1] [i_15])))) : (((7562559530062885017LL) + (((/* implicit */long long int) arr_26 [i_15 + 2] [i_15 + 2] [i_15 - 1]))))));
                var_24 ^= ((/* implicit */int) (+(max((arr_47 [i_13] [i_15 - 2] [i_15 + 1]), (arr_47 [i_13] [i_15 - 2] [i_15 + 1])))));
                var_25 = ((/* implicit */unsigned long long int) -172227762);
            }
            /* LoopSeq 3 */
            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((arr_14 [i_13] [i_13] [i_16] [i_13] [i_14]), (((/* implicit */long long int) (short)30998)))) % (((((/* implicit */long long int) 1387589181)) - (-9057783490746827203LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_44 [i_16] [i_14] [(_Bool)1] [i_14])) + (((/* implicit */int) arr_1 [i_13] [i_13]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_13] [i_13] [i_14] [i_14] [i_13])) > (((/* implicit */int) (unsigned short)57754))))))) : (((/* implicit */int) var_12))));
                /* LoopSeq 1 */
                for (unsigned long long int i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1387589173)) ? (172227741) : (((/* implicit */int) (signed char)89))));
                    var_28 = ((/* implicit */unsigned long long int) arr_44 [i_16] [i_16] [i_16] [i_16]);
                }
                arr_54 [i_16] [i_16] [i_13] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((arr_33 [i_13] [i_14] [(short)2] [i_16]) ? (((/* implicit */int) arr_49 [i_13] [i_14] [i_16])) : (((/* implicit */int) var_4))))), ((~(1530531637U)))));
            }
            /* vectorizable */
            for (long long int i_18 = 2; i_18 < 15; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (int i_19 = 1; i_19 < 16; i_19 += 4) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        {
                            arr_63 [i_13] [i_14] [i_18] [i_19 - 1] [i_19] [i_19] [2] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) % (602936333U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_18 - 2])))));
                            var_29 *= ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned int) ((unsigned char) ((signed char) (unsigned short)65534)));
                /* LoopSeq 1 */
                for (long long int i_21 = 0; i_21 < 17; i_21 += 3) 
                {
                    arr_66 [i_13] [i_14] [i_14] [i_21] [i_14] = ((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) (unsigned short)51318)) : (((/* implicit */int) (short)-31118))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_22 = 0; i_22 < 17; i_22 += 1) 
                    {
                        arr_70 [i_22] [i_13] [i_14] [i_13] [7LL] [i_21] [i_22] = ((((/* implicit */_Bool) arr_52 [13U] [i_14] [(unsigned short)10])) && (((/* implicit */_Bool) ((short) arr_7 [i_13] [i_14] [i_18] [i_22]))));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_58 [i_13] [i_18 - 1] [i_18 - 1] [i_18 - 1])) & (((/* implicit */int) arr_58 [i_13] [i_18 - 1] [i_18] [i_21]))));
                        var_32 -= ((/* implicit */long long int) ((unsigned int) (_Bool)1));
                        arr_71 [i_22] [i_22] [i_18] [i_22] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) -4589109264466921612LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_13] [i_13] [i_13] [i_13])))))));
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) 3934873366U))));
                    }
                }
            }
            for (int i_23 = 2; i_23 < 14; i_23 += 4) 
            {
                arr_76 [i_13] [i_13] [i_13] [i_23] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (arr_40 [i_14] [i_23]) : (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)14218))))))), (max((((/* implicit */unsigned int) min((((/* implicit */short) var_8)), (arr_65 [i_23 + 2] [i_14] [(signed char)7])))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                var_34 |= ((/* implicit */unsigned short) (unsigned char)242);
            }
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [i_13]))))) % ((~(((/* implicit */int) var_11)))))))));
        }
        for (short i_24 = 0; i_24 < 17; i_24 += 3) /* same iter space */
        {
            var_36 = ((((/* implicit */long long int) ((((/* implicit */_Bool) min(((unsigned short)14217), (((/* implicit */unsigned short) (signed char)97))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_6)))) : (1842356628)))) | (((((/* implicit */_Bool) min(((short)23343), (((/* implicit */short) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (signed char)-52)))))) : (((((/* implicit */_Bool) arr_26 [i_13] [i_24] [(unsigned short)19])) ? (arr_46 [i_13] [i_13] [i_24] [i_13]) : (((/* implicit */long long int) var_2)))))));
            var_37 = ((/* implicit */unsigned int) (-(5077986558928718475ULL)));
            arr_79 [i_24] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */int) (unsigned char)203)) : (((/* implicit */int) (unsigned char)233))));
        }
        arr_80 [i_13] [(_Bool)0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 3454526959U)) ? (-1842356621) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)198)))) : (((/* implicit */int) (unsigned char)112)))), (((/* implicit */int) var_11))));
    }
    for (unsigned int i_25 = 0; i_25 < 19; i_25 += 1) 
    {
        var_38 = ((((/* implicit */int) (unsigned char)16)) << (((((/* implicit */int) (signed char)-116)) + (126))));
        arr_83 [i_25] [i_25] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_25] [i_25])) && (((/* implicit */_Bool) arr_13 [i_25] [i_25]))))), (((arr_13 [i_25] [i_25]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13387)))))));
        var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) ((long long int) (unsigned short)57754)))));
    }
}
