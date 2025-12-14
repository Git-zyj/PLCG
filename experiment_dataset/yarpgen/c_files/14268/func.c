/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14268
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (min((min((var_5), (((/* implicit */unsigned long long int) var_9)))), (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))) : (((/* implicit */unsigned long long int) min(((-(var_16))), (((/* implicit */long long int) ((((/* implicit */_Bool) 1552565942)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14))))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 15; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */short) arr_11 [i_0] [i_0] [i_1 + 3] [i_0]);
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_3 + 1] [i_2 - 2] [i_0])))))));
                        arr_12 [i_3] = ((/* implicit */unsigned char) (~(-1552565942)));
                    }
                    for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 1) 
                    {
                        arr_16 [i_2 - 1] = (-(((arr_10 [i_1 + 1] [i_2] [i_1 + 1] [i_2]) ? (((/* implicit */int) arr_10 [i_1 + 3] [6ULL] [i_2 - 2] [(signed char)4])) : (((/* implicit */int) arr_10 [i_1 - 1] [7LL] [(_Bool)1] [i_1 + 2])))));
                        var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max(((((!(((/* implicit */_Bool) (signed char)83)))) ? (min((11098500051005395165ULL), (((/* implicit */unsigned long long int) (unsigned short)51630)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 - 1] [i_2 - 2]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_2 [7ULL] [i_1] [i_0])), (arr_9 [i_1 + 3] [i_2 - 2] [i_4 + 4] [i_4])))))))));
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0] [8LL] [i_0] [8LL])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_5 [i_0])), (arr_9 [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2])))) ? (((/* implicit */int) min((((/* implicit */short) arr_2 [i_0] [(signed char)9] [(signed char)9])), (arr_15 [(signed char)12] [i_0] [i_2] [i_4])))) : (((/* implicit */int) (short)-27369))))) : (min((35184372088831ULL), (((/* implicit */unsigned long long int) arr_7 [i_1 + 1] [i_2 - 2]))))));
                    }
                    arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)84)) ? (((int) arr_9 [i_0] [(unsigned char)8] [i_2] [i_0])) : (((int) var_11)))))));
                }
            } 
        } 
    } 
    var_24 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((long long int) max((17179869152LL), (((/* implicit */long long int) (signed char)-104)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-83)) ? (35184372088809ULL) : (((/* implicit */unsigned long long int) arr_19 [i_5] [i_5]))));
        var_26 = ((/* implicit */unsigned short) ((arr_19 [i_5] [i_5]) - (arr_19 [i_5] [i_5])));
    }
}
