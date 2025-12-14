/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150104
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1] [i_0] [i_1] = (+(min((((var_6) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) var_6)))), (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_2] [i_2 + 1])))));
                    var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) arr_4 [i_2] [i_2 + 1] [i_2 + 1])) ? (min((arr_4 [(unsigned short)14] [i_2 + 1] [i_2 + 1]), (arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]) | (arr_4 [(short)0] [i_2 + 1] [i_2 + 1])))))));
                    arr_8 [i_1] [i_1] [17LL] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_6 [i_0])) ? (max((((/* implicit */unsigned long long int) var_16)), (arr_1 [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [16ULL]))))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_5 [(signed char)2] [i_2 + 1] [i_2] [i_2])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) var_16));
}
