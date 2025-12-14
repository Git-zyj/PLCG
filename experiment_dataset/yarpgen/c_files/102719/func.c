/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102719
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
    var_20 -= ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) 2549652516768935447LL)) ? (-1477960206198286602LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-48))))))))));
                var_22 = ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)58))))) >= ((+(((/* implicit */int) (signed char)-33)))));
            }
        } 
    } 
    var_23 = ((/* implicit */long long int) max((var_23), (((((/* implicit */long long int) 147614339)) - (-9087912786155891520LL)))));
}
