/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119225
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
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_4))));
    var_15 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-101)) / (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((short) 4128768U))) : (((/* implicit */int) ((var_2) >= (((/* implicit */int) var_5))))))), (((/* implicit */int) var_10))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */_Bool) var_5);
                var_17 = ((/* implicit */int) (-(3308837379U)));
            }
        } 
    } 
}
