/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16329
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
    var_10 = ((/* implicit */unsigned int) var_0);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 11; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_1 [i_1 - 2] [i_1 - 3])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_4 [i_0]) : (((/* implicit */int) arr_5 [i_0]))))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0] [i_0])) : (arr_2 [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_4 [i_0]))) ? (arr_1 [i_1 - 1] [i_1 - 2]) : (((/* implicit */int) ((arr_2 [i_0]) > (((/* implicit */long long int) arr_4 [i_0]))))))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_2 [(short)7]) : (((/* implicit */long long int) arr_4 [i_0]))))))) ? (((/* implicit */long long int) arr_1 [i_0] [i_1])) : (((((/* implicit */_Bool) max((arr_1 [i_0] [i_1]), (((/* implicit */int) arr_3 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [(short)7] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) var_5);
    var_13 = ((/* implicit */long long int) ((unsigned char) var_8));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_2))));
}
