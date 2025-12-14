/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1242
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? ((-(max((1703039027897417870ULL), (((/* implicit */unsigned long long int) (short)4095)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) (short)-32758))))))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_13 ^= max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88))) & (3592848654U)))));
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 17442707110022293763ULL)) ? (144115188075855872ULL) : (arr_1 [i_0])))) || (((/* implicit */_Bool) max((((unsigned char) arr_1 [i_0])), (var_9))))));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] [i_1] = (+(((unsigned long long int) arr_0 [i_1] [i_1])));
        var_15 = (((+(3280144464U))) % (((/* implicit */unsigned int) ((/* implicit */int) var_7))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_10 [i_1] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_2])), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) : (((long long int) ((((/* implicit */_Bool) 17442707110022293750ULL)) ? (arr_8 [i_2] [0ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
            arr_11 [i_1] = ((/* implicit */long long int) ((unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */short) arr_5 [i_1])), (var_7)))), ((+(-1LL))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_16 &= ((/* implicit */short) 1004036963687257853ULL);
                var_17 |= ((/* implicit */unsigned long long int) ((long long int) var_5));
                arr_14 [i_1] [i_2] [(short)2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) * (((/* implicit */int) arr_5 [(unsigned char)9]))));
                arr_15 [2U] [i_1] [2U] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))));
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 8; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 6; i_5 += 3) 
                    {
                        {
                            arr_21 [i_1] [i_3] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [8ULL])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_1])))))) ? (((/* implicit */unsigned long long int) 22LL)) : (((unsigned long long int) var_5)));
                            var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 19LL)) && (((/* implicit */_Bool) 2602247206U))));
                            arr_22 [i_1] [i_2] [i_2] [i_4] [4ULL] [i_5] |= ((/* implicit */short) var_8);
                            arr_23 [i_3] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_4);
                            arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((short) 7903170908753808832ULL));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) ((unsigned char) ((2764922275391138782ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1955937924U)))) >= (arr_31 [i_7 - 1])));
                            var_21 = ((/* implicit */unsigned long long int) ((2966463258U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)0)))));
                        }
                    } 
                } 
                arr_34 [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 6LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (var_5))));
                /* LoopSeq 1 */
                for (unsigned long long int i_9 = 1; i_9 < 8; i_9 += 2) 
                {
                    var_22 = ((/* implicit */long long int) ((unsigned char) var_11));
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_17 [i_1] [i_2] [i_6] [i_9])))) / (arr_25 [i_9 + 1] [i_9] [9U] [i_9 + 2]))))));
                    var_24 = ((/* implicit */unsigned int) arr_28 [i_1] [i_2] [i_1]);
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 7; i_10 += 4) 
                    {
                        arr_39 [i_1] [i_10 - 2] [(unsigned char)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1955937907U)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)99))));
                        var_25 = ((/* implicit */long long int) (+(arr_17 [(unsigned char)0] [i_9 + 2] [i_10 + 2] [i_10])));
                    }
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_36 [i_1] [i_6] [i_9 + 2] [i_9 - 1])) ? (((((/* implicit */_Bool) 17442707110022293763ULL)) ? (((/* implicit */unsigned long long int) -20LL)) : (18446744073709551587ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))))))));
                }
                var_27 = ((/* implicit */long long int) ((unsigned long long int) 3394522059U));
            }
            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_1]) : (arr_1 [i_1]))), (4095ULL))))));
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 1) 
            {
                arr_44 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 2; i_13 < 9; i_13 += 1) 
                {
                    var_29 = ((((arr_13 [i_1] [i_11] [(unsigned char)7] [i_13 + 1]) >> (((((/* implicit */int) arr_5 [i_11])) + (42))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_13]))))));
                    var_30 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67))) * (17442707110022293750ULL)))) ? (832093778U) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 3563383434U))))));
                }
                for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    var_31 = arr_36 [i_1] [i_1] [i_12 + 2] [i_14];
                    var_32 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)14))));
                }
                for (unsigned char i_15 = 1; i_15 < 8; i_15 += 4) 
                {
                    var_33 += ((/* implicit */unsigned int) arr_25 [i_12 + 1] [i_15 + 2] [i_15 + 2] [i_15 + 2]);
                    var_34 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_1] [i_11] [5ULL] [i_11] [i_11] [i_1])) ? (((((/* implicit */_Bool) var_4)) ? (24U) : (2966463246U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_15 - 1] [i_11])))));
                }
                /* LoopSeq 1 */
                for (short i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    var_35 = ((/* implicit */short) (+(((/* implicit */int) (signed char)-45))));
                    var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_1] [3U] [i_1])) ? (((((/* implicit */_Bool) (short)12923)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12))) : (6461247024477975672ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67)))));
                }
            }
            for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (short i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    for (unsigned int i_19 = 4; i_19 < 9; i_19 += 1) 
                    {
                        {
                            var_37 *= ((/* implicit */unsigned int) (+(arr_27 [i_17] [i_17] [(short)1] [i_18])));
                            var_38 = ((((/* implicit */_Bool) 6449021552424366223ULL)) ? (1004036963687257841ULL) : (8753761538535154534ULL));
                        }
                    } 
                } 
                var_39 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1488310606U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((+(arr_32 [i_17] [i_17] [i_1] [i_11] [i_11] [i_11] [i_11])))));
                /* LoopSeq 1 */
                for (short i_20 = 0; i_20 < 10; i_20 += 2) 
                {
                    arr_68 [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) 17308629537428530784ULL)) ? (13535204738272954330ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 1) 
                    {
                        var_40 = ((unsigned char) (signed char)45);
                        arr_72 [i_1] [i_1] [i_1] [i_11] [i_17] [i_20] [i_21] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) (unsigned char)188)))));
                        var_41 *= ((/* implicit */unsigned char) ((signed char) arr_65 [i_20] [6LL] [i_17] [6ULL]));
                        var_42 = ((/* implicit */unsigned long long int) var_5);
                    }
                }
                arr_73 [i_1] [i_1] [i_17] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))));
            }
            var_43 &= ((((/* implicit */_Bool) ((((/* implicit */int) (short)23712)) >> (((((/* implicit */int) (signed char)120)) - (99)))))) ? (arr_70 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_38 [i_11] [i_1] [i_1] [i_1] [i_1]));
            var_44 *= ((/* implicit */unsigned int) 8829268000550500646ULL);
            arr_74 [i_1] [i_11] = ((/* implicit */unsigned long long int) ((arr_47 [i_1] [i_11] [i_11] [i_1]) / (((/* implicit */long long int) 3394522059U))));
            var_45 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
        }
    }
    for (unsigned long long int i_22 = 2; i_22 < 18; i_22 += 4) 
    {
        var_46 ^= ((/* implicit */long long int) max((3394522082U), (((/* implicit */unsigned int) (unsigned char)223))));
        var_47 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) arr_75 [i_22 - 2] [i_22 + 1])))));
    }
    /* vectorizable */
    for (unsigned int i_23 = 0; i_23 < 22; i_23 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_24 = 2; i_24 < 18; i_24 += 1) 
        {
            for (unsigned long long int i_25 = 1; i_25 < 21; i_25 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_26 = 0; i_26 < 22; i_26 += 1) 
                    {
                        for (unsigned char i_27 = 0; i_27 < 22; i_27 += 4) 
                        {
                            {
                                var_48 = ((/* implicit */signed char) ((unsigned char) arr_81 [i_25 + 1] [i_25 + 1] [i_24 + 2]));
                                var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2782200162U)) ? (2966463258U) : (4153974322U)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_28 = 0; i_28 < 22; i_28 += 4) 
                    {
                        for (unsigned char i_29 = 3; i_29 < 20; i_29 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */unsigned char) min((var_50), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_77 [i_24 + 4])) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_92 [i_25 + 1] [i_28])) ? (var_6) : (((/* implicit */long long int) 3613238383U))))))))));
                                var_51 = ((/* implicit */long long int) (short)-20907);
                                arr_94 [13ULL] [4U] [i_24] [i_25 - 1] [i_24] [i_24 + 3] [i_23] = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) + (523544048U)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_52 = ((long long int) ((arr_78 [i_23]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_23] [i_23] [i_23] [i_23])))));
        var_53 -= ((((/* implicit */_Bool) arr_87 [i_23] [i_23])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_93 [i_23] [(unsigned char)8] [i_23] [i_23] [i_23] [i_23] [i_23]))) : (((((/* implicit */unsigned long long int) var_6)) ^ (arr_88 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23]))));
    }
    var_54 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -7517649951735340630LL)) != (4412735102962190550ULL)));
    var_55 = ((/* implicit */unsigned long long int) var_9);
}
