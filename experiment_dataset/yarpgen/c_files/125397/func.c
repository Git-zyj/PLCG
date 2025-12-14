/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125397
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
    var_15 = (_Bool)1;
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((long long int) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55311)))))), (((/* implicit */long long int) var_4))));
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (unsigned short)55311)) : (((/* implicit */int) (signed char)-109))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2124240076U)) ? (var_13) : (var_13)))) ? (((((/* implicit */int) (unsigned short)55315)) >> (((((/* implicit */int) (unsigned short)55311)) - (55285))))) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) ((_Bool) ((6808650710704860620LL) >> (((-6808650710704860620LL) + (6808650710704860627LL))))))) : (((/* implicit */int) var_8))));
}
