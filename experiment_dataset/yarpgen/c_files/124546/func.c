/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124546
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [9LL])) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_5 [i_0]))))));
                    arr_6 [(signed char)8] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [6LL] [(unsigned short)13] [i_0])) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))) * (((((/* implicit */_Bool) arr_4 [(signed char)2] [(signed char)2] [i_2] [i_2])) ? (arr_4 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) != (min((min((((/* implicit */unsigned long long int) var_1)), (281474976710655ULL))), (((/* implicit */unsigned long long int) var_4))))));
}
