/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112016
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
    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3678143561334631910LL)) ? (var_8) : (((/* implicit */unsigned long long int) 4294967275U))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) var_1);
                arr_5 [i_0] [i_1 + 2] [i_1 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) (signed char)-35))))), (max((arr_1 [(_Bool)1]), (((/* implicit */long long int) (signed char)14))))))) ? (min((((/* implicit */unsigned long long int) arr_3 [i_1 + 3] [i_1 + 1])), (max((((/* implicit */unsigned long long int) var_3)), (var_9))))) : (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) arr_2 [i_0] [(short)0])) : (2354654449U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [13]))) <= (var_9)))))))));
                var_12 ^= ((/* implicit */_Bool) (~(min((((/* implicit */long long int) arr_3 [i_0] [i_1])), (var_6)))));
                var_13 = ((/* implicit */int) (-(((long long int) arr_2 [i_1 + 4] [i_1 - 1]))));
            }
        } 
    } 
}
