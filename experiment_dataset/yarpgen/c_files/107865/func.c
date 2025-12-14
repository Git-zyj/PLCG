/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 107865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=107865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/107865
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_7 [i_2] [(signed char)0] [i_1] [i_2]))));
                        arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_0);
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_4 [i_2] [i_2]))));
                        arr_11 [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) ((arr_3 [i_1] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) != (((/* implicit */int) (signed char)-47)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (signed char)-47)))) : (((((/* implicit */_Bool) (signed char)44)) ? (min((2731928355771421138ULL), (((/* implicit */unsigned long long int) 7095253504273526274LL)))) : (2731928355771421138ULL)))));
                    }
                    for (short i_4 = 1; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        var_16 -= ((/* implicit */long long int) ((_Bool) (+(arr_3 [i_0] [i_0]))));
                        var_17 ^= ((long long int) min((((/* implicit */long long int) (signed char)-22)), (-2545744808509832527LL)));
                    }
                    arr_15 [i_2] [i_0] [i_0] [i_0] = ((((/* implicit */int) arr_7 [i_0] [(unsigned char)21] [i_1] [i_0])) + (((/* implicit */int) (signed char)-44)));
                }
                for (short i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0]);
                                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) min((((/* implicit */long long int) var_11)), (var_10))))));
                                arr_22 [i_0] = ((/* implicit */short) arr_9 [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 1) 
                    {
                        arr_25 [10LL] [10LL] |= ((/* implicit */signed char) (((~(((/* implicit */int) arr_24 [i_8] [i_5] [i_1] [i_0 - 3])))) & (((/* implicit */int) arr_14 [i_0 - 3] [i_1]))));
                        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_4))));
                    }
                    var_21 = arr_3 [i_1] [i_1];
                }
                for (short i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) (((!((!(((/* implicit */_Bool) 1033270729)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((long long int) arr_24 [i_9] [(unsigned char)5] [i_0 - 2] [i_0])) < (((/* implicit */long long int) ((/* implicit */int) arr_4 [(short)18] [i_1]))))))) : (((long long int) (~(74391582)))))))));
                    var_23 ^= ((/* implicit */long long int) min((((short) max((((/* implicit */long long int) var_7)), (-5224863871178180460LL)))), (((/* implicit */short) var_6))));
                    var_24 = max((var_3), (((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16376))) : (-7365241502008979420LL))));
                }
                for (signed char i_10 = 3; i_10 < 22; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (~((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4035))))))))));
                        var_26 = ((/* implicit */_Bool) var_1);
                        arr_34 [i_0] [i_0] [2ULL] [i_10 - 3] = ((/* implicit */unsigned long long int) var_13);
                    }
                    arr_35 [i_0] [i_1] [i_10 - 1] = ((/* implicit */unsigned char) max((((/* implicit */short) max(((signed char)22), ((signed char)47)))), ((short)-32588)));
                    var_27 ^= ((/* implicit */short) min(((~(arr_27 [i_10 - 1] [i_10] [i_1] [i_0]))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    arr_36 [i_0] [i_1] = ((/* implicit */signed char) var_3);
                    arr_37 [i_0 - 3] [i_0] [i_10 - 1] = ((/* implicit */int) min((arr_19 [(_Bool)1] [i_10] [i_1] [(_Bool)1]), (((((/* implicit */_Bool) (+(-7365241502008979420LL)))) ? (max((-4433363570130048298LL), (((/* implicit */long long int) (unsigned short)49158)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)44)))))));
                }
                var_28 = ((/* implicit */short) (((~(arr_27 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 1]))) < (((((/* implicit */_Bool) (short)9244)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0]))) : (arr_27 [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                var_29 = ((/* implicit */long long int) min((var_29), (min((((long long int) ((((/* implicit */_Bool) arr_33 [2LL] [2LL] [i_0] [i_0 - 2] [i_1] [i_1])) ? (59531766926002582LL) : (arr_19 [4LL] [i_1] [i_1] [i_1])))), (((/* implicit */long long int) min((var_1), (((((/* implicit */_Bool) (signed char)49)) ? (((/* implicit */int) arr_12 [(signed char)6])) : (((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [18ULL])))))))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_12 = 1; i_12 < 10; i_12 += 1) 
    {
        arr_40 [i_12] [(unsigned short)5] = ((/* implicit */signed char) (-(((/* implicit */int) arr_24 [i_12 + 1] [i_12 - 1] [i_12 + 2] [i_12 - 1]))));
        var_30 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 8682178875772606179LL)))));
        arr_41 [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7365241502008979420LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
        var_31 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_16 [i_12] [(_Bool)1] [(_Bool)1] [i_12]))) ? (571957152676052992LL) : (arr_21 [20] [12] [(unsigned short)8] [i_12])));
    }
    for (unsigned long long int i_13 = 4; i_13 < 14; i_13 += 1) 
    {
        arr_44 [i_13] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((long long int) arr_6 [i_13] [i_13] [i_13 - 2]))), (((((/* implicit */_Bool) arr_42 [i_13 - 1])) ? (((/* implicit */unsigned long long int) var_9)) : (var_4)))));
        var_32 = ((/* implicit */short) ((((-7884281239715720537LL) + (9223372036854775807LL))) >> (((((((((/* implicit */int) (short)24984)) > (((/* implicit */int) arr_31 [i_13 - 1] [i_13 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-47))) : (var_3))) + (53LL)))));
        arr_45 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [(short)6])) ? (max((((((/* implicit */_Bool) arr_42 [i_13])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8)))), ((-(((/* implicit */int) (unsigned short)61501)))))) : (((/* implicit */int) arr_13 [6LL]))));
        var_33 *= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_7 [20] [i_13 - 4] [i_13 - 1] [20])) : (((/* implicit */int) arr_7 [22LL] [i_13 - 2] [i_13 + 1] [22LL]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) : (7365241502008979396LL)));
    }
    for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 1) 
    {
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_14] [4LL]))))) ? (((((/* implicit */int) (signed char)-67)) | (((/* implicit */int) arr_0 [4] [4])))) : (((int) (signed char)28)))))));
        arr_49 [i_14] [(unsigned char)1] = ((/* implicit */int) max((((/* implicit */long long int) arr_0 [i_14] [i_14])), (min((((/* implicit */long long int) var_8)), (((arr_47 [i_14] [(unsigned char)6]) & (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
        var_35 += (unsigned char)0;
    }
    for (int i_15 = 0; i_15 < 12; i_15 += 3) 
    {
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -7365241502008979395LL)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (unsigned char)62)))))));
        var_37 ^= ((long long int) var_7);
        /* LoopNest 3 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) 
            {
                for (signed char i_18 = 3; i_18 < 10; i_18 += 3) 
                {
                    {
                        arr_60 [(unsigned char)8] = ((/* implicit */short) arr_4 [i_17] [i_17]);
                        arr_61 [i_18] = ((/* implicit */short) 17480748909351181505ULL);
                    }
                } 
            } 
        } 
        var_38 = min((((((/* implicit */_Bool) arr_1 [(short)0] [i_15])) ? (9223372036854775807ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4035))))), (((/* implicit */unsigned long long int) min((var_13), (((/* implicit */int) var_5))))));
        arr_62 [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((var_10), (-1LL))), (-1LL)))) ? (var_4) : (((/* implicit */unsigned long long int) (+(2112912429))))));
    }
}
