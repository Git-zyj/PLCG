/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158734
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
    var_16 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((short) (short)19690)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_13)) : (arr_8 [i_1 - 3] [i_0] [i_1 - 3] [i_1 + 1]))) & (((/* implicit */unsigned long long int) var_3))));
                    var_18 = ((/* implicit */int) ((short) (unsigned char)231));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) ? (var_15) : (((/* implicit */unsigned long long int) ((-1088750608) ^ ((~(((/* implicit */int) (short)-19684)))))))));
                        var_20 ^= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) ((unsigned char) (short)-19695))) : ((+(((/* implicit */int) arr_10 [(unsigned short)8] [i_1] [i_3] [i_3] [i_3])))))));
                        var_21 = ((/* implicit */unsigned char) var_15);
                        var_22 = ((/* implicit */int) ((long long int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (11137573228149129394ULL))))));
                    }
                    for (int i_4 = 4; i_4 < 11; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_6 [i_2]);
                        var_23 += ((((/* implicit */unsigned int) ((int) (short)-19687))) <= (min((((var_4) % (arr_2 [(unsigned short)10]))), (((/* implicit */unsigned int) var_0)))));
                        var_24 = ((/* implicit */long long int) var_6);
                    }
                    for (short i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */long long int) (-(((/* implicit */int) (short)19690))));
                        var_26 = ((/* implicit */signed char) (-(((unsigned long long int) var_12))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 1707660798))) % (((/* implicit */int) ((unsigned char) arr_11 [i_5] [i_0] [i_1] [i_0] [i_0]))))))));
                        var_28 += ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */int) (short)-19684)) : (((((2505481588332594508ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */int) (unsigned short)33376)), (-1613569711))) : (((/* implicit */int) var_11))))));
                        /* LoopSeq 1 */
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            var_29 = ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) (short)19679)))));
                            var_30 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) 1639828239)), (((((/* implicit */_Bool) (short)19674)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7393))) : (-4314440132118165960LL)))));
                            var_31 = ((/* implicit */_Bool) (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (short)-20768))))));
                            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? ((-(var_10))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-19684))))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) 775995233U))))))));
                        }
                    }
                    for (short i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
                    {
                        arr_24 [7] [i_1] [i_0] [9U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)22181)) ? (-1596136952424341604LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8)))));
                        arr_25 [i_0] [i_1 - 2] [i_2] [i_0] [i_7] = ((/* implicit */short) (-(360829037U)));
                        var_33 = ((/* implicit */unsigned char) max(((unsigned short)58142), (((unsigned short) (short)19683))));
                        arr_26 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) var_0);
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 3 */
    for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
    {
        for (unsigned int i_9 = 2; i_9 < 12; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 14; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 14; i_11 += 2) 
                    {
                        for (short i_12 = 0; i_12 < 14; i_12 += 4) 
                        {
                            {
                                arr_39 [i_8] [11] [i_8] [i_8] [8LL] = ((/* implicit */short) min((((/* implicit */int) ((unsigned char) (+(((/* implicit */int) (_Bool)1)))))), ((+(max((2147483622), (-2147483646)))))));
                                arr_40 [i_8] = ((/* implicit */signed char) ((unsigned long long int) ((short) (unsigned short)45701)));
                                arr_41 [i_12] [i_8] [i_8] [i_10] [i_8] [i_8] |= ((/* implicit */unsigned short) var_8);
                                arr_42 [i_8] [(unsigned char)9] [(unsigned char)9] [(unsigned char)9] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (signed char)-115)), (10422595148248246899ULL)));
                                arr_43 [i_10] [(unsigned char)3] [(unsigned char)3] = ((/* implicit */_Bool) max(((~(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-19695)))))), (((((/* implicit */_Bool) ((unsigned long long int) 1585226128))) ? (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned short)58142)) : (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */_Bool) (unsigned char)147)) ? (((/* implicit */int) (short)19684)) : (1133803198)))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)7226)), (1723660046U))))));
                    var_36 = ((/* implicit */int) ((((/* implicit */_Bool) (short)-32544)) ? (9223372036854775807LL) : (var_9)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        for (short i_14 = 2; i_14 < 13; i_14 += 4) 
        {
            {
                var_37 = ((/* implicit */unsigned long long int) var_13);
                /* LoopNest 3 */
                for (unsigned int i_15 = 4; i_15 < 12; i_15 += 4) 
                {
                    for (unsigned int i_16 = 2; i_16 < 13; i_16 += 3) 
                    {
                        for (short i_17 = 0; i_17 < 14; i_17 += 4) 
                        {
                            {
                                var_38 += ((/* implicit */short) ((((/* implicit */_Bool) 68719476735LL)) ? (((/* implicit */unsigned long long int) ((long long int) (unsigned short)32186))) : (min((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_11)))))))));
                                arr_55 [i_13] [i_13] [i_13] [i_13] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_32 [(unsigned short)4] [i_16 - 1] [i_17])), (arr_33 [i_14 + 1] [i_15 - 3] [i_17])))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (min((arr_53 [i_14] [i_14 + 1] [(short)2] [i_15 - 3] [i_16 - 1]), (arr_53 [i_13] [i_13] [i_14 + 1] [i_15 - 2] [i_15 - 2])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
