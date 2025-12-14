/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127214
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */_Bool) ((((min((arr_6 [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))) - (((/* implicit */unsigned long long int) arr_1 [i_1])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_6 [(short)12]), (((/* implicit */unsigned long long int) arr_0 [2LL] [i_1])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2])))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */_Bool) arr_8 [i_2] [i_2] [i_1] [i_0]);
                        var_21 = ((/* implicit */long long int) max((((((/* implicit */_Bool) 4173905479U)) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_0] [i_3])) || (((/* implicit */_Bool) (signed char)12)))))))), (min((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) arr_2 [i_0] [i_0] [i_0]))))), (arr_6 [i_3])))));
                        arr_9 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) (((-(arr_1 [i_1]))) + (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_3])), (arr_3 [i_0] [i_1])))))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 4; i_5 < 23; i_5 += 4) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_5 - 1] [i_4 - 1] [i_4 - 1])), ((~(((/* implicit */int) arr_4 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [(signed char)24] [(short)21] [(signed char)24] [i_2]))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_0] [i_5] [i_1])) ? (((/* implicit */int) arr_13 [i_0] [i_4] [i_2] [1LL] [23ULL])) : (((/* implicit */int) arr_14 [i_0] [i_0] [i_2] [i_4] [i_0] [i_0] [i_1]))))), (arr_0 [i_0] [i_0]))));
                                var_23 = ((/* implicit */_Bool) arr_0 [i_5] [6U]);
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0] [(short)21])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) == (arr_0 [i_2] [i_1])))) & (((/* implicit */int) max((((/* implicit */short) ((((/* implicit */_Bool) (short)32767)) || (((/* implicit */_Bool) (unsigned short)44875))))), ((short)4872))))));
                }
            } 
        } 
    } 
    var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_10))));
    var_26 &= ((/* implicit */short) var_5);
    var_27 &= ((/* implicit */unsigned char) var_2);
    var_28 = ((/* implicit */short) var_0);
}
