/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1062
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 1]))))) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)3)))))));
                /* LoopSeq 2 */
                for (int i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    arr_9 [(short)10] [(short)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */int) ((unsigned char) arr_5 [i_0 + 1] [15] [i_2]))) << (1))) : (((((((/* implicit */int) arr_7 [i_0 + 1] [(unsigned short)20] [i_2] [(unsigned char)18])) + (2147483647))) << (((((((/* implicit */int) arr_7 [i_0 + 2] [(signed char)12] [4LL] [(signed char)12])) + (27358))) - (29)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_15 [i_2] [i_1] [i_2 + 1] [i_3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2] [i_1 + 1]))))) << (((((/* implicit */int) var_0)) - (7971)))));
                                arr_16 [2LL] [i_1 - 1] [i_1] [(short)12] [8] [i_1] = ((/* implicit */long long int) (signed char)3);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_21 [i_6] [(short)15] [i_6] [(unsigned char)1] [i_2] [i_6] [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [(unsigned char)2] [(short)13] [i_5]))) / (arr_17 [i_0] [i_0] [17] [17])))) ? (-474462646) : (((/* implicit */int) ((unsigned short) 3361885601U))))), ((+((+(((/* implicit */int) var_2))))))));
                                arr_22 [i_0 + 1] [i_0] [i_1] [i_2] [i_1] [i_5] [i_6] = ((/* implicit */short) ((long long int) ((unsigned long long int) ((short) arr_5 [i_1] [i_5] [i_6]))));
                                arr_23 [i_0] [(unsigned char)12] [i_2 + 1] [i_2 + 1] [(short)16] |= ((/* implicit */unsigned long long int) ((signed char) arr_12 [(short)20] [i_1] [i_2 - 2] [i_5] [i_6]));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned long long int i_7 = 4; i_7 < 19; i_7 += 1) 
                {
                    arr_26 [i_0 - 1] [6ULL] = ((/* implicit */signed char) ((long long int) 1));
                    arr_27 [i_0] [i_0 - 1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_1 + 1] [i_1 - 1] [17LL]));
                }
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (unsigned char i_9 = 3; i_9 < 17; i_9 += 3) 
                    {
                        for (unsigned int i_10 = 3; i_10 < 20; i_10 += 4) 
                        {
                            {
                                arr_36 [i_8] [i_1 - 1] = ((/* implicit */int) max((((/* implicit */long long int) arr_5 [7] [i_10 - 2] [(short)14])), (((((/* implicit */long long int) ((/* implicit */int) arr_11 [1ULL] [i_8] [i_8] [i_10 - 1]))) ^ (arr_2 [i_0 - 2])))));
                                arr_37 [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) arr_14 [i_0 + 1] [i_1 - 1] [i_10 - 1])))) : (((/* implicit */int) var_10)));
                                arr_38 [12U] [4LL] [i_8] [i_9] [14] = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)-3));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_12 = 3; i_12 < 19; i_12 += 2) 
                    {
                        arr_44 [i_11] = ((/* implicit */unsigned long long int) ((unsigned short) var_16));
                        arr_45 [(signed char)10] [i_11] [(signed char)8] [i_11] [i_11] = ((/* implicit */long long int) ((arr_25 [i_1 + 1] [i_1 - 1] [i_1 - 1]) ? (((/* implicit */int) arr_25 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) arr_25 [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                    }
                    arr_46 [i_0] [i_0] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0 + 2] [i_1 - 1] [i_0])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)(-32767 - 1)))));
                    arr_47 [i_0] [i_1 + 1] [i_11] = ((/* implicit */short) (unsigned char)13);
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        arr_51 [i_0] = ((/* implicit */signed char) ((_Bool) arr_31 [i_13]));
                        arr_52 [i_0] [i_0] [i_11] [10U] = ((/* implicit */short) arr_41 [i_0 - 1] [i_13] [i_11] [i_1] [i_13] [i_1 - 1]);
                    }
                    for (unsigned int i_14 = 3; i_14 < 18; i_14 += 4) 
                    {
                        arr_57 [i_1] [i_1 - 1] [i_1 + 1] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) : (((((/* implicit */_Bool) arr_19 [i_1] [(short)14] [i_1] [i_1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32746))) : (arr_48 [i_14] [i_14] [(signed char)9] [(signed char)18] [(signed char)18] [i_0])))));
                        arr_58 [i_14] [14LL] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_56 [i_1 - 1] [i_0 - 2])) * (((((/* implicit */_Bool) -1)) ? (var_15) : (((/* implicit */unsigned long long int) -1976275119613755LL))))));
                    }
                    arr_59 [i_11] [(unsigned char)17] [i_11] [i_0 - 1] = ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_35 [i_0] [i_0 - 1] [i_1] [i_1] [i_0] [(signed char)16] [16])) : (((/* implicit */int) (short)7764)));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_15 = 0; i_15 < 24; i_15 += 3) 
    {
        for (signed char i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            for (long long int i_17 = 2; i_17 < 23; i_17 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_18 = 0; i_18 < 24; i_18 += 2) /* same iter space */
                    {
                        arr_72 [(short)12] = (unsigned char)116;
                        arr_73 [i_16] [(unsigned char)18] [(unsigned char)18] = ((/* implicit */unsigned short) (short)-30943);
                    }
                    /* vectorizable */
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                    {
                        arr_76 [(unsigned char)11] [i_16] [i_16] [(short)9] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((int) 1));
                        arr_77 [i_16] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                        arr_78 [i_15] [i_15] [i_16] [i_17] [i_16] [i_15] = ((/* implicit */signed char) 1375548188);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 24; i_21 += 3) 
                        {
                            {
                                arr_84 [i_20] [(_Bool)1] [(_Bool)1] [i_20] [15] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_69 [i_20] [i_20] [i_20] [i_20])), (((unsigned long long int) -8334121643310054893LL))))) ? (((/* implicit */unsigned int) -1508415009)) : ((((!(((/* implicit */_Bool) (signed char)-31)))) ? (2268951827U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)125)))))));
                                arr_85 [i_15] [3] = ((/* implicit */short) (-(max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((-1621487192) / (((/* implicit */int) arr_60 [i_15])))))))));
                            }
                        } 
                    } 
                    arr_86 [i_16] [i_16] [(unsigned short)7] [i_16] = ((/* implicit */unsigned int) arr_83 [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [(unsigned short)4] [i_17] [i_17] [i_17 - 2]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (short)14533)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)0))))) : (((/* implicit */int) var_16)))))));
    var_18 = var_3;
}
