/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15379
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
    var_18 = ((/* implicit */signed char) var_9);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned short)0)) ? (arr_1 [i_0]) : (arr_1 [i_1]))), (((((/* implicit */_Bool) (+(var_8)))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)95))))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)27261))))))))));
            }
        } 
    } 
    var_20 += (!(((/* implicit */_Bool) var_14)));
    var_21 = ((/* implicit */long long int) 4294967295U);
}
