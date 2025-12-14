/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182837
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
    var_20 = ((/* implicit */signed char) max((var_20), ((signed char)-22)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] = ((/* implicit */long long int) min((((((/* implicit */unsigned long long int) ((unsigned int) (signed char)-123))) * (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0] [(short)4]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (2259826201U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) arr_4 [(signed char)10] [i_1] [i_0 - 1])))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) min((arr_0 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1]))))) ? (arr_3 [i_1] [i_0] [i_0 - 1]) : (((((/* implicit */long long int) ((/* implicit */int) var_8))) | (arr_3 [i_1] [i_0] [i_0])))))));
            }
        } 
    } 
}
