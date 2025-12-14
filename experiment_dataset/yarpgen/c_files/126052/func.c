/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126052
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
    var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) >> ((((-(var_10))) - (7360479589447631551ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_7)))) > (((7443144110492588415ULL) ^ (var_10)))))) : (((/* implicit */int) (!(var_9))))));
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (var_0)));
    var_14 &= ((/* implicit */short) min((var_11), (var_11)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-81)) && (((/* implicit */_Bool) (unsigned short)3288))));
                var_16 = ((/* implicit */long long int) 7443144110492588406ULL);
            }
        } 
    } 
}
