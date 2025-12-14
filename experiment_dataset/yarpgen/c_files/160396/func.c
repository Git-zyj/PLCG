/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160396
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_10 += ((/* implicit */signed char) 166773490U);
        var_11 |= ((/* implicit */unsigned int) var_8);
        var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) (-(((var_0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (arr_3 [i_1]) : (arr_4 [i_3])))) : (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_8)))))));
                            var_14 = min((((/* implicit */long long int) ((166773493U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)231)))))), (min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */long long int) 166773490U)) : (arr_8 [i_1] [i_3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4128193801U))))))));
                            arr_13 [i_1] [i_1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (short)0))));
                        }
                    } 
                } 
                arr_14 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_10 [i_2])))) : (((arr_3 [i_1]) - (((/* implicit */long long int) arr_10 [i_2])))))) : ((-((-(arr_8 [10] [i_2])))))));
                var_15 = ((/* implicit */long long int) (-(166773481U)));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */long long int) (+(166773487U)))) - (((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))) - ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)169))))))))))));
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(166773490U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (short)5997))))) : (min((var_1), (((/* implicit */unsigned long long int) var_3)))))))));
}
