/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183182
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
    var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (var_2) : (0LL)))))) : (var_14)));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2145386496U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8695))) : (var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_14)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8)))) ? (((/* implicit */long long int) (+(max((3997247809U), (((/* implicit */unsigned int) arr_5 [3U] [10LL] [11LL]))))))) : (min((((/* implicit */long long int) 2149580799U)), ((-(var_14)))))))));
                    arr_7 [i_0] [i_2] [(short)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((-6427497484815455595LL), (((/* implicit */long long int) var_3))))) ? ((~(arr_0 [i_2 + 1]))) : (max((((/* implicit */long long int) var_6)), (arr_0 [i_2 + 1])))));
                    arr_8 [i_0] [i_2] [10U] [(unsigned char)12] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((2145386497U), (((/* implicit */unsigned int) (short)32767)))))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) var_5))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((long long int) var_9)))));
}
