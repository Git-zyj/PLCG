/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17244
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
    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) var_9))));
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_7)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */_Bool) arr_1 [i_1]);
                    var_16 = ((1801509459817398507LL) >= (((/* implicit */long long int) 3768855828U)));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) 4294967295U)) : ((+(10286055328107946988ULL)))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)45103)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-13033))) : (1056964608U)))) == (((arr_1 [(unsigned char)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)123))))))))));
        var_19 = (~(var_3));
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [(unsigned char)17] [i_0]))));
    }
    var_21 = ((/* implicit */unsigned long long int) var_0);
    /* LoopSeq 1 */
    for (unsigned char i_3 = 2; i_3 < 9; i_3 += 2) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            arr_13 [10ULL] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-3995025068996815734LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_3] [i_3]))))))));
            /* LoopSeq 3 */
            for (unsigned char i_5 = 2; i_5 < 10; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_6 = 3; i_6 < 8; i_6 += 2) 
                {
                    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        {
                            arr_22 [i_7 + 1] [i_6] [i_5 - 2] [i_5 - 2] [i_4 + 1] [i_6] [i_3] = ((/* implicit */unsigned long long int) (~(1U)));
                            arr_23 [i_3 - 2] [i_6] [i_6] [i_3] [i_3 + 2] [i_6] = ((/* implicit */unsigned char) (!(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))) == (arr_10 [i_3 + 1])))));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */signed char) arr_8 [i_5 + 1] [i_3 - 2]);
                arr_24 [i_3] [i_4 + 1] [i_5 + 1] = ((/* implicit */signed char) ((arr_1 [i_3 - 2]) - (((/* implicit */unsigned long long int) arr_18 [i_3 + 1] [i_4 + 1] [i_4 + 1] [i_5]))));
            }
            for (short i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    for (unsigned int i_10 = 1; i_10 < 7; i_10 += 4) 
                    {
                        {
                            var_23 = ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)3)) % (((/* implicit */int) var_12))))) == ((~(6170046166275951144LL))));
                            arr_36 [i_10] [i_10 + 2] [i_10] [i_10] [i_10 + 4] [(_Bool)1] = ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)137))) == (arr_19 [i_10]));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3995025068996815732LL)) ? (((/* implicit */int) arr_30 [i_10 + 1] [i_4 + 1])) : (((/* implicit */int) arr_12 [i_10 + 3]))));
                            var_25 = ((/* implicit */unsigned char) var_7);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 9; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 7; i_12 += 2) 
                    {
                        {
                            var_26 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_3 - 1] [i_3 - 2] [i_3 - 2] [i_11 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4319)))))) : (arr_18 [i_8] [i_3 - 2] [i_8] [i_8])));
                            arr_41 [i_12] [i_11] [i_11] [i_3 + 1] [3] [i_3 + 1] [i_3] = ((/* implicit */unsigned char) arr_16 [i_8]);
                            arr_42 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_3 - 2] [i_3 + 1] [0] [i_3 + 2])) ? ((+(((/* implicit */int) (signed char)-99)))) : (((/* implicit */int) arr_32 [i_11 + 2] [i_12 + 3]))));
                        }
                    } 
                } 
            }
            for (short i_13 = 0; i_13 < 11; i_13 += 2) /* same iter space */
            {
                var_27 -= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_29 [i_3 - 1] [i_3 - 2] [i_3 + 2] [i_3 + 2] [(unsigned char)10]))));
                var_28 = ((/* implicit */unsigned short) ((arr_10 [i_4 + 1]) * (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1])) * (((/* implicit */int) arr_43 [i_3] [i_4] [i_13])))))));
                /* LoopSeq 2 */
                for (short i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    var_29 ^= ((/* implicit */_Bool) arr_48 [(_Bool)1] [i_4 + 1] [9LL] [i_4 + 1]);
                    arr_49 [i_3] [i_4 + 1] [i_14] [i_14] = arr_37 [i_3] [(short)6] [i_3 + 1] [i_3 - 1];
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_16 = 2; i_16 < 9; i_16 += 2) 
                    {
                        var_30 -= ((arr_53 [i_3 - 1] [i_4 + 1] [i_4 + 1] [i_16 + 1]) ? (((/* implicit */int) arr_33 [0U] [i_16 + 2] [i_16 + 2] [i_16 - 1] [0ULL] [0ULL] [0ULL])) : (((/* implicit */int) ((((/* implicit */int) (signed char)25)) == (((/* implicit */int) (signed char)37))))));
                        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) var_5))));
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_4 + 1] [i_15]))) - (var_2))))));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 11; i_17 += 1) 
                    {
                        var_33 *= (~(((/* implicit */int) arr_16 [i_3 + 2])));
                        var_34 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4 + 1] [i_4 + 1] [i_4 + 1]))) - (arr_7 [i_4 + 1] [i_4 + 1] [i_4] [i_3 + 2]));
                        var_35 = ((((/* implicit */_Bool) arr_55 [i_3] [i_3 + 2] [i_4 + 1])) ? (arr_52 [i_15] [i_15] [i_13] [i_4 + 1] [i_15] [i_3 + 2]) : (arr_55 [5LL] [i_3 - 2] [i_4 + 1]));
                        arr_61 [i_3 + 2] [i_3 + 2] [i_15] [i_3] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 7070224364849686283ULL))))) < (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) arr_51 [i_3] [i_3] [i_3] [i_15]))))));
                        arr_62 [(unsigned char)0] [i_15] [i_13] [i_15] [i_17] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_11 [i_15] [i_3])))) % (1801509459817398507LL));
                    }
                    for (signed char i_18 = 1; i_18 < 10; i_18 += 2) 
                    {
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (+(arr_50 [i_3] [i_3] [i_3 + 1] [i_15] [i_4 + 1]))))));
                        arr_67 [i_15] [i_4 + 1] [i_13] [i_4 + 1] [i_4 + 1] = ((/* implicit */signed char) (unsigned char)33);
                        var_37 = ((/* implicit */_Bool) (unsigned short)26801);
                    }
                    var_38 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_56 [i_3 - 2] [(unsigned char)10] [i_13] [(unsigned char)10] [i_13] [i_15] [i_3 - 2])) ? (((/* implicit */int) arr_29 [i_3] [i_3] [i_13] [i_13] [i_3])) : (((/* implicit */int) var_7)))) == (((/* implicit */int) (!((_Bool)0))))));
                    arr_68 [i_3] [i_15] [i_4] [i_13] [2U] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_15] [i_15] [i_13] [i_15] [i_15] [(signed char)8])) ? (arr_52 [i_15] [i_4 + 1] [i_13] [i_13] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3]))))))));
                }
                /* LoopNest 2 */
                for (short i_19 = 4; i_19 < 10; i_19 += 3) 
                {
                    for (short i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        {
                            var_39 = var_12;
                            var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) (~(((/* implicit */int) var_8)))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
            }
        }
        /* vectorizable */
        for (int i_21 = 2; i_21 < 8; i_21 += 4) 
        {
            var_42 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [5U] [i_21 + 2] [i_21 + 2] [i_21] [(unsigned char)2] [i_21 + 2]))) > (var_0)));
            arr_76 [i_3] [i_3 - 2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_3 + 2])) ? (((1801509459817398506LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)205))))) : (((/* implicit */long long int) var_0))));
            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_21 + 2] [i_21 - 1] [i_21 + 1] [0LL])) ? (arr_14 [i_21] [i_21 - 2] [i_21 + 1] [i_21]) : (arr_14 [i_21 - 1] [i_21 - 1] [i_21 - 2] [i_21 - 1])));
            arr_77 [i_3 + 1] [i_3 - 2] [i_3 + 1] = ((/* implicit */unsigned char) arr_1 [i_3 + 1]);
        }
        arr_78 [i_3 - 2] [i_3 + 2] = ((/* implicit */_Bool) var_8);
    }
}
