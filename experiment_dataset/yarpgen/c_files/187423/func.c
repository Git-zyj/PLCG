/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187423
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
    var_19 = ((/* implicit */int) var_0);
    var_20 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (var_8)))), (var_5))), (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) arr_3 [(_Bool)1])) ? (arr_0 [i_0] [i_0]) : (max((arr_3 [i_0]), (((/* implicit */unsigned int) var_14)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_1]), (var_1))))))))));
                var_22 = ((/* implicit */unsigned int) (unsigned short)30111);
            }
        } 
    } 
}
