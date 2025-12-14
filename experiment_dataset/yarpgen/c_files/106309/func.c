/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106309
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
    var_12 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */unsigned long long int) ((unsigned int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_13 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_0 [i_0 + 3] [2ULL])) / (((/* implicit */int) arr_0 [i_0 + 4] [14ULL])))));
        var_14 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0])))))));
    }
    /* LoopSeq 4 */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 2; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)12838))));
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_1] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)12844), ((short)12844))))) <= (min((((/* implicit */unsigned long long int) (short)-12844)), (arr_2 [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((short) 883053897U)), ((short)12844))))) : (((unsigned int) ((((/* implicit */_Bool) var_10)) ? (3411913398U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                                arr_16 [i_1] [i_1] [i_4] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)12840), ((short)12844))))) : (min((var_5), (var_5))))) * (((arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] [i_5]) ^ (arr_13 [i_1] [i_2] [i_2] [i_2] [i_2] [i_2])))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_9 [i_3] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))) : (((unsigned int) arr_4 [i_1] [i_1])))) / (arr_6 [i_1])));
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))) && (((/* implicit */_Bool) arr_2 [i_1]))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))));
        var_17 = ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) ((unsigned int) (unsigned short)2818))));
        arr_17 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) | (((/* implicit */int) (short)12838))))) ^ (min((var_1), (var_6))))), (((/* implicit */unsigned long long int) ((883053895U) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)51528)))))))))));
    }
    /* vectorizable */
    for (unsigned short i_6 = 3; i_6 < 21; i_6 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15136))) >= (491781855U))))));
        arr_21 [i_6] = ((/* implicit */unsigned int) (~(arr_19 [i_6 + 2])));
        var_19 = ((unsigned int) arr_19 [i_6 + 3]);
        var_20 = ((/* implicit */unsigned long long int) var_9);
    }
    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_13 [(unsigned short)6] [(unsigned short)6] [i_7] [i_7] [i_7] [(unsigned short)6]))));
        var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(3250490450U)))) ? (max((arr_2 [i_7]), (arr_2 [i_7]))) : (((arr_2 [i_7]) / (arr_2 [i_7])))));
    }
    for (unsigned long long int i_8 = 1; i_8 < 23; i_8 += 1) 
    {
        var_23 ^= (~(((((((/* implicit */_Bool) var_10)) ? (11ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12839))))) << (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 883053870U))))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_8))));
    }
    var_25 = ((/* implicit */unsigned short) ((var_2) >> (((((/* implicit */int) max((var_4), (var_7)))) - (58269)))));
}
