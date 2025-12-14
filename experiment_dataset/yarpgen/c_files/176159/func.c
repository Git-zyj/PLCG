/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176159
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1]))))) : (((/* implicit */int) var_2)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0] [i_1]))))))));
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) arr_3 [i_2] [i_1] [i_0]))));
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */signed char) var_11);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) var_10);
    var_19 &= ((((var_14) >= (((((/* implicit */_Bool) var_11)) ? (8589934591LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) ? ((+((-(8ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) 3885612551U))) << (((((unsigned long long int) (unsigned short)65535)) - (65528ULL)))))));
    /* LoopNest 3 */
    for (long long int i_5 = 3; i_5 < 6; i_5 += 2) 
    {
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (unsigned short i_7 = 3; i_7 < 7; i_7 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (short i_9 = 0; i_9 < 10; i_9 += 2) 
                        {
                            {
                                arr_27 [6ULL] [i_9] [i_6] [i_8] [i_9] [i_9] &= ((((/* implicit */_Bool) (+(((int) var_5))))) ? ((~(((((/* implicit */_Bool) arr_21 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) var_14)) : (arr_24 [i_5] [i_5] [i_5 - 3] [i_5]))))) : (((/* implicit */unsigned long long int) min(((+(3885612546U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_8] [i_6])) ? (((/* implicit */int) arr_16 [i_7 - 1] [i_6])) : (((/* implicit */int) (signed char)63)))))))));
                                var_20 &= ((((/* implicit */_Bool) min((max((((/* implicit */long long int) arr_9 [i_9] [i_8])), (arr_21 [2LL] [0LL]))), (((/* implicit */long long int) 409354748U))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_7 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (min((arr_22 [i_5] [i_6] [i_8]), (arr_7 [i_5] [i_7] [i_8])))))) : (var_13));
                            }
                        } 
                    } 
                    var_21 += ((/* implicit */unsigned long long int) (signed char)-97);
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max(((~(var_14))), (((var_14) + (((/* implicit */long long int) 67100672))))))) ? (min((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */long long int) var_10))))), ((~(var_13))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
