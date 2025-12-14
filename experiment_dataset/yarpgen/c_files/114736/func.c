/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114736
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))))) ? (((/* implicit */int) max((((/* implicit */short) var_8)), (arr_2 [i_0])))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)-19444)) & (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_2 [i_0]))))))) : (((((/* implicit */_Bool) ((long long int) arr_2 [i_0]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1))))) : (max((var_9), (((/* implicit */unsigned int) arr_2 [i_0]))))))));
        arr_4 [i_0] = ((/* implicit */long long int) 4294967295U);
        arr_5 [12U] [i_0] = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12495))) : (arr_0 [3U]))) < ((+(arr_0 [i_0]))))))));
    }
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)56)), (-1)))) ? (min((var_11), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) && (((/* implicit */_Bool) var_10)));
    /* LoopNest 2 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        for (short i_2 = 2; i_2 < 11; i_2 += 4) 
        {
            {
                arr_11 [i_1] [i_2] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)12494))))))))));
                var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)53054)) ? (arr_9 [i_2 - 2]) : (((/* implicit */long long int) var_1))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_1)) ? (9223372032559808512LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53041))))) : (((/* implicit */long long int) ((/* implicit */int) min((var_8), (var_7)))))))) ? (((/* implicit */int) (unsigned short)59465)) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)44612))))), (var_14))))));
}
