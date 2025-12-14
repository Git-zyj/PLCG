/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185116
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
    var_10 = (~(max((((/* implicit */unsigned int) ((_Bool) var_8))), (((unsigned int) var_9)))));
    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-5046792236762249669LL)))) ? (var_9) : (((/* implicit */unsigned long long int) (-(var_3))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) var_2)))))) % (var_1))) : (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [(unsigned char)10])) ? (((/* implicit */int) arr_2 [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1] [9U]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64)))))) : (((arr_3 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)98)))))))) : (arr_3 [i_0] [i_1 + 2])));
            arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) && ((_Bool)1)));
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                var_13 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) arr_6 [i_0] [i_2])))));
                arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (((_Bool)1) || (((/* implicit */_Bool) (short)7013))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 3) 
            {
                var_14 ^= ((/* implicit */signed char) arr_0 [i_1 + 2]);
                var_15 += ((/* implicit */long long int) (+(arr_11 [i_1 + 1] [i_3 + 2] [i_3 - 1] [i_3])));
                var_16 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_3] [i_1] [i_1] [i_0])) ^ (((/* implicit */int) arr_5 [i_3] [i_3 - 1] [i_1 + 1] [11ULL]))));
                var_17 ^= ((/* implicit */int) arr_1 [i_0]);
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_0] [i_1])) | (((/* implicit */int) arr_10 [i_0] [i_1 - 1]))));
            }
            /* vectorizable */
            for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 20; i_5 += 4) 
                {
                    for (long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-72)) % (((((/* implicit */int) (signed char)76)) - (((/* implicit */int) (signed char)98)))))))));
                            var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_1 + 2] [i_1 + 2] [i_4 - 2] [i_5 - 3] [i_5 + 1] [i_6 + 2]))));
                            var_21 &= ((/* implicit */short) arr_19 [i_6] [(unsigned char)21] [i_5] [5] [i_1] [i_0]);
                        }
                    } 
                } 
                arr_21 [i_0] [i_1] [i_4 + 2] = ((/* implicit */unsigned char) ((((unsigned long long int) arr_20 [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1])) + (((/* implicit */unsigned long long int) ((1946258467) | (((/* implicit */int) (signed char)7)))))));
            }
        }
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            arr_24 [i_0] [i_7] = ((/* implicit */long long int) (signed char)-72);
            arr_25 [i_7] [i_7] = (~(((/* implicit */int) max(((short)32767), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)87))) <= (3423804186U))))))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((max((arr_18 [(signed char)8] [i_7] [i_7] [(signed char)8] [i_7] [i_7] [i_7]), (((/* implicit */unsigned int) arr_6 [i_7] [i_0])))), ((-(((arr_18 [i_7] [i_7] [i_7] [i_7] [i_7] [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))))));
            var_23 = ((/* implicit */unsigned char) (((~(var_5))) & (((((/* implicit */int) arr_5 [(signed char)12] [i_7] [1U] [1U])) & (((/* implicit */int) arr_5 [i_0] [i_7] [i_7] [i_7]))))));
        }
        /* LoopSeq 3 */
        for (unsigned int i_8 = 3; i_8 < 22; i_8 += 2) 
        {
            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0] [i_8] [i_8])), (var_0))) == (((/* implicit */unsigned long long int) arr_9 [i_0] [i_8] [i_8])))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                for (short i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    {
                        arr_32 [i_10] [i_8] [i_8] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_17 [(short)3] [i_8] [i_9] [i_8 - 3] [i_10] [(unsigned short)18])), (arr_14 [i_0] [i_8] [i_9]))), (max((arr_14 [i_0] [i_8] [i_9]), (((/* implicit */unsigned short) arr_17 [i_0] [i_8] [i_9] [i_8 - 1] [i_0] [i_8]))))));
                        var_25 |= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) max(((unsigned char)247), (((/* implicit */unsigned char) (signed char)101)))))) % ((~(((/* implicit */int) arr_17 [i_0] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 3] [i_9]))))));
                    }
                } 
            } 
            arr_33 [i_8] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 871163096U)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned short)22561))))));
            arr_34 [i_8] = -892936251;
        }
        for (unsigned short i_11 = 0; i_11 < 23; i_11 += 2) 
        {
            arr_37 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_14 [i_0] [i_11] [i_11]), (arr_29 [i_0] [i_11])))) >> (((max((arr_16 [i_11] [i_11] [i_11] [i_11] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_20 [i_11] [4ULL] [i_0] [i_0])))) - (18446744072224314833ULL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) max((arr_35 [i_0]), ((signed char)94))))))) : (((arr_26 [i_0]) / (arr_26 [i_0])))));
            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_0] [i_11] [22])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) arr_35 [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)53)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (871163120U)))));
        }
        for (short i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            arr_42 [i_0] = ((/* implicit */signed char) ((arr_26 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_0 [(_Bool)1])) == (arr_15 [i_0] [14] [(unsigned short)14] [i_0])))))));
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 23; i_13 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 1) 
                    {
                        {
                            var_27 *= ((var_9) + (max((((unsigned long long int) arr_48 [i_15] [i_12] [(unsigned char)4] [(_Bool)1] [i_12])), (max((arr_15 [i_0] [i_0] [(unsigned short)14] [i_0]), (((/* implicit */unsigned long long int) arr_28 [i_0])))))));
                            var_28 = ((/* implicit */_Bool) (~(min((((((/* implicit */long long int) ((/* implicit */int) (signed char)-66))) / (arr_48 [0U] [i_12] [i_13] [i_14] [i_15]))), (((/* implicit */long long int) arr_12 [i_0]))))));
                            arr_50 [(unsigned char)5] [i_14] [i_14] [i_15] [(short)11] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)20))));
                        }
                    } 
                } 
                var_29 += ((/* implicit */signed char) (short)4095);
            }
            for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                /* LoopSeq 2 */
                for (int i_17 = 1; i_17 < 22; i_17 += 2) 
                {
                    var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) (short)6054)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_0] [i_12] [i_16] [i_17])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6055)) ? (-2147483621) : (((/* implicit */int) (signed char)46)))))))) : (((/* implicit */int) (short)-1))));
                    arr_56 [(_Bool)1] [i_12] [i_16] [i_17] = ((/* implicit */unsigned long long int) arr_9 [i_17] [i_16] [i_12]);
                }
                for (short i_18 = 0; i_18 < 23; i_18 += 2) 
                {
                    arr_59 [i_0] [i_12] [i_16] [i_18] = ((/* implicit */unsigned long long int) max((3423804186U), (((/* implicit */unsigned int) (unsigned short)16380))));
                    var_31 += ((/* implicit */int) ((signed char) (signed char)69));
                    /* LoopSeq 2 */
                    for (int i_19 = 4; i_19 < 19; i_19 += 3) 
                    {
                        var_32 &= ((/* implicit */_Bool) ((((unsigned long long int) arr_26 [i_19 - 3])) ^ (((/* implicit */unsigned long long int) ((arr_26 [i_19 + 2]) / (arr_26 [i_19 + 1]))))));
                        var_33 = ((/* implicit */short) 1832941630073694900ULL);
                    }
                    for (int i_20 = 3; i_20 < 22; i_20 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned short) ((max((arr_9 [i_20 - 3] [i_20 - 3] [i_20]), (((/* implicit */unsigned int) (short)-10368)))) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        var_35 = ((/* implicit */unsigned char) arr_49 [(unsigned char)22] [i_12] [i_18] [i_18] [i_20 - 3]);
                        var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_63 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) (signed char)3)))))))) ? (max((max((((/* implicit */unsigned int) (signed char)69)), (arr_61 [i_0] [(short)12] [i_16] [(signed char)7] [i_20]))), (((/* implicit */unsigned int) (unsigned short)25977)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) max(((unsigned short)65535), (arr_1 [(short)12])))))))));
                    }
                    var_37 = ((/* implicit */unsigned char) (signed char)91);
                }
                var_38 = ((/* implicit */int) ((((arr_19 [i_0] [i_0] [i_12] [i_16] [i_16] [i_16]) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_0] [(unsigned short)8] [i_0] [19ULL]))))))) && (((((/* implicit */int) (signed char)111)) < (((/* implicit */int) (signed char)-86))))));
                arr_66 [i_12] [i_12] [i_12] [i_12] &= ((/* implicit */long long int) ((((/* implicit */int) (signed char)23)) & (((/* implicit */int) (unsigned short)33460))));
                /* LoopSeq 1 */
                for (unsigned short i_21 = 3; i_21 < 22; i_21 += 1) 
                {
                    var_39 = ((/* implicit */int) min((3110963041U), (((/* implicit */unsigned int) (unsigned short)20494))));
                    var_40 = ((/* implicit */short) arr_36 [i_12]);
                    var_41 = ((/* implicit */int) (-(max((((/* implicit */long long int) arr_52 [i_21 + 1] [i_21 - 1] [(short)19])), (arr_48 [i_0] [i_16] [i_21 - 2] [(short)6] [i_21 - 1])))));
                    arr_69 [6] [i_12] [i_16] [i_21] = ((/* implicit */long long int) var_7);
                }
                arr_70 [i_16] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 523264)) * (arr_3 [i_0] [i_16])));
            }
        }
    }
    /* vectorizable */
    for (signed char i_22 = 3; i_22 < 23; i_22 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_23 = 1; i_23 < 23; i_23 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_24 = 0; i_24 < 24; i_24 += 2) 
            {
                for (int i_25 = 0; i_25 < 24; i_25 += 4) 
                {
                    {
                        var_42 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_79 [i_22 - 1] [i_23 + 1] [i_25] [i_25] [i_25] [i_25])) ? (((((/* implicit */_Bool) 0)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_23] [(short)14] [i_25]))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_80 [i_24] [i_23] [i_22])))))));
                        arr_81 [(signed char)23] [(signed char)23] [i_25] = ((/* implicit */short) (signed char)-122);
                        var_43 = ((/* implicit */int) (-(arr_72 [i_22 - 3])));
                    }
                } 
            } 
            var_44 = ((/* implicit */signed char) ((unsigned short) (unsigned char)15));
        }
        var_45 = ((/* implicit */int) (unsigned char)90);
        arr_82 [i_22 - 2] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_71 [i_22 - 2] [i_22 - 1]))));
        arr_83 [i_22] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)3359)) + (((/* implicit */int) arr_78 [i_22] [i_22 - 1] [i_22 - 2]))));
    }
    for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
    {
        var_46 = ((/* implicit */unsigned int) (-(((/* implicit */int) (((+(arr_85 [i_26]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_22 [i_26] [i_26] [i_26])) < (arr_84 [i_26] [4]))))))))));
        arr_88 [i_26] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)9)) && (((/* implicit */_Bool) (unsigned char)0))));
    }
}
