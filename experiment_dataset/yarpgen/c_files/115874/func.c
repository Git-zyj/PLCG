/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115874
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) var_12)) < (((/* implicit */int) ((signed char) var_18)))))), (var_14))))));
    var_20 *= ((/* implicit */unsigned long long int) var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)29191)) ? (((/* implicit */int) (signed char)-16)) : (-1980697306)))));
                var_22 = ((/* implicit */int) ((_Bool) min((9562879508395216261ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))));
            }
        } 
    } 
}
