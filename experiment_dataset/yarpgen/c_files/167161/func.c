/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167161
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */int) var_2)) >= (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2))))))))))));
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (~(1046630192)))) ? (((((/* implicit */_Bool) (short)8536)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) -1516582554)))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (var_6) : (var_11))) | (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_14 = var_8;
                var_15 = ((/* implicit */short) (!(var_1)));
            }
        } 
    } 
}
