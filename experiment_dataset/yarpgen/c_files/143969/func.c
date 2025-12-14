/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 143969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=143969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/143969
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((var_3), (((/* implicit */short) arr_0 [i_0]))));
        var_12 = ((/* implicit */short) max(((-(((/* implicit */int) var_7)))), (((((/* implicit */int) min((arr_1 [(_Bool)1]), (((/* implicit */short) (unsigned char)11))))) ^ (((/* implicit */int) arr_0 [16ULL]))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_0 [i_0])), (min((((/* implicit */unsigned short) arr_0 [i_0])), (var_9)))))) ? (((/* implicit */int) min(((unsigned char)31), ((unsigned char)11)))) : (((/* implicit */int) ((_Bool) arr_1 [14LL])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
        {
            arr_10 [(short)16] [i_1] = ((/* implicit */short) (+(((/* implicit */int) var_8))));
            arr_11 [i_1] [(_Bool)1] = ((/* implicit */short) arr_4 [i_1]);
            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned short)12784))))))));
        }
        arr_12 [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [22LL]))) | (min((9831604722236917734ULL), (((/* implicit */unsigned long long int) (unsigned short)12771))))))));
        var_14 = ((/* implicit */short) min(((-(((var_10) ? (((/* implicit */int) (unsigned short)12783)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) min((arr_0 [i_1]), ((_Bool)1))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 2; i_3 < 23; i_3 += 4) 
    {
        for (short i_4 = 2; i_4 < 24; i_4 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) (unsigned char)11))))), (min((((var_6) + (arr_15 [i_3] [(unsigned char)1]))), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [20ULL])) + (((/* implicit */int) arr_1 [i_3])))))))));
                var_16 = ((/* implicit */short) (unsigned short)22121);
                arr_17 [i_3] [(short)20] [(_Bool)1] = var_8;
                arr_18 [11ULL] [i_3] = ((long long int) ((((/* implicit */int) (unsigned char)11)) == (((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) arr_9 [i_3] [i_3] [(unsigned short)18])) : (((/* implicit */int) arr_7 [(short)15]))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                {
                    arr_22 [i_3] [(unsigned short)1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) arr_1 [i_4 - 2])) : ((-(((/* implicit */int) (short)-6658))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), ((unsigned short)65)));
                    arr_23 [i_5] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) & (((((/* implicit */_Bool) (short)-6659)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_3] [i_4]))) : (9030759558380347246LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 1; i_6 < 23; i_6 += 4) 
                    {
                        for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
                        {
                            {
                                arr_31 [8ULL] [24ULL] [17LL] [i_6] [i_5] = ((unsigned long long int) var_1);
                                var_18 *= ((/* implicit */short) ((((arr_19 [i_3]) + (9223372036854775807LL))) >> (((arr_19 [i_4]) + (2676352027010440779LL)))));
                                arr_32 [(short)12] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_4 - 2])) ? (((/* implicit */int) arr_5 [i_3 - 1] [i_4 - 2])) : (((/* implicit */int) arr_5 [i_3 + 2] [i_4 - 2]))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */unsigned long long int) ((arr_26 [(_Bool)1] [i_3 - 1] [(_Bool)1] [i_4 - 2] [i_4 - 1] [i_4]) == (((/* implicit */unsigned long long int) arr_28 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3 + 2] [i_3 + 1]))));
                    arr_35 [(unsigned char)8] = ((/* implicit */long long int) arr_6 [17LL] [(unsigned short)24]);
                    var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_4 + 1] [14ULL] [i_3])) ? (((/* implicit */int) (unsigned short)5451)) : (((/* implicit */int) arr_4 [i_3 - 1]))));
                    var_21 *= ((((/* implicit */_Bool) arr_27 [i_3] [i_4])) || (((/* implicit */_Bool) arr_27 [i_4] [i_8])));
                }
                for (unsigned short i_9 = 0; i_9 < 25; i_9 += 1) /* same iter space */
                {
                    arr_38 [i_3] [1LL] [i_9] [(short)5] = var_11;
                    arr_39 [(_Bool)1] [i_4] [i_9] [(unsigned short)3] = ((/* implicit */long long int) ((_Bool) arr_19 [i_9]));
                }
                for (long long int i_10 = 3; i_10 < 24; i_10 += 2) 
                {
                    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)16714)) - (((/* implicit */int) (short)32240))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) arr_37 [i_10 - 2] [(short)23] [i_10 - 1] [11ULL])) ? (arr_37 [i_10 - 1] [(unsigned short)4] [i_10 - 1] [i_10]) : (arr_37 [i_10 - 1] [i_10] [i_10 - 2] [(unsigned short)8])))));
                    var_23 = ((((/* implicit */long long int) ((/* implicit */int) var_1))) < (arr_33 [20ULL]));
                    arr_44 [(unsigned short)19] [i_4] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)12769);
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (unsigned short i_12 = 0; i_12 < 19; i_12 += 1) 
        {
            {
                arr_50 [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)3840)) ? (((/* implicit */int) arr_45 [i_11])) : (((/* implicit */int) arr_7 [i_11])))))) << (((((/* implicit */int) var_0)) - (51)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_13 = 1; i_13 < 18; i_13 += 2) 
                {
                    var_24 *= (!(((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) var_0)), (arr_29 [(unsigned short)0] [i_12] [(unsigned short)2] [(unsigned short)22] [(unsigned short)0])))))));
                    var_25 = ((((/* implicit */unsigned long long int) arr_19 [i_11])) >= (((((/* implicit */_Bool) (short)-29414)) ? (15029938277488461694ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16693))))));
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((var_11) << (((((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12801))))) - (((/* implicit */int) (unsigned short)65535)))) + (65576))))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((((((-9030759558380347247LL) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_8 [i_11] [(_Bool)1])) - (115))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) var_9)) - (62583)))))))) << (((arr_41 [8ULL]) - (17489537585214500754ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_60 [i_11] [i_11] [i_11] [(unsigned short)16] [i_11] = ((_Bool) (+(((/* implicit */int) ((arr_6 [i_15] [(_Bool)1]) || (((/* implicit */_Bool) (short)-6670)))))));
                                arr_61 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((max((((/* implicit */unsigned char) var_5)), ((unsigned char)108))), (((/* implicit */unsigned char) var_2)))))) % (((((-2963403802031365247LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)12771)) - (12771)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 19; i_17 += 2) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_28 *= ((/* implicit */unsigned long long int) ((long long int) var_11));
                                arr_68 [2LL] [(unsigned short)5] [i_11] [i_17] [i_18] = (!(((/* implicit */_Bool) ((unsigned long long int) (short)6641))));
                                arr_69 [i_11] [i_12] [17ULL] [(unsigned char)14] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_10), (((((/* implicit */_Bool) (unsigned short)50686)) || (((/* implicit */_Bool) 6624454285605691237LL))))))) : ((+(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)12759))))))));
                                var_29 *= ((/* implicit */unsigned long long int) arr_59 [i_11] [i_12] [i_17] [(unsigned char)18] [i_18]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
