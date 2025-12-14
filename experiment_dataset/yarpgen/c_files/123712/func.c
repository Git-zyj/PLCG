/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123712
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_19 -= ((/* implicit */unsigned short) arr_0 [i_0]);
                arr_5 [i_0] = ((/* implicit */int) var_14);
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) max((var_20), ((+(max((((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) var_10))))), (((((/* implicit */_Bool) (signed char)-16)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))))));
}
