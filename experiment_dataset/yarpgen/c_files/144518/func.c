/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 144518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=144518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/144518
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
    var_17 ^= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / ((+(min((((/* implicit */unsigned long long int) var_7)), (18446744073709551615ULL)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_18 *= ((/* implicit */signed char) arr_0 [i_0]);
        var_19 = var_3;
    }
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            arr_11 [i_2] = (-((+(arr_5 [i_1 + 1] [i_1 + 2]))));
            var_20 -= ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_2 [i_1 + 1])) >= (((/* implicit */int) arr_2 [i_1 - 1])))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            arr_16 [(signed char)8] [i_1] [i_1] = ((/* implicit */unsigned int) var_8);
            var_21 ^= ((/* implicit */unsigned char) (+(134217727ULL)));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
            {
                var_22 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_15 [i_4 - 1] [i_1 + 2])) : (((/* implicit */int) arr_15 [i_4 - 1] [i_1 - 2]))));
                arr_20 [i_1] [i_1] [2ULL] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                var_23 += ((((/* implicit */int) (unsigned char)255)) & (2147483647));
            }
            for (int i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                var_24 *= ((/* implicit */unsigned int) (~((-(((/* implicit */int) arr_1 [i_1 - 2]))))));
                var_25 += ((/* implicit */unsigned short) ((var_14) ? (((/* implicit */long long int) ((/* implicit */int) (short)29992))) : (arr_12 [i_1 - 1])));
            }
            arr_23 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_4)) ? (arr_3 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1]))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16)))))));
        }
        for (unsigned short i_6 = 2; i_6 < 12; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 2) 
            {
                for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) arr_1 [i_1]);
                            arr_36 [i_7] [i_9] [10LL] [i_7 + 1] [i_6] [i_1 - 2] [i_7] |= ((/* implicit */unsigned long long int) arr_1 [i_7 - 3]);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 11; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    {
                        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_31 [i_1] [i_10 - 1] [i_6] [i_1] [i_1])), (var_2)))) - (((((/* implicit */int) arr_31 [i_11] [i_10 - 1] [(signed char)10] [i_11] [i_11])) / (((/* implicit */int) var_11))))));
                        var_28 ^= ((/* implicit */unsigned long long int) (~((-((-(((/* implicit */int) var_11))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_12 = 2; i_12 < 10; i_12 += 4) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 12; i_13 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 13; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */short) min((((var_15) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_13 + 1] [i_6] [i_1])) || (((/* implicit */_Bool) var_2)))))))), ((!(((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))));
                            var_30 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((-154809393) | (196532827))))))));
                            arr_52 [i_6] [i_13] [i_6] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) arr_32 [i_6] [i_12] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_32 [i_6] [i_12 + 2] [i_6]) >= (arr_32 [i_6] [i_6] [i_14]))))) : (arr_32 [i_6] [i_13 + 1] [i_14])));
                            arr_53 [(unsigned short)8] [i_13] [i_6] [i_6] [i_6] [i_1] = ((/* implicit */unsigned char) arr_1 [i_1]);
                        }
                        for (signed char i_15 = 1; i_15 < 11; i_15 += 4) 
                        {
                            var_31 += ((/* implicit */unsigned int) (!(((_Bool) 511ULL))));
                            var_32 -= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)14))));
                        }
                        var_33 -= (!((_Bool)1));
                        var_34 = (+((~(var_8))));
                    }
                } 
            } 
        }
        var_35 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) 1481270134))));
    }
    var_36 += ((/* implicit */long long int) max((max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) var_16)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (((/* implicit */unsigned short) var_14)))))) > (((var_14) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65528))))))))));
    /* LoopSeq 3 */
    for (signed char i_16 = 0; i_16 < 15; i_16 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 2) 
        {
            var_37 = ((/* implicit */int) (~(arr_3 [i_17])));
            /* LoopSeq 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_38 = ((/* implicit */signed char) (~(arr_58 [i_17])));
                var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_15)))) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_18] [i_17]))))))));
                /* LoopSeq 1 */
                for (signed char i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                    var_41 = ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_13))))));
                }
                /* LoopSeq 3 */
                for (long long int i_20 = 0; i_20 < 15; i_20 += 4) 
                {
                    var_42 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_17]))));
                    arr_71 [i_16] [i_16] [i_17] [i_18] [i_18] [i_17] = ((/* implicit */long long int) (-(var_15)));
                    /* LoopSeq 2 */
                    for (int i_21 = 0; i_21 < 15; i_21 += 2) /* same iter space */
                    {
                        arr_76 [i_16] [i_17] [i_18] [i_18] [i_17] &= ((/* implicit */unsigned char) 9223372036854775807LL);
                        arr_77 [i_21] [0ULL] [i_18] [2ULL] [i_16] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_16]))));
                        var_43 = ((/* implicit */unsigned char) (~(var_1)));
                    }
                    for (int i_22 = 0; i_22 < 15; i_22 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -154809393))))))))));
                        var_45 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
                    }
                }
                for (unsigned char i_23 = 0; i_23 < 15; i_23 += 2) 
                {
                    var_46 = ((/* implicit */_Bool) min((var_46), ((!(((/* implicit */_Bool) arr_81 [i_23] [i_18] [i_18] [i_17] [i_16]))))));
                    var_47 = ((/* implicit */_Bool) min((var_47), (((/* implicit */_Bool) (((+(((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) var_2)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_24 = 0; i_24 < 15; i_24 += 1) 
                    {
                        arr_86 [i_16] [i_17] [i_18] [i_23] [i_23] [i_23] [i_24] = ((signed char) (~(((/* implicit */int) (unsigned short)8087))));
                        var_48 -= ((/* implicit */int) (!(((/* implicit */_Bool) 0LL))));
                    }
                    for (unsigned long long int i_25 = 4; i_25 < 13; i_25 += 1) 
                    {
                        var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) 1143202671U))));
                        var_50 ^= ((/* implicit */long long int) arr_90 [i_18] [i_18] [i_25 - 1] [i_25 + 1] [i_25]);
                    }
                }
                for (int i_26 = 1; i_26 < 12; i_26 += 3) 
                {
                    arr_94 [i_16] [i_17] [i_17] [i_17] |= ((/* implicit */unsigned long long int) (~(arr_82 [i_17] [i_26 + 2] [i_17] [i_26] [i_26 + 2] [(unsigned char)13])));
                    var_51 = ((/* implicit */unsigned long long int) (+(var_8)));
                    var_52 += ((/* implicit */long long int) (~((~(arr_82 [i_16] [i_16] [i_16] [i_16] [i_18] [i_26])))));
                }
            }
            for (unsigned short i_27 = 1; i_27 < 14; i_27 += 4) 
            {
                var_53 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_91 [i_27 - 1] [i_17] [i_16] [i_17] [i_16] [i_16]))))) - (arr_66 [i_27] [i_27 + 1] [i_27] [i_27])));
                arr_98 [i_27] [i_16] [i_16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_10)))));
                var_54 *= ((/* implicit */unsigned char) (+((+(9223372036854775807LL)))));
            }
        }
        var_55 += ((/* implicit */signed char) var_16);
        var_56 = ((/* implicit */unsigned long long int) (((+(var_12))) / (((/* implicit */unsigned int) (+(((/* implicit */int) arr_64 [i_16] [i_16] [i_16] [i_16])))))));
    }
    for (signed char i_28 = 0; i_28 < 14; i_28 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
        {
            for (unsigned int i_30 = 4; i_30 < 12; i_30 += 4) 
            {
                for (int i_31 = 1; i_31 < 13; i_31 += 2) 
                {
                    {
                        var_57 -= ((/* implicit */unsigned char) min((((/* implicit */int) (((~(0U))) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_80 [i_28]))))))))), ((~(((/* implicit */int) var_2))))));
                        var_58 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)26509)) != (((/* implicit */int) (_Bool)1))));
                        arr_112 [i_28] [(signed char)8] [(signed char)8] [i_31] = ((/* implicit */unsigned long long int) (~(min(((-(1481270155))), (((/* implicit */int) (signed char)119))))));
                    }
                } 
            } 
        } 
        arr_113 [i_28] [i_28] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)81)))))));
        /* LoopSeq 1 */
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            var_59 = ((/* implicit */_Bool) (-((~((~(((/* implicit */int) var_2))))))));
            var_60 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) & ((~((~(arr_108 [i_28] [i_28] [i_28])))))));
            arr_116 [(unsigned short)2] [i_32] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(18446744073709551615ULL))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_33 = 0; i_33 < 15; i_33 += 1) 
    {
        var_61 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((+(var_8))) : ((-(((/* implicit */int) var_14))))));
        arr_119 [i_33] &= ((/* implicit */unsigned long long int) arr_79 [i_33] [i_33] [i_33] [i_33] [i_33]);
        arr_120 [i_33] &= ((((/* implicit */_Bool) (~(4843970003683361915ULL)))) ? (arr_97 [i_33] [i_33]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) ^ (var_3))));
    }
}
