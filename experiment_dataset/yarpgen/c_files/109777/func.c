/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109777
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
    for (signed char i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] &= max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0 - 1])) < (((/* implicit */int) var_0))))), (max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_9))), (max((((/* implicit */unsigned long long int) var_3)), (var_5))))));
        var_13 &= ((/* implicit */short) var_2);
        var_14 -= ((/* implicit */signed char) min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (261178587U)))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (((/* implicit */short) arr_1 [i_0 + 3] [i_0 + 3]))))))))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (((_Bool)1) ? (805306368U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) ^ (((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned short)27009)) - (26979)))))))) : ((-(var_6)))));
    }
    var_17 |= ((/* implicit */unsigned short) var_11);
}
