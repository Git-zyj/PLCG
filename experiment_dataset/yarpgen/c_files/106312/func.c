/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106312
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
    var_19 = max((min((((((/* implicit */_Bool) 1580815519068071436LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-17284))) : (-7573718112722796589LL))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)145))))))), (((/* implicit */long long int) (short)-7050)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) min((max((13158096173076708113ULL), (((/* implicit */unsigned long long int) 1604915922U)))), (((/* implicit */unsigned long long int) max((arr_3 [i_0] [i_1 - 1]), (((/* implicit */unsigned short) var_1)))))));
                var_20 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)136)), (var_14)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_18)) : (var_8))) : (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 140737488347136LL)) ? (max((((/* implicit */unsigned long long int) (unsigned char)129)), (17172370598314875511ULL))) : (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0])))))));
            }
        } 
    } 
}
