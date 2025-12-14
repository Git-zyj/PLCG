/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 163536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=163536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/163536
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [13] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3)))));
        var_12 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) var_6))))) == ((-(var_2)))));
    }
    var_13 = ((/* implicit */signed char) (short)27896);
    var_14 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))))) & (max((var_5), (((/* implicit */long long int) 7U))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2115352908)))) * (((((/* implicit */unsigned int) var_2)) ^ (1572864U))))))));
    var_15 = ((/* implicit */unsigned long long int) (~(((min((var_11), (((/* implicit */long long int) -350886150)))) + (var_3)))));
}
