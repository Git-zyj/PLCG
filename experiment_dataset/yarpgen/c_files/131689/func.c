/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131689
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
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)2047))))), (((((/* implicit */_Bool) 3307722636899086369LL)) ? (31LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8128)))))));
                var_18 |= ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_13);
    var_20 = ((/* implicit */_Bool) min((max((((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (var_1))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -48LL)) ? (-23LL) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)51))))))))));
}
