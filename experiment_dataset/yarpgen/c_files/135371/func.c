/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135371
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) 
                            {
                                var_16 *= ((/* implicit */int) min((max((max((((/* implicit */long long int) arr_11 [i_0] [i_0] [i_2])), (9223372036854775807LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [11LL] [11LL])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [12LL])) : (((/* implicit */int) var_8))))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)58185))) != (-9223372036854775807LL))))));
                                arr_13 [i_4] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_1] [7ULL] [i_2 + 3])) ? (((/* implicit */int) arr_9 [(short)1] [i_2] [i_0] [i_0] [i_2 + 3])) : (((/* implicit */int) var_7))))) ? (((((((/* implicit */int) var_9)) == (2147483647))) ? (var_6) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned char)131))));
                            }
                            arr_14 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))) ? (((((/* implicit */_Bool) 818866863)) ? (((/* implicit */int) (unsigned char)131)) : (37392469))) : (((/* implicit */int) var_7))));
                            var_17 = ((/* implicit */signed char) (short)19544);
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) arr_2 [i_0] [i_0])), (max((((/* implicit */unsigned int) max((((/* implicit */short) arr_0 [i_0])), (var_0)))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_0] [i_0]))) : (4019185900U)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) var_0);
    /* LoopSeq 3 */
    for (int i_5 = 1; i_5 < 14; i_5 += 2) 
    {
        arr_18 [0U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_16 [i_5])), (max((((/* implicit */long long int) arr_15 [i_5])), (1693078432467140292LL)))))) && (((/* implicit */_Bool) var_1))));
        arr_19 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_15 [i_5 + 1])) * (((/* implicit */int) ((((/* implicit */int) arr_17 [i_5 + 2])) >= (((/* implicit */int) arr_17 [i_5 + 2])))))));
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        var_20 += ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)64)) << (((13189732163638520000ULL) - (13189732163638519986ULL))))) != (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)58183)) : (((/* implicit */int) (unsigned char)124))))))), (max((((((/* implicit */_Bool) -1565297820)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) : (2800359678U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_9)))))))));
        arr_22 [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) >= (((/* implicit */int) (short)-24860)))));
    }
    for (long long int i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) arr_24 [i_7])) ? (max((((/* implicit */unsigned long long int) arr_25 [i_7] [i_7])), (9007199254708224ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_24 [i_7]), ((unsigned char)250)))))))));
        arr_27 [0LL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_12) >= (arr_23 [i_7 + 2] [i_7])))) << (((((((/* implicit */_Bool) arr_23 [i_7 - 1] [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_23 [i_7 + 2] [i_7]))) - (49U)))));
    }
}
