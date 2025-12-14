/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119800
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
    var_18 = var_8;
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((arr_1 [i_0]), (arr_1 [i_0])))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), (var_6)))), (11904179829503272598ULL)))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_2 = 4; i_2 < 13; i_2 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)2592))) == (var_10)))))));
                arr_7 [i_0] [0LL] [i_0] [i_0] |= ((/* implicit */unsigned int) ((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 - 3])))));
            }
            for (int i_3 = 4; i_3 < 13; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (int i_4 = 0; i_4 < 15; i_4 += 2) 
                {
                    arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) max((6542564244206279007ULL), (min((((/* implicit */unsigned long long int) (_Bool)1)), (6542564244206279024ULL)))));
                    var_20 |= ((/* implicit */unsigned char) var_0);
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 4; i_5 < 14; i_5 += 1) 
                    {
                        var_21 *= ((/* implicit */unsigned short) min(((-(var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5 - 4] [i_4])) ? (arr_4 [i_5 + 1] [i_4]) : (arr_4 [i_5 - 1] [i_4]))))));
                        arr_16 [i_0] [i_1] [(signed char)4] [i_1] [i_0] [i_3 - 2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) 9U)) != (11904179829503272597ULL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */short) ((long long int) (unsigned short)65520));
                        var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-8)) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) -5))));
                        var_24 = ((((/* implicit */_Bool) arr_14 [i_1] [i_3 - 2] [i_1] [i_3 - 1] [i_3 - 3])) ? (var_12) : (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
                    }
                }
                for (int i_7 = 1; i_7 < 14; i_7 += 3) 
                {
                    arr_22 [i_0] [i_0] [i_0] [(_Bool)1] [(signed char)14] |= ((/* implicit */short) var_17);
                    var_25 = ((/* implicit */_Bool) (+(min((((11904179829503272617ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))), (((/* implicit */unsigned long long int) (+(var_13))))))));
                }
                var_26 = ((/* implicit */unsigned int) ((signed char) ((_Bool) arr_18 [i_0] [i_3 - 2] [13ULL] [i_0] [i_3 - 2] [i_0])));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    for (short i_9 = 4; i_9 < 14; i_9 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */long long int) min(((+(((/* implicit */int) ((unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90))) - (var_1)))) ? (((/* implicit */int) arr_11 [i_0] [i_0])) : (((/* implicit */int) var_4))))));
                            var_28 += ((/* implicit */short) min(((~(var_15))), (((/* implicit */long long int) (~(var_6))))));
                        }
                    } 
                } 
                arr_27 [i_0] = ((/* implicit */short) ((_Bool) min((arr_24 [i_3 - 1] [i_3 - 2]), (var_4))));
            }
            for (int i_10 = 4; i_10 < 13; i_10 += 1) /* same iter space */
            {
                arr_30 [i_1] [i_0] = ((/* implicit */int) (signed char)83);
                arr_31 [i_0] [i_0] [i_0] = max(((unsigned short)2), (((/* implicit */unsigned short) (signed char)-108)));
                var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((((/* implicit */_Bool) (unsigned short)46786)) || ((!(((/* implicit */_Bool) var_4))))))));
                arr_32 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1279170001)) ? (min((((/* implicit */long long int) var_6)), ((+(252LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 12ULL))))));
            }
            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
        }
        var_31 -= ((/* implicit */unsigned short) ((signed char) (short)-26116));
        var_32 = ((/* implicit */int) ((((/* implicit */long long int) ((int) min((var_1), (((/* implicit */unsigned long long int) (signed char)-109)))))) == (max((((/* implicit */long long int) var_14)), (var_10)))));
        var_33 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_11))))) : (((((/* implicit */long long int) var_12)) | (var_15)))))));
    }
    for (int i_11 = 0; i_11 < 15; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 15; i_12 += 4) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 1; i_14 < 14; i_14 += 3) 
                    {
                        var_34 = (!(((/* implicit */_Bool) ((arr_14 [i_14 + 1] [i_14 + 1] [i_14 - 1] [i_14 + 1] [i_14 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_11)))))))));
                        var_35 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) 13572389869893901769ULL)) ? (((/* implicit */int) var_11)) : (-23))) : (((/* implicit */int) var_11))));
                        var_36 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_8)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        for (signed char i_16 = 1; i_16 < 13; i_16 += 2) 
                        {
                            {
                                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(1006268481U)))))))));
                                var_38 = ((_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_45 [i_16 + 2] [i_16 + 1] [i_16] [(unsigned char)0] [i_16 + 1]) : (((/* implicit */unsigned long long int) var_10))));
                                arr_46 [(_Bool)1] [i_12] [i_11] = ((unsigned long long int) (unsigned short)18480);
                            }
                        } 
                    } 
                    arr_47 [i_13] [i_13] [(short)4] |= ((/* implicit */unsigned short) (-(min((min((((/* implicit */unsigned long long int) 2219400561U)), (6542564244206279007ULL))), (((/* implicit */unsigned long long int) var_0))))));
                    /* LoopSeq 3 */
                    for (long long int i_17 = 0; i_17 < 15; i_17 += 2) 
                    {
                        var_39 -= ((/* implicit */short) (((+(((((/* implicit */_Bool) var_15)) ? (var_12) : (var_12))))) ^ (((/* implicit */int) arr_40 [i_17] [i_12]))));
                        /* LoopSeq 2 */
                        for (unsigned int i_18 = 3; i_18 < 14; i_18 += 2) 
                        {
                            arr_54 [i_11] [i_12] [i_13] [i_11] [i_17] [i_11] = ((/* implicit */short) (_Bool)1);
                            arr_55 [2] [i_11] = ((/* implicit */signed char) var_10);
                            arr_56 [i_11] = ((/* implicit */short) ((long long int) var_17));
                        }
                        for (int i_19 = 0; i_19 < 15; i_19 += 2) 
                        {
                            arr_61 [i_11] = min((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (signed char)99))) || (((/* implicit */_Bool) var_5))))), (max((((/* implicit */int) var_0)), (arr_59 [i_11] [i_11] [i_11] [i_11] [i_11]))));
                            var_40 = ((/* implicit */int) min((var_40), ((~(((/* implicit */int) (unsigned short)14728))))));
                        }
                        var_41 = max((min((((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-14)))), (max((((/* implicit */long long int) var_12)), (var_10))))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)7))))));
                    }
                    /* vectorizable */
                    for (long long int i_20 = 0; i_20 < 15; i_20 += 2) 
                    {
                        var_42 = ((/* implicit */long long int) ((unsigned short) var_0));
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)95))))) : (((((/* implicit */_Bool) 939602858696054638ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13811))) : (11904179829503272595ULL))))))));
                    }
                    for (int i_21 = 0; i_21 < 15; i_21 += 2) 
                    {
                        arr_67 [i_11] [i_11] [i_13] [i_12] [i_13] = ((/* implicit */long long int) var_6);
                        var_44 = ((/* implicit */signed char) var_9);
                        var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_13] [i_13] [i_13])))))) ? (min((var_10), (((/* implicit */long long int) arr_1 [i_21])))) : ((+(var_10))))))));
                        arr_68 [i_11] [i_11] [11U] [i_11] [2] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (short)-26113)), (7))), (((/* implicit */int) ((signed char) ((var_1) - (4874354203815649855ULL)))))));
                    }
                }
            } 
        } 
        var_46 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)4)), ((unsigned char)1)));
    }
}
