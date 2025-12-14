/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167505
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_1 - 2] [i_3] [i_4] = ((/* implicit */unsigned short) ((arr_4 [i_4 + 1] [i_1 + 1] [i_2]) >> (((arr_4 [i_4 + 1] [i_1 - 1] [i_2]) - (484912381U)))));
                                var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_4 + 1]))));
                                arr_14 [i_0] [i_4] [i_2] [i_0] [i_4 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (5325308061583417918ULL)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((unsigned short) ((((/* implicit */int) (unsigned short)38894)) >> (((6256890354338742157ULL) - (6256890354338742147ULL))))));
                    var_21 = ((/* implicit */short) ((unsigned char) arr_7 [i_1 + 1]));
                }
                for (short i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    arr_18 [i_5] [i_1 - 1] [i_5] [i_0] = ((/* implicit */unsigned char) min((arr_12 [i_5] [i_1] [i_1] [i_0] [i_0]), (((short) arr_6 [i_0] [i_1 + 3] [i_1 + 2] [i_5 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned char i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            {
                                arr_25 [i_0] [i_1] [(unsigned char)7] [i_5] [i_6] [i_7] [(short)18] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))) % ((-(((/* implicit */int) arr_6 [i_1] [i_1] [i_1 - 2] [i_5 + 2]))))));
                                arr_26 [i_7] [i_6] [(short)15] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_21 [i_0] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [i_7])))))) - (((/* implicit */int) (((+(((/* implicit */int) var_4)))) > ((-(((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_6] [i_7 + 1])))))))));
                                var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_14))))) & (var_0));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_9 [13ULL] [(short)8] [12ULL] [(short)15]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_8 = 2; i_8 < 16; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            {
                                arr_34 [i_8] [i_8 + 2] [i_5] [i_1 + 3] [i_8] = ((/* implicit */short) arr_30 [i_8] [i_8] [i_5] [i_8]);
                                arr_35 [i_8] [i_8] [i_5] [i_1] [i_1] [i_8] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((short) (unsigned short)53370)))));
                            }
                        } 
                    } 
                    arr_36 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_31 [i_0] [i_5] [i_1 + 3] [i_0] [i_0] [i_0]));
                }
                arr_37 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_13)))))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                arr_38 [i_1] [i_0] = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_16)) ? (var_16) : (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_6)))) <= (((unsigned long long int) arr_20 [i_1 + 3] [i_1 + 1] [i_1 + 2] [i_1 - 2]))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_13))));
    var_24 = ((/* implicit */unsigned short) min(((~(var_16))), (((/* implicit */unsigned long long int) ((long long int) var_18)))));
    /* LoopNest 3 */
    for (short i_10 = 1; i_10 < 13; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 10; i_12 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_13 = 0; i_13 < 14; i_13 += 4) /* same iter space */
                    {
                        arr_48 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) - (var_12)));
                        var_25 = ((((/* implicit */_Bool) ((unsigned int) arr_3 [i_13]))) ? (arr_28 [i_10 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16)))));
                    }
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) /* same iter space */
                    {
                        var_26 += ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_14])) << (((((((/* implicit */unsigned long long int) var_11)) | (arr_22 [i_11] [i_12]))) - (11071373731203774074ULL)))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)242)), ((unsigned short)52819))))) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))));
                        var_27 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_8)) != (((/* implicit */int) arr_31 [i_14] [i_11] [i_11] [i_12] [i_11] [i_14])))) ? ((-(((/* implicit */int) arr_41 [i_10 + 1])))) : (((/* implicit */int) arr_40 [i_11] [i_14]))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_23 [i_10] [i_11] [i_11] [i_11] [i_10] [i_10])) ? (arr_22 [i_10] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [(unsigned short)12] [i_11] [i_11] [i_11] [i_11]))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) ? (((/* implicit */int) min((var_15), (((/* implicit */unsigned short) arr_6 [i_10] [0U] [0U] [(unsigned short)7]))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_46 [i_12 + 3] [i_12 + 3] [i_11] [i_11] [i_10])) : (((/* implicit */int) arr_8 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_14])))))))));
                        var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)163))) != (15539273371707281872ULL)));
                        var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_5))))), (max((var_8), (((/* implicit */unsigned short) arr_1 [i_10]))))))), (((unsigned long long int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_3))))))))));
                        var_30 = ((/* implicit */unsigned long long int) arr_43 [i_14] [(unsigned char)7] [i_10]);
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 2; i_15 < 12; i_15 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22654))) : (15539273371707281872ULL))))));
                        var_32 += ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_6))))));
                    }
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) max(((~(var_12))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_7)))), (((((/* implicit */int) var_4)) ^ (((/* implicit */int) var_7)))))))));
                        var_34 &= ((/* implicit */unsigned char) ((unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_16 [i_16])))) | (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) arr_2 [i_10] [i_11]))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_17 = 0; i_17 < 14; i_17 += 1) 
                    {
                        arr_64 [i_11] [i_10] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_49 [i_10 + 1] [i_10 + 1] [i_10] [i_10]))));
                        arr_65 [i_10] [i_10] = ((/* implicit */unsigned int) var_9);
                        arr_66 [i_17] [i_10] [i_10 - 1] [i_10] [i_10 - 1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_46 [i_12 + 3] [i_12 + 1] [i_12] [i_12 + 3] [i_12 + 3]))));
                    }
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) arr_55 [2ULL]))));
                    arr_67 [i_10 + 1] [i_10] [i_12] = var_9;
                    var_36 += ((/* implicit */unsigned char) min(((-(var_10))), (((/* implicit */long long int) max((arr_29 [10ULL] [i_10 - 1] [i_10 + 1] [10ULL]), (arr_29 [(unsigned char)10] [i_10 - 1] [i_10 - 1] [(unsigned char)10]))))));
                }
            } 
        } 
    } 
}
