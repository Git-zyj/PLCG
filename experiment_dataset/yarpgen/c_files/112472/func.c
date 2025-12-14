/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112472
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
    var_10 = ((/* implicit */_Bool) var_6);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_9 [5ULL] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(short)20])) | (((/* implicit */int) (unsigned char)126))))) ? (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)197)) : (var_1))) : (((/* implicit */int) var_5))))) >= (var_6)));
                    var_11 = ((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2 + 3])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))) < (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [(_Bool)1] [(_Bool)1] [i_0])) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_3 = 3; i_3 < 20; i_3 += 2) 
        {
            var_12 = ((/* implicit */unsigned short) ((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 3] [i_3 + 3] [i_3 + 3]))) : ((-9223372036854775807LL - 1LL))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
            {
                arr_16 [i_4] [i_4] [i_4] |= ((/* implicit */short) var_0);
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [(unsigned short)13] [i_3 - 3])) || (arr_0 [i_3 + 2] [i_3 + 2])));
                    var_14 ^= ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [(unsigned short)7] [i_5] [i_3 - 2]))));
                }
                var_15 *= ((signed char) (+(((/* implicit */int) var_8))));
            }
            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) /* same iter space */
            {
                arr_23 [i_0] [i_0] [i_6] |= var_9;
                /* LoopSeq 4 */
                for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    arr_26 [i_3] [i_3 - 1] [i_6] [17] = ((/* implicit */int) arr_12 [(_Bool)1]);
                    arr_27 [i_3] [(_Bool)1] [i_6] [i_7] = ((/* implicit */short) ((arr_24 [i_3 + 2] [i_3 + 2]) ? ((((_Bool)1) ? (((/* implicit */int) arr_11 [i_0] [i_7])) : (((/* implicit */int) arr_6 [i_0] [i_3] [(_Bool)1] [i_7])))) : (((/* implicit */int) arr_8 [i_3 - 2] [i_3 + 2] [i_3] [i_3]))));
                }
                for (unsigned short i_8 = 1; i_8 < 22; i_8 += 2) 
                {
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)20397)) > (((/* implicit */int) var_7))));
                    var_17 -= ((((/* implicit */_Bool) (signed char)126)) || (((/* implicit */_Bool) arr_8 [i_0] [(unsigned char)6] [i_3] [i_8 - 1])));
                }
                for (long long int i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    var_18 = ((/* implicit */unsigned short) ((signed char) (unsigned short)5));
                    var_19 = ((/* implicit */short) ((_Bool) ((((/* implicit */int) arr_6 [11ULL] [9] [i_6] [i_9])) > (((/* implicit */int) (short)32767)))));
                }
                for (short i_10 = 1; i_10 < 21; i_10 += 2) 
                {
                    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_22 [17] [i_3] [17] [i_10 - 1]) : (arr_22 [i_0] [i_10 - 1] [i_10] [i_10 + 1])));
                    arr_35 [i_3] [i_3] [(unsigned char)17] [i_3] [i_0] = ((/* implicit */int) ((unsigned char) arr_20 [(signed char)17] [(signed char)17]));
                }
            }
        }
        for (int i_11 = 1; i_11 < 19; i_11 += 2) 
        {
            var_21 -= ((/* implicit */short) ((((/* implicit */int) (signed char)99)) << (((((((/* implicit */int) (signed char)-84)) + (114))) - (29)))));
            arr_38 [i_0] [i_11] [20LL] = ((/* implicit */long long int) var_0);
        }
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0])) ? (((/* implicit */int) ((max(((_Bool)1), (arr_25 [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) & (arr_22 [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)0])) > (((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned short i_12 = 0; i_12 < 20; i_12 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) var_1);
        arr_41 [i_12] [i_12] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_2))))))));
    }
    for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 12; i_14 += 1) 
        {
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        arr_54 [i_14] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_1 [i_16])) < (((/* implicit */int) ((_Bool) arr_28 [i_13] [i_14] [i_13]))))));
                        var_24 -= ((/* implicit */unsigned long long int) arr_28 [i_13] [i_15] [(unsigned short)18]);
                    }
                    for (short i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_18 = 3; i_18 < 8; i_18 += 4) 
                        {
                            var_25 ^= ((/* implicit */signed char) arr_34 [i_18 - 3] [i_18 + 3] [i_18] [i_18 + 2]);
                            var_26 *= ((/* implicit */unsigned char) (+(14254340698741621618ULL)));
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            var_27 *= ((/* implicit */signed char) ((((/* implicit */int) arr_36 [i_13] [i_13] [i_17])) * (((/* implicit */int) arr_0 [i_15] [i_19]))));
                            arr_62 [(unsigned char)2] [i_14] [i_14] [i_15] [(unsigned short)1] [i_14] = ((/* implicit */signed char) var_1);
                        }
                        /* vectorizable */
                        for (unsigned char i_20 = 0; i_20 < 12; i_20 += 4) /* same iter space */
                        {
                            arr_65 [i_14] = ((/* implicit */unsigned long long int) arr_31 [i_13] [(signed char)8] [(unsigned short)3] [i_14] [i_17] [i_20]);
                            var_28 *= arr_8 [i_13] [i_14] [i_15] [8];
                        }
                        for (unsigned char i_21 = 0; i_21 < 12; i_21 += 4) /* same iter space */
                        {
                            var_29 *= ((/* implicit */short) ((-604411348) > (((/* implicit */int) (signed char)-100))));
                            var_30 = ((/* implicit */short) arr_67 [i_13] [i_13]);
                            var_31 = ((/* implicit */signed char) ((unsigned int) ((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_14] [i_17]))))));
                            var_32 = ((/* implicit */int) arr_5 [i_14] [i_14]);
                        }
                    }
                    var_33 ^= ((/* implicit */short) arr_56 [i_13] [i_13] [i_13] [(unsigned char)0]);
                    var_34 &= ((/* implicit */unsigned char) ((int) arr_53 [i_15]));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_22 = 0; i_22 < 12; i_22 += 1) 
        {
            var_35 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_22] [i_22])))))));
            /* LoopNest 3 */
            for (unsigned char i_23 = 4; i_23 < 10; i_23 += 2) 
            {
                for (short i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    for (unsigned char i_25 = 1; i_25 < 11; i_25 += 4) 
                    {
                        {
                            arr_79 [i_22] [i_22] [0LL] = arr_10 [i_22];
                            var_36 -= ((/* implicit */unsigned char) (signed char)126);
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) -736106294)) ? (14254340698741621618ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)126)))));
                        }
                    } 
                } 
            } 
            var_38 *= ((/* implicit */unsigned long long int) arr_25 [i_13]);
            /* LoopNest 2 */
            for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
            {
                for (unsigned short i_27 = 0; i_27 < 12; i_27 += 4) 
                {
                    {
                        var_39 = (i_22 % 2 == 0) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_27]))) > (200594346U))) ? (((((((/* implicit */int) arr_74 [i_22] [i_26] [6ULL])) + (2147483647))) >> (((arr_45 [i_22] [i_22]) - (7132324132410082529ULL))))) : (((/* implicit */int) (signed char)78)))) : (((((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_27]))) > (200594346U))) ? (((((((((/* implicit */int) arr_74 [i_22] [i_26] [6ULL])) - (2147483647))) + (2147483647))) >> (((((arr_45 [i_22] [i_22]) - (7132324132410082529ULL))) - (330243688230987680ULL))))) : (((/* implicit */int) (signed char)78))));
                        arr_86 [i_13] [i_22] [i_22] [10] = ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_22] [i_22]))) ? (var_3) : (((/* implicit */int) arr_56 [(signed char)7] [i_22] [i_22] [(signed char)7])));
                    }
                } 
            } 
        }
    }
    for (short i_28 = 1; i_28 < 7; i_28 += 4) 
    {
        var_40 ^= (~(((4192403374967929983ULL) * (((/* implicit */unsigned long long int) 2794307599U)))));
        var_41 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_77 [i_28 - 1] [8ULL] [4] [(short)7] [i_28 - 1]))))) % (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_84 [(unsigned char)10])) ? (((/* implicit */int) (short)8670)) : (((/* implicit */int) arr_31 [(short)18] [(unsigned short)20] [18ULL] [18ULL] [(short)16] [i_28 - 1]))))))));
    }
}
