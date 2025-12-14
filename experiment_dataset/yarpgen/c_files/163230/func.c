/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163230
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
    var_14 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) -2966490132878124387LL))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_15 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) ((((((((/* implicit */_Bool) -563464492)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12680))))) << ((((~(((/* implicit */int) arr_9 [i_0 - 2] [i_0] [i_1] [i_0] [(unsigned short)8] [i_4])))) + (26))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))))));
                                var_15 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) 3631990101U))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)62)) || (((/* implicit */_Bool) 8850976316391896247LL))));
                            var_17 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)2668))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */long long int) (~(((((/* implicit */int) (short)2047)) | (((/* implicit */int) (unsigned short)16320))))));
                            arr_28 [i_0 + 2] [i_1] [i_7] [i_8] = ((((/* implicit */_Bool) min((arr_4 [i_0 - 2]), (arr_4 [i_0 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-83), (((/* implicit */signed char) (_Bool)1)))))) : (((arr_4 [i_0 + 3]) * (arr_4 [i_0 - 1]))));
                        }
                    } 
                } 
                var_19 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)123))) >= ((-9223372036854775807LL - 1LL)));
                arr_29 [4ULL] [6] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (4294967295U))) ? (((/* implicit */int) ((unsigned short) (signed char)127))) : ((+(((/* implicit */int) arr_16 [i_0 + 2] [0LL] [i_0] [i_0 - 2]))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) var_11);
    /* LoopSeq 3 */
    for (unsigned int i_9 = 0; i_9 < 23; i_9 += 3) 
    {
        arr_33 [i_9] = ((/* implicit */long long int) max(((+((-(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((arr_30 [i_9]) != (((/* implicit */int) arr_32 [i_9])))))));
        /* LoopNest 2 */
        for (int i_10 = 2; i_10 < 21; i_10 += 2) 
        {
            for (int i_11 = 0; i_11 < 23; i_11 += 2) 
            {
                {
                    arr_40 [(unsigned char)10] [i_10 + 1] [i_10 - 1] [(_Bool)0] = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_7))))));
                    var_21 &= ((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)6612)), (arr_34 [i_9] [i_10 + 1]))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */int) arr_39 [i_9] [i_11])) & (((((/* implicit */int) arr_39 [19] [i_11])) | (((/* implicit */int) arr_39 [i_11] [i_11]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        arr_43 [i_12] = ((/* implicit */_Bool) (((((_Bool)1) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -7978486728596148526LL))))))));
        /* LoopSeq 1 */
        for (long long int i_13 = 4; i_13 < 22; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (short i_14 = 3; i_14 < 24; i_14 += 2) 
            {
                for (int i_15 = 0; i_15 < 25; i_15 += 2) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) (unsigned short)2668);
                        var_24 &= 9223372036854775807LL;
                        arr_52 [i_12] [i_12] [17U] = ((/* implicit */_Bool) 8850976316391896240LL);
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_47 [i_12])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8))));
            /* LoopSeq 1 */
            for (unsigned char i_16 = 0; i_16 < 25; i_16 += 4) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_12]))) : (((7958312124816131309LL) - (3057627626823724401LL)))));
                arr_55 [i_12] [i_12] [5] = ((/* implicit */long long int) (_Bool)1);
                arr_56 [i_12] = ((/* implicit */long long int) (~(-302588718)));
            }
            /* LoopSeq 3 */
            for (unsigned short i_17 = 2; i_17 < 24; i_17 += 4) /* same iter space */
            {
                arr_59 [i_12] = ((/* implicit */unsigned char) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((arr_46 [i_13 - 3] [i_17 - 1]) + (823534397456203838LL))) - (6LL)))));
                arr_60 [i_12] [i_13 - 4] [i_17 - 1] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_54 [i_17 - 1] [i_17 - 1] [i_12] [i_17 - 1])) + (2147483647))) << (((((((/* implicit */int) var_2)) << (((((/* implicit */int) (signed char)127)) - (121))))) - (64)))));
                /* LoopNest 2 */
                for (long long int i_18 = 0; i_18 < 25; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 25; i_19 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) (~(137438937088ULL))))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_17 - 1] [i_17 + 1] [i_18] [i_17 + 1] [i_17 - 2])) || (((/* implicit */_Bool) -8320163758384548959LL)))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_20 = 2; i_20 < 24; i_20 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_21 = 2; i_21 < 22; i_21 += 3) 
                {
                    var_29 = ((/* implicit */unsigned long long int) ((7094773596589952137LL) & (((/* implicit */long long int) ((/* implicit */int) ((1568483762) < (((/* implicit */int) (signed char)127))))))));
                    arr_70 [i_12] = (+(((/* implicit */int) arr_64 [i_13 + 1] [i_13 - 1] [i_12] [i_21 + 3] [3LL] [i_21 + 1])));
                    var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) -8850976316391896254LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_54 [i_13 + 1] [i_13] [i_12] [i_21 - 2]))));
                    arr_71 [i_12] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) arr_48 [i_12] [i_12] [17LL] [i_21]);
                }
                arr_72 [i_12] [i_12] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_45 [i_20 - 2] [i_13 + 2]))));
                var_31 = ((/* implicit */long long int) (+(((/* implicit */int) (short)16747))));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3057627626823724401LL)) && ((_Bool)0)));
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_23 = 0; i_23 < 25; i_23 += 3) 
                {
                    for (long long int i_24 = 3; i_24 < 24; i_24 += 2) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_63 [i_24 - 2] [(short)2] [i_12] [5U] [i_24 - 2])) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) (unsigned char)221)) >> (((1299179085281867115ULL) - (1299179085281867102ULL)))))));
                            var_34 += ((/* implicit */unsigned long long int) (+(arr_51 [i_24 - 1] [i_13] [i_13] [i_12])));
                            arr_83 [i_12] [i_23] [i_23] = ((/* implicit */unsigned long long int) ((arr_77 [i_12] [i_13 + 1] [i_23] [i_24] [i_24 - 3]) ? (((/* implicit */int) (short)2047)) : (((/* implicit */int) ((signed char) (_Bool)0)))));
                            var_35 += ((/* implicit */unsigned long long int) (!(((var_2) && (((/* implicit */_Bool) var_8))))));
                            var_36 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (-6779561224590044005LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? ((-(((/* implicit */int) (short)32761)))) : (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_84 [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
            }
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 25; i_25 += 3) 
            {
                for (unsigned char i_26 = 0; i_26 < 25; i_26 += 3) 
                {
                    {
                        var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) 4294967286U))));
                        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) (!(arr_61 [i_12] [i_13 - 2] [i_13 - 2] [i_13]))))));
                        arr_90 [i_12] [i_12] [i_12] [i_12] = ((((/* implicit */_Bool) 3323441478U)) ? (arr_74 [i_12] [i_13 + 1]) : (arr_74 [i_12] [i_13 + 1]));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1748088718U)) ? (((/* implicit */int) (short)16723)) : (((/* implicit */int) var_12))));
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (unsigned int i_27 = 0; i_27 < 25; i_27 += 2) 
        {
            for (int i_28 = 3; i_28 < 23; i_28 += 2) 
            {
                for (int i_29 = 1; i_29 < 23; i_29 += 2) 
                {
                    {
                        var_40 = ((/* implicit */long long int) max((var_40), (((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (arr_42 [i_12])))))));
                        var_41 = ((/* implicit */_Bool) ((((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_2)))) | (((/* implicit */int) var_9))));
                        arr_100 [i_12] [i_27] [i_28 - 3] [i_29 + 1] [i_29] [i_29 + 2] = (!(((/* implicit */_Bool) ((3442304094U) >> (((var_6) - (2222392538840153035LL)))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_30 = 0; i_30 < 16; i_30 += 2) 
    {
        arr_105 [i_30] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) % (((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-3231))) : ((+((-9223372036854775807LL - 1LL))))))));
        /* LoopNest 3 */
        for (unsigned char i_31 = 2; i_31 < 14; i_31 += 4) 
        {
            for (unsigned short i_32 = 4; i_32 < 15; i_32 += 3) 
            {
                for (signed char i_33 = 0; i_33 < 16; i_33 += 2) 
                {
                    {
                        var_42 ^= ((/* implicit */long long int) var_8);
                        arr_116 [i_30] [i_30] [i_30] [i_30] [i_30] = ((/* implicit */int) arr_73 [i_31] [i_31 - 2] [i_30] [i_31 - 2]);
                    }
                } 
            } 
        } 
    }
}
