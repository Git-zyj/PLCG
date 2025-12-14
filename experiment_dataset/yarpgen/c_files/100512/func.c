/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100512
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */int) arr_2 [(short)8]);
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)136)) <= (((/* implicit */int) (unsigned char)120)))))));
                arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (arr_4 [i_0 + 1]) : (arr_4 [i_0 - 1])))) ? (((/* implicit */long long int) min((arr_4 [i_0 + 2]), (arr_4 [i_0 + 2])))) : (((long long int) arr_4 [i_0 + 1]))));
                var_18 = ((/* implicit */unsigned int) ((unsigned short) (signed char)-103));
            }
        } 
    } 
    var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
}
