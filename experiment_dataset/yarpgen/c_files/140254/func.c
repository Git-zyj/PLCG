/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140254
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_13)) ? (8940386464808177919LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((/* implicit */long long int) var_15))))) != (max((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) max((arr_5 [i_0] [i_0]), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_2 [10LL])), (var_8)))))))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))) ^ (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)68))))))))));
            }
        } 
    } 
}
