/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12140
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
    var_12 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_8) & (((/* implicit */long long int) var_2))))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) var_7)))) % (((/* implicit */unsigned long long int) max((((/* implicit */int) max(((unsigned char)229), (((/* implicit */unsigned char) var_11))))), (((((/* implicit */_Bool) 7474821971208111618LL)) ? (((/* implicit */int) (signed char)34)) : (((/* implicit */int) (unsigned short)63801)))))))));
    var_13 = ((/* implicit */int) min((var_4), (((((/* implicit */_Bool) min((var_7), (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) (signed char)-47)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_2) ^ (var_7)))) ? (((((/* implicit */int) (signed char)46)) << (((((/* implicit */int) (signed char)-24)) + (44))))) : (((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_15 -= ((/* implicit */int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (min((((/* implicit */unsigned long long int) arr_3 [i_1] [i_1] [i_0])), (arr_5 [i_0]))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (arr_5 [i_1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0])), (arr_4 [i_0])))) && (((arr_2 [i_0] [i_0] [i_0]) != (arr_5 [i_1]))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 4; i_2 < 23; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((/* implicit */long long int) min((arr_1 [i_4]), (arr_1 [i_0])));
                                arr_14 [i_3] [i_2] [i_0] = ((/* implicit */int) ((signed char) max((arr_6 [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2] [i_1]))) > (2585081594U)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 19; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6])) ? (arr_24 [i_9] [i_6] [i_6] [i_6] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8] [i_8] [i_8])))))) ? (((/* implicit */int) ((arr_5 [(_Bool)1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_5] [i_7] [i_8])))))) : (arr_27 [i_5] [i_5] [i_7] [i_8] [(unsigned char)3])));
                                arr_28 [i_5] [15ULL] [i_7] [i_9] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_5] [4LL] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) : (463940817U)));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7] [i_5]))) : (arr_5 [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)154)) ? (((/* implicit */int) (unsigned short)20668)) : (((/* implicit */int) (_Bool)0))))) : (((arr_24 [i_5] [i_6] [i_9] [i_6] [i_7]) + (((/* implicit */long long int) arr_8 [i_5] [i_5] [i_5] [i_5]))))));
                            }
                        } 
                    } 
                    var_18 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_4 [i_5]))))) ? (((((/* implicit */_Bool) arr_20 [i_6] [i_6] [i_6] [i_6])) ? (-45575563) : (((/* implicit */int) arr_4 [i_7])))) : (((((/* implicit */int) arr_10 [i_5] [i_6] [i_7])) ^ (((/* implicit */int) arr_1 [i_6])))));
                    arr_29 [i_7] [17ULL] [i_7] [i_6] = ((/* implicit */_Bool) arr_9 [i_5] [i_5] [i_5] [i_5]);
                }
            } 
        } 
        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((/* implicit */unsigned int) 782320889)) : (2768406349U)));
        var_20 = ((/* implicit */unsigned int) arr_1 [i_5]);
    }
}
