/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118806
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
    var_14 |= ((/* implicit */long long int) (-(((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-41))) % (((((/* implicit */_Bool) (signed char)-36)) ? (((((/* implicit */_Bool) var_6)) ? (var_5) : (arr_4 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
                var_16 -= ((/* implicit */unsigned short) 734854927U);
            }
        } 
    } 
    var_17 -= ((/* implicit */unsigned int) (((~(((/* implicit */int) var_10)))) | (((((/* implicit */int) (signed char)(-127 - 1))) ^ (((/* implicit */int) (unsigned short)16))))));
    var_18 |= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */long long int) 4294967295U)) : (-928050186103439703LL))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)38224))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)96)) && (((/* implicit */_Bool) var_4))))))))));
}
