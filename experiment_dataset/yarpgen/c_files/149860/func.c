/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149860
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
    var_14 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) min(((short)-543), ((short)-18873)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))))));
    var_15 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((-834816416), (((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) var_11)) : (max(((+(3297954206436014627ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 1) 
        {
            {
                arr_6 [13U] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((1791085540321250913LL), (((/* implicit */long long int) 2202063833U)))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) 2202063843U);
            }
        } 
    } 
}
