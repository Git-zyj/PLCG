/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182130
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
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 20; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_4] [i_0] = ((/* implicit */long long int) min((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_10)) : (var_4))), (((/* implicit */unsigned long long int) ((unsigned int) var_4))))), (((/* implicit */unsigned long long int) var_8))));
                                arr_13 [i_0 - 2] [i_0 - 2] [i_4] [i_0 + 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((12290770016620318906ULL), (((/* implicit */unsigned long long int) (unsigned short)1872))))) ? (((/* implicit */int) ((short) var_1))) : (((int) max((((/* implicit */unsigned long long int) var_8)), (var_4))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 1) /* same iter space */
                    {
                        var_12 += ((/* implicit */short) ((((/* implicit */int) ((_Bool) var_8))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                        var_13 = ((/* implicit */_Bool) min((var_13), (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))));
                    }
                    for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-17808)) ? (((/* implicit */int) (short)17816)) : (((/* implicit */int) (short)(-32767 - 1)))))))))));
                        arr_20 [i_0 + 4] [i_0 + 4] [i_0 + 4] [3ULL] = ((/* implicit */short) max((max((min((((/* implicit */unsigned long long int) var_6)), (var_2))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) ((((/* implicit */_Bool) (short)-17789)) || (((/* implicit */_Bool) (short)17807))))))))));
                        arr_21 [i_0] [i_0 + 1] [(short)2] |= ((/* implicit */unsigned int) ((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (((unsigned short) var_0))))) ^ ((-(min((((/* implicit */int) var_6)), (var_9)))))));
                    }
                    for (long long int i_7 = 3; i_7 < 21; i_7 += 4) /* same iter space */
                    {
                        var_14 = max((((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_1)))) << (((max((((/* implicit */long long int) var_11)), (var_0))) - (22798LL)))))), (max((var_2), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (var_9)))))));
                        var_15 += ((((/* implicit */_Bool) max((((unsigned int) var_11)), (((/* implicit */unsigned int) ((signed char) var_9)))))) ? (((/* implicit */long long int) ((unsigned int) var_7))) : (((long long int) var_10)));
                        var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) var_1)))))))));
                    }
                    /* vectorizable */
                    for (long long int i_8 = 3; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        arr_28 [15] [i_8] [i_1] [i_2] [(unsigned short)18] = ((/* implicit */signed char) (+(((long long int) var_4))));
                        var_17 = var_9;
                    }
                    /* LoopSeq 1 */
                    for (short i_9 = 2; i_9 < 21; i_9 += 3) 
                    {
                        arr_32 [i_0] [i_0] [i_1] [i_0] [i_1] [i_9] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (((var_10) - (((/* implicit */long long int) var_9))))))));
                        var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_0)) ? (var_7) : (var_2)))))));
                        arr_33 [20] [i_1] [i_2 + 1] [i_9] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (var_2))))))), (((((/* implicit */int) ((unsigned short) var_2))) ^ (((/* implicit */int) var_6))))));
                        var_19 *= ((/* implicit */short) ((17883270849027499944ULL) >> (((((/* implicit */int) (short)-17823)) + (17881)))));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 4) 
        {
            {
                arr_39 [i_10] [6] [6] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_11)))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    for (short i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        {
                            arr_46 [i_10] = ((/* implicit */short) max((1064893288779398552LL), (((/* implicit */long long int) (short)17789))));
                            arr_47 [i_10] [(unsigned short)8] [i_12] [i_13] [i_12] = ((/* implicit */long long int) ((short) max((((/* implicit */short) (!(((/* implicit */_Bool) 67553994410557440ULL))))), ((short)17804))));
                            arr_48 [i_10] [i_10] [9ULL] [i_12] [(signed char)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) max((var_5), (((/* implicit */short) var_8)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), ((-(1050494970U)))))) : (((unsigned long long int) min((var_0), (((/* implicit */long long int) var_11)))))));
                        }
                    } 
                } 
                arr_49 [(signed char)0] &= ((/* implicit */signed char) max((((int) (~(var_7)))), (max((((/* implicit */int) ((short) var_2))), (((((/* implicit */int) var_8)) | (((/* implicit */int) var_5))))))));
                arr_50 [i_10] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55585))) | (1547208954506072989LL));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min((var_20), (var_6)));
    var_21 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((signed char) var_0))), (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((var_3) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (var_5))))));
    var_22 = ((/* implicit */unsigned int) var_0);
}
