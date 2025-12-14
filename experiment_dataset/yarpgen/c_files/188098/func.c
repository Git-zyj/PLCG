/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188098
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 *= ((/* implicit */signed char) ((_Bool) ((long long int) arr_1 [i_0 - 1])));
        var_14 ^= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (-(1072925875636830923ULL)))))) < (arr_1 [(_Bool)1])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */long long int) arr_2 [i_1])) < (min((-4625158889962361142LL), (((/* implicit */long long int) arr_2 [i_1]))))));
        var_16 = ((/* implicit */short) max((((_Bool) arr_3 [i_1])), (((arr_3 [i_1]) != (arr_3 [i_1])))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) -4625158889962361142LL))));
            var_18 = ((/* implicit */int) ((unsigned short) max((((/* implicit */int) var_2)), (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_8 [(unsigned char)6] [i_2])) : (((/* implicit */int) arr_8 [12U] [i_2])))))));
            arr_9 [10U] &= arr_4 [i_2];
            arr_10 [i_2] = ((/* implicit */_Bool) arr_7 [i_2]);
            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */long long int) max((max((((/* implicit */int) arr_7 [(short)20])), (arr_6 [i_1] [i_1]))), (arr_2 [i_1])))) + (max((((/* implicit */long long int) ((((/* implicit */unsigned int) -555232355)) - (393216U)))), (((long long int) -555232355)))))))));
        }
        for (int i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            arr_15 [i_1] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [9LL])) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))) & (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (arr_13 [i_1])))))) ? (((/* implicit */int) min((var_7), (arr_12 [i_1] [i_3] [i_1])))) : (((/* implicit */int) arr_11 [(_Bool)1] [i_3]))));
            arr_16 [i_1] [i_3] [6U] = ((/* implicit */signed char) arr_12 [i_1] [i_3] [i_3]);
            var_20 = ((/* implicit */long long int) var_9);
        }
        /* vectorizable */
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            arr_19 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(short)15] [(short)15] [(short)15])) && (((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))));
            var_21 = ((/* implicit */unsigned long long int) -555232365);
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_25 [i_1] [i_6] = ((/* implicit */int) arr_23 [i_1] [i_4] [i_4] [(_Bool)0] [i_6] [i_4]);
                    arr_26 [i_1] [i_6] [i_5] [i_6] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_24 [i_4] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10410))) : (arr_14 [i_6] [i_4] [i_5]))) == (((/* implicit */unsigned long long int) arr_22 [i_1] [i_4]))));
                }
                var_22 = ((/* implicit */short) ((393216U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))));
                var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [6] [i_5]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [(_Bool)1] [i_5]))) + (var_5))))))));
            }
            for (short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                var_24 = ((/* implicit */unsigned char) ((short) ((_Bool) arr_13 [16])));
                var_25 = ((/* implicit */int) min((var_25), (((((/* implicit */_Bool) arr_7 [i_7])) ? (((/* implicit */int) arr_21 [i_4])) : (((/* implicit */int) arr_17 [i_4]))))));
                arr_29 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_24 [(_Bool)1] [i_4]);
                arr_30 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_6 [i_7] [i_4]);
                /* LoopSeq 2 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 1; i_9 < 20; i_9 += 4) 
                    {
                        arr_38 [i_8] [i_4] [i_7] [i_8] [i_9] = ((/* implicit */short) var_2);
                        var_26 -= ((/* implicit */short) ((_Bool) (+(((/* implicit */int) var_11)))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_41 [i_1] [i_4] [(_Bool)1] [(_Bool)1] [i_10] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) 17373818198072720671ULL))) <= (((((/* implicit */int) arr_37 [i_1] [i_4] [i_7] [i_8] [i_10])) % (187245570)))));
                        var_27 = ((/* implicit */signed char) ((unsigned int) arr_28 [i_1] [i_4]));
                        var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_1] [i_4])) ? (((/* implicit */int) arr_27 [i_1])) : (((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */int) (short)-3273)) : (((/* implicit */int) arr_17 [0LL]))))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_1]))))) ? (((/* implicit */int) arr_35 [i_1] [i_1] [i_7] [i_8] [i_8] [i_10])) : (arr_6 [i_4] [i_7]))))));
                    }
                    arr_42 [i_8] [(unsigned short)8] [(short)6] [i_4] [i_1] [i_1] = arr_31 [i_1] [i_4] [i_7] [i_8];
                    var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((arr_8 [i_7] [i_8]) ? (((((/* implicit */_Bool) arr_32 [19LL] [i_7] [i_4] [(short)6])) ? (arr_13 [2LL]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : ((~(var_6))))))));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_31 *= ((((/* implicit */int) arr_44 [i_1] [i_1] [i_7] [7] [i_7])) < (((/* implicit */int) arr_7 [i_7])));
                    arr_47 [i_1] [i_4] [i_7] [i_7] [i_7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_4] [i_1])) ? (-1425843771) : (((/* implicit */int) arr_27 [i_1]))));
                    arr_48 [i_11] [i_11] [i_7] [(unsigned short)15] [i_11] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) arr_8 [i_11] [i_11]));
                    var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [(unsigned char)11] [i_11])) ? (1610612736) : (((/* implicit */int) var_2))))) <= (arr_3 [i_4])));
                }
            }
            var_33 -= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_1] [i_4]))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_17 [6U])) + (2147483647))) >> (((arr_14 [i_1] [i_1] [i_4]) - (6255303412013694887ULL))))))));
            var_34 += ((/* implicit */int) ((((/* implicit */_Bool) ((short) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4] [i_4]))) : (arr_5 [i_1] [(signed char)4] [i_1])));
        }
        var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-3273))));
    }
    for (unsigned short i_12 = 3; i_12 < 10; i_12 += 1) 
    {
        arr_52 [i_12] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12492)) ? (-4625158889962361142LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_12] [(short)2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) & (((17373818198072720693ULL) >> (((((/* implicit */int) var_4)) + (11054)))))))));
        var_36 = ((/* implicit */short) max((((/* implicit */long long int) ((_Bool) 1072925875636830923ULL))), ((+(arr_43 [i_12 - 1] [i_12 - 1] [i_12] [i_12 - 3])))));
    }
    for (short i_13 = 1; i_13 < 9; i_13 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            for (int i_15 = 0; i_15 < 10; i_15 += 4) 
            {
                {
                    arr_60 [i_13] [i_14] [i_14] = ((/* implicit */unsigned char) ((min(((!(((/* implicit */_Bool) var_9)))), (((var_6) != (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))))))) ? (((arr_32 [7U] [(short)12] [i_14] [i_13]) << (((/* implicit */int) arr_35 [i_13] [i_14] [i_13] [i_13 - 1] [i_13] [i_14])))) : (((/* implicit */int) var_12))));
                    arr_61 [i_13] [6] [i_13] [6] = ((/* implicit */short) arr_27 [i_13 - 1]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    for (long long int i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */short) ((((int) arr_12 [i_13] [i_17] [i_18])) <= (((/* implicit */int) ((short) max(((signed char)3), (((/* implicit */signed char) (_Bool)1))))))));
                            var_38 *= ((/* implicit */short) ((((((/* implicit */int) arr_24 [i_13 - 1] [i_16 + 1])) >> (((((/* implicit */int) arr_24 [i_13 - 1] [i_16 + 1])) - (6576))))) ^ (((((/* implicit */int) ((signed char) arr_27 [i_17]))) + (((/* implicit */int) ((short) arr_54 [i_19])))))));
                        }
                    } 
                } 
                arr_72 [i_13] [i_16] [i_17] [i_13] = ((((/* implicit */_Bool) 555232355)) ? (((/* implicit */long long int) ((int) arr_33 [i_17] [i_16] [i_17] [i_16] [i_16] [(short)1]))) : (((((4625158889962361142LL) | (((/* implicit */long long int) arr_32 [i_13] [i_16] [i_17] [i_17])))) >> (((max((arr_45 [i_13] [i_13] [i_17] [i_13 + 1] [i_17] [12]), (1228490039))) - (1228490034))))));
            }
            var_39 -= ((/* implicit */unsigned char) (+(4625158889962361129LL)));
        }
    }
    var_40 = ((/* implicit */unsigned int) var_9);
    var_41 ^= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) 4625158889962361129LL)) ? (-555232355) : (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-3273)))))) ^ (((/* implicit */int) ((signed char) max((-4625158889962361117LL), (((/* implicit */long long int) var_2))))))));
}
