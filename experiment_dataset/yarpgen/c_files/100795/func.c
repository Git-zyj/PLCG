/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100795
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
    var_14 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */unsigned long long int) ((((unsigned int) 14945899200378460162ULL)) % (((3143842602U) * (var_9))))))));
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (+(9747100303953255910ULL)))) || (((/* implicit */_Bool) var_5))))), (((((/* implicit */int) ((var_8) > (var_2)))) % ((-(((/* implicit */int) var_5))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((unsigned long long int) ((unsigned int) arr_0 [i_0] [i_0]))) > (var_13))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1])))));
            arr_8 [i_1] = ((/* implicit */unsigned short) var_6);
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)45247)), (0U))));
                var_17 ^= max((((/* implicit */unsigned long long int) ((unsigned short) arr_9 [i_0]))), (min((max((arr_3 [i_2] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)45247)))), (arr_9 [i_0]))));
                arr_12 [i_2] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) arr_1 [i_0]);
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_1] [i_0] &= var_6;
                var_18 = ((/* implicit */unsigned int) ((var_3) | (((/* implicit */unsigned long long int) arr_10 [i_1 - 1] [i_1]))));
                arr_18 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 1] [i_3])) || (((/* implicit */_Bool) ((unsigned int) arr_5 [i_1])))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
            {
                var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (16678859056567877156ULL) : (774248664022746319ULL)))) ? (((unsigned long long int) arr_13 [i_0] [i_1] [i_0] [i_0])) : (((unsigned long long int) arr_13 [i_0] [i_1] [i_1] [i_1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3297654538U)) * (arr_5 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)44764), ((unsigned short)44764))))) : (((((/* implicit */_Bool) var_8)) ? (arr_15 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_9)))))))));
                var_20 = ((/* implicit */unsigned long long int) ((unsigned int) max((var_8), (arr_2 [i_0]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    arr_24 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((arr_5 [i_1]) >= (((/* implicit */unsigned long long int) 668910760U))))))))));
                    var_21 = ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_1] [i_5] [i_1 + 1] [i_5 + 1]))) ? (((/* implicit */unsigned long long int) arr_2 [i_4])) : (((unsigned long long int) var_11)));
                    arr_25 [i_1] [i_1] [i_1] [i_5 - 1] = ((/* implicit */unsigned short) arr_20 [i_1] [i_1 - 1] [i_1] [i_1]);
                    var_22 *= ((/* implicit */unsigned int) (unsigned short)62500);
                }
            }
            arr_26 [i_0] [i_1] [i_1] = ((unsigned int) arr_14 [i_1] [i_1] [i_1] [i_0]);
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) 4294967291U);
                    arr_34 [i_0] [i_0] [i_0] [i_6] = arr_32 [i_6];
                    var_24 = ((/* implicit */unsigned int) min((((unsigned long long int) var_1)), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_6])) ? (668910760U) : (var_1)))) > (14945899200378460162ULL))))));
                    arr_35 [i_7] [i_6] [i_0] = ((/* implicit */unsigned int) (unsigned short)37145);
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 3) /* same iter space */
        {
            arr_38 [i_8] [i_8] = ((/* implicit */unsigned short) var_10);
            arr_39 [i_8] [i_0] = ((/* implicit */unsigned short) ((arr_9 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_8] [i_8] [i_0] [i_8]), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4294967280U)) || (((/* implicit */_Bool) 3700742825U)))))))))));
            var_25 = ((unsigned long long int) (!(((/* implicit */_Bool) var_4))));
        }
        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 16; i_10 += 2) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min((max((((unsigned int) var_9)), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))))), (2694518621U))))));
                        arr_49 [i_0] [i_0] [i_11] [i_10] [i_11] = ((/* implicit */unsigned long long int) max(((~(max((((/* implicit */unsigned int) (unsigned short)65532)), (arr_29 [i_11]))))), (min((arr_22 [i_11]), (((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                    }
                } 
            } 
            arr_50 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((max((var_9), (((/* implicit */unsigned int) (unsigned short)65535)))) >= (668910779U)))) * ((-(((/* implicit */int) ((5842273561058740661ULL) > (arr_3 [i_0] [i_0]))))))));
        }
    }
    for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) 
        {
            for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((unsigned int) var_13)))))));
                    var_28 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (min(((-(9114851330216847452ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_36 [i_12])))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        for (unsigned short i_16 = 4; i_16 < 12; i_16 += 2) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 16071512610847066553ULL))))), ((+(arr_15 [i_12] [i_13] [i_12]))))))));
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) > (arr_37 [i_13]))))) % (var_1)))));
                                var_31 ^= ((/* implicit */unsigned int) (-((-(arr_56 [i_16 - 4] [i_16 - 4] [i_16 - 4])))));
                                var_32 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1949451244U))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_17 = 1; i_17 < 15; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 16; i_18 += 2) 
            {
                for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 2) /* same iter space */
                        {
                            var_34 += ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_18])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_73 [i_12]))) : (var_9)))), (((unsigned long long int) arr_57 [i_12] [i_12] [i_12] [i_18] [i_19] [i_20])))) | (((arr_31 [i_19] [i_17 + 1] [i_19]) | (min((arr_56 [i_19] [i_12] [i_12]), (arr_55 [i_19] [i_19] [i_17 + 1])))))));
                            arr_75 [i_19] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_64 [i_12]))));
                        }
                        for (unsigned short i_21 = 0; i_21 < 16; i_21 += 2) /* same iter space */
                        {
                            arr_79 [i_12] [i_12] [i_12] [i_12] = (unsigned short)31363;
                            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (~(((unsigned long long int) ((((/* implicit */_Bool) 1U)) || (((/* implicit */_Bool) var_7))))))))));
                            arr_80 [i_17] [i_19] = 4294967285U;
                        }
                        arr_81 [i_12] [8U] [i_18] [i_19] [8U] = (((!(((/* implicit */_Bool) arr_53 [i_18] [i_17] [i_17 - 1])))) ? (((/* implicit */unsigned long long int) ((unsigned int) max((((/* implicit */unsigned int) (unsigned short)23241)), (var_9))))) : (max((arr_68 [i_17] [i_17 + 1] [i_18]), (arr_68 [i_12] [i_17 + 1] [i_18]))));
                        arr_82 [i_12] [i_17] [i_18] [i_19] [i_12] = var_8;
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_22 = 0; i_22 < 16; i_22 += 1) 
        {
            for (unsigned int i_23 = 2; i_23 < 15; i_23 += 2) 
            {
                {
                    var_36 = ((/* implicit */unsigned short) max((((unsigned long long int) ((unsigned long long int) arr_43 [7ULL] [7ULL] [i_22] [i_23]))), (((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) (unsigned short)53683)), (arr_42 [i_23] [i_12] [i_12]))), (arr_78 [10U] [i_22] [i_12] [i_12] [i_12]))))));
                    var_37 = 0ULL;
                    /* LoopNest 2 */
                    for (unsigned short i_24 = 3; i_24 < 15; i_24 += 2) 
                    {
                        for (unsigned int i_25 = 0; i_25 < 16; i_25 += 1) 
                        {
                            {
                                arr_94 [i_12] [i_24] [i_22] [i_12] &= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (var_10) : (var_6))) > (((/* implicit */unsigned long long int) (-(2694518621U))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20772))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)127))))) : (((((/* implicit */_Bool) 3180805588U)) ? (arr_74 [i_12] [i_23] [i_23] [i_24] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)23247)))))))));
                                var_38 += ((((/* implicit */_Bool) ((unsigned long long int) arr_28 [i_23 - 1] [i_24 - 1]))) ? (((/* implicit */unsigned long long int) (+(arr_46 [i_24 - 3])))) : (((((/* implicit */_Bool) arr_37 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34163))) : (var_6))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_95 [10ULL] [i_12] = arr_1 [i_12];
        arr_96 [i_12] [i_12] = ((/* implicit */unsigned long long int) (~(3700742825U)));
    }
    for (unsigned int i_26 = 0; i_26 < 15; i_26 += 3) 
    {
        arr_100 [i_26] = ((unsigned long long int) ((((/* implicit */_Bool) 9114851330216847452ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20771))) : (32767U)));
        var_39 += ((/* implicit */unsigned short) min((((unsigned long long int) (~(1584919668152907627ULL)))), (((unsigned long long int) var_0))));
        /* LoopNest 3 */
        for (unsigned short i_27 = 0; i_27 < 15; i_27 += 2) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 15; i_28 += 2) 
            {
                for (unsigned int i_29 = 2; i_29 < 13; i_29 += 4) 
                {
                    {
                        arr_108 [i_26] [i_26] [i_26] = ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */_Bool) arr_2 [i_29])) || (((/* implicit */_Bool) (unsigned short)0)))) || (((/* implicit */_Bool) (unsigned short)23241)))));
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) max((min((arr_33 [i_26] [i_29] [i_28] [i_29]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_101 [i_26] [i_26] [i_26])) >= (((/* implicit */int) (unsigned short)63087))))))), (((/* implicit */unsigned long long int) arr_76 [i_26] [i_27] [i_28] [i_27] [i_27])))))));
                    }
                } 
            } 
        } 
    }
}
