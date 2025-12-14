/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189252
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (((((-(arr_0 [i_0] [i_0]))) + (9223372036854775807LL))) << (((arr_0 [i_0] [i_0]) - (3264204288119649222LL)))));
        var_11 = ((/* implicit */int) arr_0 [i_0] [i_0]);
        var_12 *= ((/* implicit */short) ((((arr_0 [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) var_0))))) >= (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_13 = ((/* implicit */short) var_4);
        var_14 += (unsigned short)11;
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1] [i_1])))))));
        var_15 = ((/* implicit */long long int) (-(var_8)));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */long long int) arr_9 [11LL]);
        arr_11 [7LL] = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2]))), (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])))));
        arr_12 [i_2] = ((((/* implicit */_Bool) max((max((((/* implicit */long long int) (unsigned short)52706)), (6857690378969043245LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_2])))))))) ? (((((/* implicit */_Bool) ((long long int) var_6))) ? (6857690378969043245LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551601ULL)) && (((/* implicit */_Bool) arr_6 [i_2] [i_2])))))))) : (((((long long int) arr_9 [i_2])) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))));
    }
    var_16 = ((/* implicit */short) var_3);
    var_17 = ((/* implicit */unsigned short) var_1);
    var_18 = ((/* implicit */int) ((var_4) | (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52706))) | (var_8))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_19 -= ((/* implicit */unsigned long long int) 4294967281U);
                        var_20 = var_1;
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        arr_29 [i_3] [i_3] [i_4] [i_5] [i_5] [i_7] = ((((/* implicit */_Bool) arr_27 [i_4])) ? (arr_27 [i_3]) : (arr_27 [i_3]));
                        arr_30 [i_3] [i_3] [i_3] [i_7] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_3] [i_4] [i_5] [i_5] [i_7])) * (((/* implicit */int) var_6))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        arr_33 [i_3] [i_3] [i_4] [(short)14] [i_5] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_24 [i_3] [i_4] [i_5] [i_3] [i_5] [i_8])) ? (((/* implicit */unsigned long long int) arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : (0ULL)));
                        var_21 = max((arr_19 [i_8]), ((~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_3] [i_3] [i_3] [i_3] [i_3]))) : (var_3))))));
                    }
                    arr_34 [i_4] [i_4] [i_5] [i_3] = ((((/* implicit */_Bool) -6857690378969043246LL)) && ((!((!(((/* implicit */_Bool) arr_15 [i_5])))))));
                    var_22 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) arr_14 [i_5] [i_4])), (arr_25 [i_3] [3LL] [i_3] [i_3]))), (((/* implicit */long long int) arr_27 [i_3]))));
                }
            } 
        } 
    } 
}
