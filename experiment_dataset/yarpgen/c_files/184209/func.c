/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184209
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((unsigned int) (~(((((/* implicit */_Bool) 4294967295U)) ? (3606045472U) : (0U)))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) min((0), (2147483647)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)19446), (((/* implicit */short) (_Bool)1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) - (4294967295U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4294967279U)))))));
    }
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)19467)) - (((/* implicit */int) (short)19446))))))))) * (((var_13) % (((/* implicit */unsigned long long int) 4294967294U)))))))));
    var_18 = ((/* implicit */_Bool) var_1);
    var_19 = var_6;
    var_20 *= ((signed char) min((max((4294967284U), (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) ((847972834U) >= (4294967295U))))));
}
