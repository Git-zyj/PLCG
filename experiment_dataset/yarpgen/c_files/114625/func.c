/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114625
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
    for (signed char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_4 [14U] [i_0] = ((/* implicit */long long int) ((((max((var_8), (0U))) != (var_11))) ? (min((var_7), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))) : (var_4))))) : (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (0U) : (arr_1 [i_0 - 1] [i_0 - 3])))));
        arr_5 [i_0] = ((/* implicit */short) (signed char)32);
    }
    /* LoopSeq 2 */
    for (unsigned int i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        arr_10 [i_1] [i_1] = min((arr_9 [i_1 - 1]), (((((/* implicit */_Bool) arr_8 [i_1 + 3])) ? (arr_9 [i_1 + 2]) : (arr_9 [i_1 + 3]))));
        var_12 |= 2274190815U;
        var_13 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) var_1)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) 430057263U)) : (var_6))))), (((/* implicit */long long int) 539497901U))));
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), ((((!(((/* implicit */_Bool) arr_12 [i_2])))) ? (max((((unsigned int) var_2)), (arr_6 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 26U)) ? (4294967292U) : (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 530288723U)) ? (var_3) : (((/* implicit */long long int) 4046424506U)))))))))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) arr_8 [i_2]))) ? ((+(arr_11 [i_2]))) : (16383U)));
        arr_13 [i_2] = var_8;
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 17; i_4 += 1) 
            {
                {
                    var_16 |= ((((unsigned int) var_8)) & (((unsigned int) min((3233367424U), (var_2)))));
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_12 [i_3]), (((/* implicit */long long int) var_9))))) ? (arr_15 [i_2]) : ((+(arr_17 [i_4] [i_4])))));
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned int) max((var_18), (min((((unsigned int) max((2552944767U), (3852626338U)))), (min((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (signed char)32))))), (min((2020776480U), (var_4)))))))));
    var_19 = ((/* implicit */long long int) (+(var_2)));
}
