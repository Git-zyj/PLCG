/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186536
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((-4627486840506376852LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_2 - 1] [(short)1] [i_2] [15U]);
                                arr_14 [(unsigned char)6] [i_1] [i_1] [i_0] = ((/* implicit */short) var_5);
                                var_15 &= ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) != (arr_6 [12LL] [12LL] [i_2]))))) >= (((unsigned int) (unsigned short)62573))))) == (((/* implicit */int) (short)32757)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) < (var_10))))) - (((((/* implicit */_Bool) (short)-26665)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_12))))) - (((/* implicit */unsigned int) ((((((/* implicit */int) (short)-25128)) + (2147483647))) >> (((1071581710U) - (1071581697U))))))));
    var_17 |= var_11;
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
    {
        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
        {
            {
                var_18 += ((/* implicit */unsigned short) max((arr_7 [i_5] [i_6]), (((/* implicit */unsigned long long int) ((min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)62573)))) >= (max((arr_3 [7LL] [i_5] [i_5]), (((/* implicit */unsigned long long int) arr_8 [i_6] [i_6])))))))));
                arr_19 [i_6] [i_6] [(unsigned short)8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1298017841U) | (arr_8 [2ULL] [i_6])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5] [i_6])) || (((/* implicit */_Bool) 1534472449U))))) : ((~(((/* implicit */int) var_4))))))) : (max((arr_1 [i_5] [i_6]), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [7LL] [i_5] [i_6] [i_6] [i_5]))) | (arr_3 [i_5] [6U] [6U])))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 14; i_7 += 3) 
    {
        for (signed char i_8 = 2; i_8 < 15; i_8 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) (signed char)38);
                arr_25 [i_7] = ((/* implicit */signed char) max((((/* implicit */unsigned int) arr_24 [i_7 - 1] [0U])), (min((min((arr_20 [i_7 - 1]), (arr_20 [(signed char)8]))), (((((/* implicit */_Bool) var_0)) ? (arr_22 [i_8]) : (arr_21 [i_7 + 4])))))));
            }
        } 
    } 
}
