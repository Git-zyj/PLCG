/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136438
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
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            {
                var_12 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (max((((/* implicit */long long int) var_5)), (arr_0 [i_1 - 3] [i_1 + 2]))) : (((/* implicit */long long int) ((unsigned int) max((arr_3 [i_0] [i_1]), (((/* implicit */long long int) (_Bool)1))))))));
                arr_5 [i_0] [i_1] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)15)) ? (max((((/* implicit */int) ((4294967286U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))), ((-(((/* implicit */int) arr_1 [i_1])))))) : (((/* implicit */int) (short)128))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */short) (-(((((/* implicit */int) var_10)) << (((((/* implicit */int) (unsigned short)8191)) - (8182)))))));
                    var_13 = ((/* implicit */int) var_3);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    arr_13 [i_0] [i_1 + 1] &= ((/* implicit */short) (unsigned short)57344);
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) var_10)) ? (var_9) : (4294967289U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                    arr_14 [i_1] = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 4; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) (+(((var_3) << (((((/* implicit */int) (unsigned short)57344)) - (57344)))))));
                                arr_19 [i_0] [i_4] [i_4] [i_3] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((signed char) (unsigned short)52424))) : (((/* implicit */int) ((short) (unsigned short)8192)))));
                                var_16 = ((/* implicit */unsigned long long int) ((short) ((unsigned int) arr_3 [i_0] [i_0])));
                            }
                        } 
                    } 
                }
                for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_17 [i_7] [i_7] [(short)14] [i_7] [i_1 - 2]))) ? (((/* implicit */int) arr_17 [i_8] [i_7] [i_7] [i_7] [i_1 - 2])) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7] [i_1 - 2] [i_1 - 2]))))))))));
                                var_18 |= ((/* implicit */unsigned short) ((((arr_0 [i_6 - 1] [i_1 + 2]) < (arr_24 [i_0] [i_1] [i_6] [i_7] [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)15)))) : ((-((~(var_8)))))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)127)), (15U)))) ? ((~(arr_23 [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((arr_20 [i_0] [i_6] [i_1]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)57357), (((/* implicit */unsigned short) arr_16 [i_1 - 1] [i_6 - 1] [i_6 - 2] [i_6 - 1])))))))))));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */long long int) (-(var_9)));
                    var_21 += ((max((arr_11 [i_1 + 2] [11U] [i_6 - 3] [i_6 - 3]), (arr_11 [i_0] [i_6] [i_0] [i_6 - 2]))) >= (((((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_17 [i_6] [i_1 - 1] [i_6] [i_6] [i_1])))) >> (((max((arr_11 [i_0] [i_1] [i_6 - 3] [i_6]), (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [(short)16] [17ULL])))) - (248))))));
                    var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) 63LL))))))) > (((/* implicit */int) ((short) arr_17 [i_0] [i_1] [i_1] [i_1] [i_6])))));
                }
                for (unsigned int i_9 = 2; i_9 < 16; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_10 = 2; i_10 < 16; i_10 += 4) 
                    {
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_9] [i_10])), ((-(((/* implicit */int) (unsigned short)8191))))))) ? ((~((+(arr_11 [i_10] [(short)15] [i_0] [i_1]))))) : ((~(((((/* implicit */int) (unsigned short)57344)) % (((/* implicit */int) (short)(-32767 - 1)))))))));
                        arr_33 [i_10] [i_0] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1690891718U))));
                        var_24 = ((/* implicit */_Bool) ((unsigned int) ((unsigned short) 0ULL)));
                    }
                    /* vectorizable */
                    for (unsigned short i_11 = 1; i_11 < 16; i_11 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            arr_39 [i_0] [i_0] [i_11] = ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)57344))) % (var_3))));
                            var_25 *= ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) (signed char)0)))));
                            arr_40 [i_0] [i_11] [i_11] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)0))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 4) 
                        {
                            var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_8))) ? ((-(arr_23 [i_9] [i_13]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_10 [i_1] [i_11 - 1] [i_13]) : (((/* implicit */long long int) 874585960U)))))));
                            var_27 = ((/* implicit */unsigned short) ((signed char) (unsigned short)64870));
                        }
                        var_28 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned short)665)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (short)126))))));
                        var_29 = ((/* implicit */long long int) var_10);
                    }
                    var_30 = ((/* implicit */_Bool) var_0);
                }
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned short) ((int) var_3));
    /* LoopSeq 1 */
    for (int i_14 = 2; i_14 < 16; i_14 += 4) 
    {
        var_32 = ((/* implicit */short) max((var_32), (arr_44 [i_14 - 1])));
        /* LoopSeq 1 */
        for (int i_15 = 2; i_15 < 17; i_15 += 4) 
        {
            var_33 = ((/* implicit */unsigned long long int) max(((~((+(((/* implicit */int) (short)32767)))))), (max((((/* implicit */int) var_7)), (arr_43 [i_14 - 2])))));
            var_34 -= (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
            var_35 = ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_6)) ? (arr_46 [i_14]) : (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) ((var_0) << (((9223372036854775807LL) - (9223372036854775801LL)))))))), (((/* implicit */long long int) max((((2U) % (var_9))), (((/* implicit */unsigned int) (short)26163)))))));
        }
    }
}
