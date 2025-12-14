/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117363
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
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5139431430734802472LL)) ? (((/* implicit */int) (signed char)-62)) : (-1)));
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (-(((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (max((((unsigned long long int) 4374442199192644682LL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4374442199192644682LL)) ? (var_2) : (33550336))))))));
    var_20 = ((/* implicit */int) ((long long int) -2088521644));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) ((unsigned char) (unsigned char)66))) : (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) (unsigned char)249)) ? (-14) : (((/* implicit */int) (unsigned short)33994)))) : ((((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((var_2) >= (((/* implicit */int) (unsigned char)7)))))))));
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_0 [i_0])))) != (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))))))));
        arr_5 [(unsigned char)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [(unsigned char)18])) << (((((((/* implicit */_Bool) 33550336)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))) - (37)))))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : ((-(((/* implicit */int) arr_3 [(signed char)2]))))));
    }
    for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        arr_9 [i_1] [9U] = ((/* implicit */long long int) ((_Bool) (!(((/* implicit */_Bool) (unsigned char)73)))));
        arr_10 [i_1] = ((/* implicit */long long int) (!(var_3)));
        arr_11 [0U] [7LL] = min((((((/* implicit */_Bool) arr_6 [i_1 + 3] [i_1])) ? (arr_6 [i_1 + 2] [i_1 + 3]) : (((/* implicit */int) var_10)))), (arr_6 [i_1 - 1] [(unsigned char)9]));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (short i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    var_22 = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)3))) < ((-(5139431430734802467LL))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_26 [6LL] [i_5] [17U] [i_6] [i_3 + 1] [i_2] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1] [i_5 + 1] [11] [i_5]))))), (((long long int) arr_17 [i_3 + 1] [i_3] [i_5 + 1]))));
                                arr_27 [i_6] [(unsigned char)17] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_16 [(unsigned char)4]);
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (-4374442199192644698LL)))) ? ((-(((((/* implicit */_Bool) (unsigned char)9)) ? (((/* implicit */unsigned long long int) arr_16 [i_6])) : (var_4))))) : (((/* implicit */unsigned long long int) 528175215U)))))));
                            }
                        } 
                    } 
                    arr_28 [i_3] [i_3 + 1] [i_3] [0ULL] = ((/* implicit */int) var_10);
                    arr_29 [(unsigned short)20] [i_3] [i_4] [i_2] = (!(((((/* implicit */_Bool) arr_19 [i_4] [(_Bool)0] [i_3 + 2])) || (((/* implicit */_Bool) var_9)))));
                }
            } 
        } 
    } 
}
