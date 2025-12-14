/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100422
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
    var_13 = (!(((/* implicit */_Bool) ((max((((/* implicit */long long int) (_Bool)1)), (-7465166845291374017LL))) << (((((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) var_7))))) - (224)))))));
    var_14 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) var_0)), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */signed char) max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)1))));
                    var_16 -= ((/* implicit */unsigned char) min((2054978346958880034LL), (((/* implicit */long long int) max(((unsigned char)1), (((/* implicit */unsigned char) (_Bool)0)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) var_0)) != (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-20))))))))));
}
