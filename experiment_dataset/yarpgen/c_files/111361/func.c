/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111361
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
    var_11 = ((/* implicit */unsigned short) (_Bool)1);
    var_12 = ((/* implicit */unsigned short) (+(min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9)))))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_13 = ((((/* implicit */int) var_10)) <= (min((((/* implicit */int) ((signed char) arr_0 [i_0]))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)57)))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [(unsigned short)1] [(unsigned short)3])) ? (min((((/* implicit */long long int) var_6)), (arr_6 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)55947))))));
                    var_14 = ((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (short)16046))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)47746))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15619))) : (min((((/* implicit */long long int) (unsigned char)41)), (arr_6 [i_0] [(_Bool)1] [i_1] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)57))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)57))))) : (((/* implicit */int) min(((unsigned short)2617), (((/* implicit */unsigned short) arr_5 [i_2] [i_3] [i_2])))))));
                                var_16 *= ((/* implicit */_Bool) ((var_3) ? (((long long int) var_10)) : ((~((+(var_4)))))));
                                var_17 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) == (((/* implicit */int) var_2)))) && (((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) && (((/* implicit */_Bool) ((unsigned char) 1219930217)))));
                        arr_16 [i_0] [i_1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((long long int) arr_2 [i_1] [i_1] [i_5]));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 12; i_6 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned short) ((int) arr_5 [i_6] [i_6] [i_6]));
        var_20 = ((/* implicit */short) ((int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-21352)))));
        arr_19 [i_6] [i_6] = ((/* implicit */unsigned short) arr_14 [i_6] [i_6] [i_6] [i_6]);
    }
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 4) /* same iter space */
    {
        arr_22 [i_7] [i_7] |= ((/* implicit */unsigned char) var_7);
        /* LoopSeq 2 */
        for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
        {
            arr_25 [i_7] [4] [i_7] = ((/* implicit */signed char) min((((unsigned long long int) (unsigned short)9568)), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_18 [i_7 + 1]))))) | (arr_3 [i_7])))));
            arr_26 [i_7] &= ((/* implicit */unsigned short) (((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)30)) && (((/* implicit */_Bool) (unsigned char)12))))))) % (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) arr_21 [i_7])) : (14098196681660871983ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) % (((/* implicit */int) arr_12 [i_8] [i_7] [i_7] [i_8] [(short)2] [i_8]))))))))));
        }
        for (short i_9 = 0; i_9 < 11; i_9 += 2) 
        {
            var_21 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)68))))) <= (((/* implicit */int) var_6)))));
            arr_31 [i_7] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) (unsigned char)240)) ? (8010876825030273004LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
        }
    }
    for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            arr_37 [i_10] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_1)) == (((/* implicit */int) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)42)), ((unsigned short)7729))))) : (arr_6 [i_10 + 2] [i_10] [i_10 + 1] [6U])))) ? (((/* implicit */long long int) (+(arr_32 [i_10 - 1] [i_11])))) : ((+(min((((/* implicit */long long int) (_Bool)0)), (arr_23 [(unsigned short)10] [i_11] [i_11])))))));
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                arr_40 [(_Bool)1] [(_Bool)1] [i_10] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned short)51897)) ? (((/* implicit */int) arr_18 [i_10 - 1])) : (((/* implicit */int) ((signed char) arr_20 [i_11])))))));
                var_22 = ((/* implicit */unsigned long long int) (_Bool)1);
            }
            var_23 = (unsigned short)51243;
            /* LoopSeq 1 */
            for (long long int i_13 = 1; i_13 < 8; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) 
                {
                    for (long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                    {
                        {
                            arr_49 [i_13 - 1] [(_Bool)1] [i_10] [i_13 + 1] [i_13] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_10 + 2])) ? (((/* implicit */int) arr_0 [i_10 + 2])) : (((/* implicit */int) arr_0 [i_10 - 1]))))), (((((/* implicit */_Bool) min(((unsigned short)24619), (((/* implicit */unsigned short) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)48)) == (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_32 [i_11] [i_11])))))));
                            arr_50 [i_10] [i_10] [i_10 + 2] [i_10] [3ULL] = ((/* implicit */_Bool) ((((/* implicit */long long int) min((464047100U), (((/* implicit */unsigned int) (unsigned char)196))))) & (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (var_7)))))));
                            var_24 -= ((/* implicit */unsigned short) (-(((7198570123721746807ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_51 [i_10 + 2] [9] [i_10] [9LL] [i_14] [i_14] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-20)) >= (((/* implicit */int) var_5))))) % (((/* implicit */int) arr_9 [i_10] [10LL] [i_11]))))) ? ((-(((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8187882683987060210LL)) ? (((/* implicit */int) (short)970)) : (((/* implicit */int) (unsigned short)4487))))) ? (((/* implicit */int) (unsigned short)2617)) : (((arr_2 [i_10] [i_14] [i_14]) + (((/* implicit */int) arr_41 [i_10] [i_10 - 1] [i_10]))))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) ((unsigned int) (((!(((/* implicit */_Bool) (unsigned short)23090)))) && (((((/* implicit */_Bool) arr_32 [3ULL] [3ULL])) || (((/* implicit */_Bool) 4808687982811708378ULL)))))));
                var_26 = ((/* implicit */long long int) min(((-(((/* implicit */int) (unsigned char)198)))), ((~(((/* implicit */int) (unsigned short)22139))))));
            }
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 11; i_16 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 1; i_18 < 9; i_18 += 4) 
                {
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_10 + 2] [i_10 + 2] [i_10] [i_18 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                            arr_62 [i_17] [i_17] [i_17] [i_17] [i_17] |= ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_3)))));
                            arr_63 [i_10] [i_10] [i_10] [i_18] [i_19] = ((/* implicit */long long int) ((((/* implicit */int) arr_60 [i_10] [i_16] [i_17] [i_18] [i_10])) > (((/* implicit */int) (signed char)63))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    {
                        var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_1))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47052)) ? (arr_6 [i_10] [i_10] [i_10 + 1] [i_10 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2617)))));
                        var_30 *= ((/* implicit */_Bool) ((short) (_Bool)1));
                        var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_20])) && (((/* implicit */_Bool) (signed char)30))));
                    }
                } 
            } 
            var_32 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)90)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10 + 2]))) : (var_8)));
            arr_68 [i_16] [i_16] [i_16] |= ((/* implicit */short) (unsigned char)57);
        }
        arr_69 [i_10] [9LL] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_21 [i_10 + 2])) ? (var_4) : (var_4))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_21 [i_10 + 2]))))));
    }
    /* LoopNest 2 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        for (long long int i_23 = 0; i_23 < 15; i_23 += 4) 
        {
            {
                var_33 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) (unsigned short)33221)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_76 [i_22] [i_22]))))))), (((/* implicit */long long int) ((((/* implicit */int) arr_76 [i_22] [i_22])) | (((/* implicit */int) arr_76 [i_22] [i_22])))))));
                /* LoopNest 3 */
                for (unsigned short i_24 = 0; i_24 < 15; i_24 += 2) 
                {
                    for (signed char i_25 = 2; i_25 < 14; i_25 += 1) 
                    {
                        for (long long int i_26 = 0; i_26 < 15; i_26 += 3) 
                        {
                            {
                                var_34 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_84 [(unsigned short)0] [(signed char)12] [(signed char)5] [i_25 - 1] [i_25 - 2] [i_25 - 1] [i_25])) ? (((/* implicit */long long int) 1575198181)) : (var_7)))) ? (((((/* implicit */_Bool) arr_84 [(unsigned short)0] [i_25] [(unsigned short)0] [i_25 - 2] [i_25] [i_25] [(_Bool)1])) ? (((/* implicit */int) arr_79 [i_25] [(_Bool)1] [i_25] [i_25 + 1] [i_25] [i_25])) : (((/* implicit */int) arr_80 [i_24] [i_25] [i_25] [i_25 + 1])))) : (((((/* implicit */_Bool) arr_79 [i_24] [5LL] [i_25] [i_25 - 1] [i_26] [i_26])) ? (((/* implicit */int) arr_84 [i_24] [i_24] [14] [i_25 + 1] [i_24] [5LL] [(unsigned short)8])) : (((/* implicit */int) arr_79 [i_22] [i_22] [i_25 - 2] [i_25 - 2] [i_26] [i_26]))))));
                                arr_86 [(_Bool)1] [(_Bool)1] [i_24] [i_24] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_72 [i_26])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_8))))) ? (((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_72 [i_25])))) | (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-27)))))) : (((((((/* implicit */int) ((signed char) 15432638069315356838ULL))) + (2147483647))) << (((((((((/* implicit */_Bool) arr_70 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_79 [i_22] [i_23] [(_Bool)1] [i_25 + 1] [i_23] [i_23]))) : (var_4))) + (101LL))) - (12LL)))))));
                                var_35 = ((/* implicit */_Bool) ((((/* implicit */int) min((arr_84 [i_25 - 1] [i_25 - 2] [i_25 + 1] [i_25 - 2] [i_25 + 1] [i_25 - 1] [i_25 - 1]), (arr_84 [i_25 - 2] [i_25 - 2] [i_25 - 2] [i_25 - 2] [i_25 + 1] [i_25 - 1] [i_25 + 1])))) % (((/* implicit */int) min((arr_83 [i_25] [i_25 + 1] [(_Bool)1] [i_25] [i_25 - 2] [i_25 + 1] [i_25 + 1]), (((/* implicit */signed char) var_3)))))));
                                arr_87 [(unsigned char)8] [i_23] [i_24] [i_23] [i_24] [i_26] = ((/* implicit */_Bool) ((13638056090897843248ULL) / (((/* implicit */unsigned long long int) 4278046309U))));
                                var_36 |= ((/* implicit */signed char) ((((/* implicit */_Bool) min((11839155233145396003ULL), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42232))) + (2257456409123716438ULL)))))) ? (min(((+(((/* implicit */int) var_0)))), (((/* implicit */int) min(((unsigned short)53473), (((/* implicit */unsigned short) var_9))))))) : (((/* implicit */int) (signed char)-109))));
                            }
                        } 
                    } 
                } 
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) ((unsigned short) ((((_Bool) var_1)) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_2))))))))));
            }
        } 
    } 
}
