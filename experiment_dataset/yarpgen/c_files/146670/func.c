/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 146670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=146670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/146670
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (-9) : (((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))))) ? ((-(27))) : (((/* implicit */int) ((unsigned char) var_8)))));
        arr_4 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_0] [i_0])), (var_1)))) ? (max((var_3), (((/* implicit */long long int) -4)))) : (((/* implicit */long long int) 1)))), (((/* implicit */long long int) arr_2 [i_0]))));
    }
    var_12 = ((/* implicit */signed char) -23);
    var_13 = ((/* implicit */long long int) var_9);
    var_14 &= ((/* implicit */long long int) ((short) var_0));
}
