/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163009
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) var_12);
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) var_12);
                    arr_11 [i_0] [i_1] [i_2] [20U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_10)))) ? (var_7) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) && (var_3))))));
                    var_18 ^= ((((/* implicit */_Bool) arr_7 [i_2 + 1] [i_0 - 1] [i_2])) ? (arr_1 [i_2]) : (var_9));
                    var_19 = arr_7 [i_2] [11LL] [i_2];
                }
            } 
        } 
    }
    for (unsigned long long int i_3 = 4; i_3 < 14; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned int) arr_4 [i_3] [i_3 - 4]);
        arr_15 [i_3] [i_3] = ((/* implicit */signed char) max(((unsigned char)114), ((unsigned char)116)));
        var_20 = ((/* implicit */unsigned char) ((var_14) ? (var_10) : (((((/* implicit */_Bool) max((var_9), (var_10)))) ? (var_15) : (((/* implicit */unsigned int) max((var_1), (((/* implicit */int) var_8)))))))));
        /* LoopNest 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 2; i_5 < 13; i_5 += 4) 
            {
                {
                    var_21 += ((/* implicit */unsigned int) arr_3 [i_4]);
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 15; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)114)) ? (((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))))) : (arr_21 [i_3] [i_4 - 1] [i_3 - 1] [i_5 + 1] [11])))) && (((/* implicit */_Bool) var_0))));
                                arr_25 [i_7] [i_6 + 1] [i_6] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 34223108)), (7828337964925596135LL)))) ? (((arr_7 [i_3] [i_3] [i_3]) | (((/* implicit */int) arr_23 [i_7] [i_4] [i_6] [i_5 + 3] [i_4] [i_3])))) : (min((((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_5] [i_3] [i_7])) ? (var_7) : (-34223108))), (((/* implicit */int) arr_4 [i_4 - 1] [i_6 - 1]))))));
                            }
                        } 
                    } 
                    arr_26 [i_3] [i_3 + 1] [4] = ((/* implicit */_Bool) var_1);
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_9 [i_4 - 1] [i_3 + 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74)))))), (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_16) >= (3067800532U))))) : (max((((/* implicit */unsigned long long int) (unsigned char)186)), (arr_5 [i_5]))))))))));
                }
            } 
        } 
        var_24 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((signed char)-16), ((signed char)12)))) ? (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_6 [6U] [i_3] [i_3])) ? (var_12) : (var_7))), (((/* implicit */int) arr_19 [i_3] [(signed char)13] [(unsigned char)2]))))) : (max((arr_21 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3]), (arr_21 [i_3] [i_3] [i_3 - 1] [i_3] [i_3])))));
    }
    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (-6619040573692536468LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)35)))))) ? (max((min((18446744073709551601ULL), (((/* implicit */unsigned long long int) 5678538157343973198LL)))), (((/* implicit */unsigned long long int) ((183017215U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
