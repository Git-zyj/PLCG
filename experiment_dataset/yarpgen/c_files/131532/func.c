/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131532
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
    var_15 = min((((unsigned int) var_4)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_1 - 2]);
                var_17 = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) 1244957251);
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))));
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1219511035)))))));
}
