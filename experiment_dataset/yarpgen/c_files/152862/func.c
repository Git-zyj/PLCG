/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152862
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
    var_20 ^= ((/* implicit */short) min((max((((/* implicit */long long int) (-(var_1)))), (min((-2709950102575851703LL), (((/* implicit */long long int) (short)-26135)))))), (((/* implicit */long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-110))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) min((var_14), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2228374115U)))))));
                    var_22 = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */short) var_17)), (var_18))))));
                }
            } 
        } 
    } 
    var_23 |= ((/* implicit */unsigned long long int) var_7);
}
