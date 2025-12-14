/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133097
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
    var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((signed char) (unsigned short)63918))) / (var_9))) ^ (((((/* implicit */int) (!(var_8)))) * (((/* implicit */int) var_6))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0]))));
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 23; i_1 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (unsigned short)1617))));
                var_15 ^= ((int) arr_3 [i_1 - 1] [i_1 + 1]);
                arr_9 [i_0] [i_1 + 1] [i_2] |= ((/* implicit */signed char) ((int) arr_4 [i_1 - 2] [i_2]));
            }
            arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)1630))))) ? (((/* implicit */int) (unsigned short)63918)) : (((/* implicit */int) arr_5 [i_1 - 3]))));
            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)63932)) ? (arr_3 [i_1 - 2] [i_1 - 3]) : (((/* implicit */int) (_Bool)1)))))));
            arr_11 [i_1] = ((/* implicit */_Bool) 3800875449U);
        }
        for (signed char i_3 = 3; i_3 < 23; i_3 += 4) /* same iter space */
        {
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 - 2] [i_3 - 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
            {
                arr_19 [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)0))));
                /* LoopSeq 1 */
                for (int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)1621)))) ^ (11172650243972759081ULL)));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_3 - 1] [i_3 - 3])) ? (arr_15 [i_3 - 1] [i_3 - 3]) : (494091864U)));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)102)) ? (((/* implicit */int) var_7)) : (-232846016)))) / (var_1))))));
                    }
                }
                arr_26 [i_4] [3] [i_4] [i_4] = (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-27)))));
            }
            for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    arr_33 [i_8] [i_8] = ((/* implicit */unsigned int) 14987395272991357607ULL);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) /* same iter space */
                    {
                        arr_37 [i_0] [i_8] [i_3] [i_0] |= ((/* implicit */_Bool) ((((494091840U) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)24))))) >> (((((/* implicit */int) var_5)) - (71)))));
                        var_20 = ((/* implicit */unsigned long long int) ((unsigned short) var_0));
                        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)46688))));
                        var_22 = ((/* implicit */unsigned short) arr_13 [(unsigned char)7] [i_3 + 1] [i_3]);
                        arr_38 [(_Bool)1] [i_8] [(_Bool)1] [i_8] [i_8] [1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned short)63918))))) ? (((((/* implicit */_Bool) (unsigned char)28)) ? (0ULL) : (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) 1006632960U))));
                    }
                    for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
                    {
                        var_23 *= ((/* implicit */signed char) var_2);
                        arr_42 [i_0] [i_3 - 3] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) 1006632949U);
                        var_24 = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-18)) % (((((/* implicit */int) (signed char)-71)) + (((/* implicit */int) arr_8 [i_0]))))));
                    }
                }
                for (signed char i_11 = 2; i_11 < 23; i_11 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (unsigned short)10))));
                    arr_47 [i_0] [i_0] [i_0] [i_0] [(unsigned char)17] [(unsigned char)17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((unsigned short) 32640U))) : (((/* implicit */int) arr_25 [23U] [i_3 + 1] [i_3 + 1]))));
                    var_26 = ((/* implicit */signed char) ((var_6) ? (var_4) : (((/* implicit */int) arr_41 [i_0] [i_0] [i_7] [i_3] [i_3 + 1]))));
                }
                for (unsigned short i_12 = 1; i_12 < 23; i_12 += 2) 
                {
                    var_27 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) arr_2 [i_7])))) / (((/* implicit */int) arr_23 [i_0] [i_12 + 1] [i_3 + 1] [i_0]))));
                    arr_52 [i_7] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_21 [i_0] [i_3] [i_7] [i_7]))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_55 [i_13] [i_13] [i_7] [i_3 + 1] [i_3 + 1] [i_0] = ((/* implicit */unsigned short) ((_Bool) var_10));
                    arr_56 [i_13] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)17404)) ? (((/* implicit */int) arr_24 [i_0] [i_3 + 1] [i_7] [i_7] [i_3 - 2] [i_7])) : (((/* implicit */int) (_Bool)1))));
                    /* LoopSeq 1 */
                    for (int i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        var_28 = ((/* implicit */unsigned short) ((unsigned int) var_11));
                        arr_59 [i_0] [i_0] [i_7] [i_13] [i_14] = ((/* implicit */unsigned char) ((signed char) arr_58 [i_0] [i_3 - 3] [i_3] [i_3 + 1] [i_3 - 3]));
                        var_29 = ((/* implicit */unsigned short) (signed char)0);
                        var_30 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3 - 3] [i_3 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))));
                        arr_60 [(unsigned char)5] [i_3 - 2] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) arr_28 [i_3 - 1] [i_7] [i_14]);
                    }
                    arr_61 [i_0] [i_0] [(signed char)5] [i_0] = ((/* implicit */int) arr_23 [i_0] [i_3] [i_7] [i_13]);
                }
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    arr_65 [i_0] [i_3] [i_7] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -70209260)) ? (((/* implicit */int) arr_25 [i_0] [i_3] [i_0])) : (((/* implicit */int) arr_24 [20U] [i_3 - 3] [(unsigned short)14] [i_3] [i_3] [i_3 - 2]))));
                    arr_66 [i_0] [i_0] [i_0] = ((signed char) ((int) arr_22 [i_0] [i_0]));
                    var_31 -= ((/* implicit */int) (signed char)31);
                }
            }
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) /* same iter space */
            {
                arr_69 [i_0] [i_0] [i_0] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63929)) ? (((/* implicit */int) (signed char)-71)) : (((/* implicit */int) (signed char)73))))) || (((/* implicit */_Bool) (unsigned char)80))));
                arr_70 [i_16] [i_3] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)91)) : (128855959)))) ? (arr_15 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_23 [i_16] [i_3] [12ULL] [i_16]))))));
            }
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 3605369697164809444ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3840367612U)))))));
            arr_71 [i_0] = arr_41 [i_0] [i_0] [(signed char)14] [i_3] [i_3 - 1];
        }
        for (signed char i_17 = 3; i_17 < 23; i_17 += 4) /* same iter space */
        {
            arr_74 [i_17] [i_17 - 2] = ((/* implicit */unsigned int) (signed char)0);
            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? ((~(((/* implicit */int) (signed char)63)))) : ((~(((/* implicit */int) var_0)))))))));
        }
    }
    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                {
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (+(arr_44 [i_18] [i_18] [i_19] [i_20] [i_19]))))));
                    arr_84 [i_18] [i_18] [i_19] [i_18] = ((/* implicit */_Bool) (-(((int) arr_21 [(short)10] [i_19] [i_18] [(short)10]))));
                    /* LoopNest 2 */
                    for (unsigned int i_21 = 0; i_21 < 23; i_21 += 2) 
                    {
                        for (long long int i_22 = 0; i_22 < 23; i_22 += 2) 
                        {
                            {
                                arr_89 [i_18] [i_18] [i_20] [i_18] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (arr_81 [i_22]) : (((/* implicit */unsigned long long int) -200725093))));
                                arr_90 [18] [18] [i_20] [i_21] [i_22] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)251)) ? (3173669803U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176)))));
                                arr_91 [i_22] [i_19] [i_20] [i_21] [i_22] [i_18] [i_18] = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)63))));
                            }
                        } 
                    } 
                    arr_92 [i_18] [(signed char)8] [i_20] = ((/* implicit */unsigned long long int) arr_45 [i_18] [i_18] [i_18] [i_18] [i_18]);
                }
            } 
        } 
        var_36 = ((/* implicit */unsigned char) (signed char)45);
    }
}
