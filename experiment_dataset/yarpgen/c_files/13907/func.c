/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13907
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
    for (short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_17 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (18446744073709551615ULL)))) || (((/* implicit */_Bool) var_13))))) <= (((/* implicit */int) ((((/* implicit */_Bool) (signed char)121)) && (((/* implicit */_Bool) arr_1 [i_3] [i_3])))))));
                                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((unsigned long long int) arr_6 [i_2] [i_2] [i_3 + 2] [i_4])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) arr_11 [i_2 + 1] [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_0 + 3])) > (arr_0 [i_0 - 1] [i_0]))));
                    arr_12 [13ULL] [i_0] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)59095)) & (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (~(var_9)))) : (((arr_5 [i_0 + 2]) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [10LL] [i_1] [i_1] [i_0] [i_1])))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_1] [i_2] [i_2] [i_1] [i_1])) ? (((/* implicit */int) max((((/* implicit */short) (signed char)-122)), (var_3)))) : (((/* implicit */int) var_10)))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                    {
                        arr_15 [i_5] [i_1] [i_2] [i_0] = ((/* implicit */long long int) var_6);
                        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_0 [i_0 + 2] [i_2 - 1])))) ? ((~(((((/* implicit */_Bool) arr_1 [i_5] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32519))) : (-7196375519761002983LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                        var_21 &= ((/* implicit */short) (unsigned short)42671);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_5])) : (((/* implicit */int) arr_1 [i_1] [i_1]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)0] [i_1] [i_1] [i_5]))))) : (((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_1 [i_1] [i_1])))))))));
                    }
                    for (short i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        arr_18 [i_6] [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) arr_7 [(_Bool)1] [i_0] [i_1] [i_1] [i_2] [i_1]);
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_7 [0ULL] [i_1] [i_2] [i_2] [i_2] [i_6]))));
                    }
                }
            } 
        } 
    } 
    var_24 = var_3;
}
