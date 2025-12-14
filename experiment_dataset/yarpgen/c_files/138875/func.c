/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138875
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
    var_20 = ((/* implicit */unsigned int) (+(((long long int) ((((/* implicit */_Bool) 13874156021756608191ULL)) ? (13874156021756608191ULL) : (((/* implicit */unsigned long long int) var_4)))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((signed char) (unsigned char)99)))));
    var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (var_16) : (((/* implicit */long long int) var_4))))) ? (var_7) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) -1608476632))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_4) != (((/* implicit */unsigned int) ((/* implicit */int) var_19))))))) : (((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */unsigned int) -1608476640))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) var_6);
                var_23 = ((/* implicit */unsigned long long int) var_0);
                arr_7 [i_0] [i_1] = var_8;
                arr_8 [13U] [13U] [13U] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1608476642)), (var_11)));
            }
        } 
    } 
}
