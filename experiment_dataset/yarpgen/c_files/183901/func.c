/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 183901
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=183901 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/183901
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
    for (signed char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [1U] = ((/* implicit */unsigned short) arr_9 [i_0 + 2] [i_1 + 2] [i_2 - 1]);
                    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (unsigned char)241))));
                    var_12 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) (unsigned char)233)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) (unsigned char)241)) != (((/* implicit */int) (unsigned char)241)))))) ? (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) (signed char)-7))) != (var_1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)(-127 - 1)), (var_0))))))))))));
    var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
}
