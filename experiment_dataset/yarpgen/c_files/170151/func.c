/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170151
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 *= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) && ((!(((/* implicit */_Bool) var_10)))))))));
                arr_5 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)118))));
                var_20 = ((/* implicit */unsigned char) (+(min((((/* implicit */int) max((((/* implicit */short) var_18)), (var_3)))), (min((var_11), (var_1)))))));
            }
        } 
    } 
    var_21 |= ((/* implicit */int) ((min((((((/* implicit */long long int) var_17)) % (var_6))), (max((((/* implicit */long long int) var_13)), (var_0))))) * (max((((/* implicit */long long int) ((var_13) / (var_9)))), (min((var_2), (var_2)))))));
}
