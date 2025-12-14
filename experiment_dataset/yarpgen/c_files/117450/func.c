/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117450
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
    var_16 = ((/* implicit */signed char) (~(25547107U)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */int) var_10)) >> (((arr_8 [i_0] [i_1]) + (5820329246559541605LL)))));
                        var_18 = ((/* implicit */long long int) (signed char)118);
                        var_19 = ((/* implicit */signed char) var_10);
                        var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) + (2147483647))) >> ((-(((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (signed char)-110)))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
                        {
                            {
                                var_21 = min((min((((((/* implicit */_Bool) arr_3 [i_5] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) 1089046116U)) : (arr_5 [i_0] [i_1]))), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-119)), (arr_8 [i_0 + 1] [i_0])))));
                                var_22 = ((/* implicit */short) min((((/* implicit */int) max((arr_1 [i_1] [i_5]), (arr_1 [i_1] [i_1])))), ((+(((/* implicit */int) var_4))))));
                                var_23 += ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) (signed char)-80)) ? (9223372036854775807LL) : (7371595036375005309LL))), (((/* implicit */long long int) arr_13 [i_0] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_1]))))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)119))) : (5070282839624493881LL))), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))) >= (min((var_7), (((/* implicit */long long int) var_15)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((min((var_15), (((/* implicit */unsigned short) (signed char)119)))), (((/* implicit */unsigned short) var_6))))) != (((/* implicit */int) (short)4717))));
        var_26 = ((/* implicit */long long int) (signed char)16);
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_0 - 2] [i_0])) ? (arr_8 [i_0] [i_0 - 1]) : (((((/* implicit */long long int) ((/* implicit */int) var_6))) & (arr_8 [i_0] [i_0 - 1])))));
    }
    for (long long int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((18446744073709551615ULL) - (((/* implicit */unsigned long long int) 9223372036854775807LL)))) >> (((((min((((/* implicit */unsigned long long int) -2480370958090541958LL)), (9617678579649903685ULL))) - (((((/* implicit */_Bool) (unsigned short)25932)) ? (arr_14 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_6]))))))) - (13589773143366917303ULL))))))));
        var_29 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_6] [i_6])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) ((unsigned short) arr_15 [i_6])))))));
        var_30 = ((/* implicit */short) max((arr_14 [i_6] [i_6]), (min((((/* implicit */unsigned long long int) ((long long int) arr_15 [(signed char)15]))), (((((/* implicit */_Bool) var_13)) ? (arr_14 [i_6] [i_6]) : (arr_14 [i_6] [(signed char)11])))))));
    }
}
