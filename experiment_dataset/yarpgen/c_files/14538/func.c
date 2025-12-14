/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14538
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
    var_16 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8538769142431572190LL)) ? (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_6 [i_1] [(unsigned char)12]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_5 [i_0])))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((var_14) ^ (var_14))) : (((/* implicit */unsigned int) 18101061))))));
    var_20 = ((/* implicit */unsigned int) var_5);
}
