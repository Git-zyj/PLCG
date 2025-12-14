/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11082
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
    var_13 = ((/* implicit */unsigned int) (~(((long long int) var_9))));
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)109)) || (((/* implicit */_Bool) (signed char)125)))) && ((!(((/* implicit */_Bool) -139154589578510104LL))))))))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) (+((+((+(((/* implicit */int) arr_1 [(signed char)2] [i_1]))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (short)-23269);
                var_16 -= ((/* implicit */short) (_Bool)1);
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (_Bool)1))));
}
