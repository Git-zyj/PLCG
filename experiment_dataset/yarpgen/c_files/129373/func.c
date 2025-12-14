/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129373
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2199224150U)) ? (var_13) : (((/* implicit */long long int) ((var_12) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((int) var_2)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) -12))));
                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) arr_4 [i_0])) : (arr_3 [i_0] [i_0] [(unsigned char)11])))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_2 [i_0])) & (arr_1 [i_0])))) ? (min((((/* implicit */long long int) arr_2 [i_0])), (arr_1 [i_0]))) : (min((arr_3 [i_0] [6LL] [i_0]), (arr_1 [i_0]))))) : (((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_2)) : (arr_4 [i_0])))) : (arr_3 [i_1] [i_1] [3U])))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_0 [(short)15]))));
            }
        } 
    } 
}
