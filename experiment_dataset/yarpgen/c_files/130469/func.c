/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130469
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
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */long long int) var_3)) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)20450)) : (((/* implicit */int) var_8))))) ? (-101807297956405961LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33357))) <= (-6062671643242514616LL)));
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min(((unsigned short)45091), (((/* implicit */unsigned short) var_5))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_4))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 2])) ^ (((/* implicit */int) arr_8 [i_0 + 2] [i_0 - 1] [i_0 + 3] [i_0 + 2]))))) ? (((/* implicit */int) (unsigned short)20450)) : (((((/* implicit */int) arr_8 [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1])) ^ (((/* implicit */int) var_10))))));
                        var_18 |= ((/* implicit */unsigned int) ((signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20474)) ? (arr_5 [i_0 + 2] [i_1] [i_0 + 2]) : (((/* implicit */long long int) arr_9 [i_0] [(signed char)12] [i_2] [i_3]))))), (min((((/* implicit */unsigned long long int) (unsigned short)45094)), (var_11))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 2) 
                        {
                            var_19 ^= ((/* implicit */long long int) var_12);
                            var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_4 [i_0] [i_0 - 1]) != (arr_4 [(signed char)5] [i_0 + 2]))))));
                        }
                        arr_15 [(unsigned short)17] [1U] [4LL] [i_3] |= ((/* implicit */unsigned short) (-(((/* implicit */int) (signed char)127))));
                    }
                    var_21 = ((/* implicit */long long int) arr_0 [13U]);
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned int) min((arr_14 [i_0] [20LL] [i_0] [15LL] [i_0]), (((/* implicit */long long int) arr_9 [i_0] [12LL] [i_0 - 2] [i_0]))));
        var_23 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0 - 2] [i_0])) ? (arr_6 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0 - 1] [i_0] [(unsigned short)14]))))), (arr_6 [(unsigned short)20])));
        arr_16 [i_0] = ((/* implicit */long long int) (unsigned short)45073);
    }
    var_24 ^= var_2;
}
