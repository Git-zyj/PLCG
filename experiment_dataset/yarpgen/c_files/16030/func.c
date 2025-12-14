/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16030
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
    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + ((-(min((((/* implicit */unsigned int) var_1)), (4095U))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */int) var_4)) * ((-(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_0 [(signed char)8])))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (~(((arr_0 [i_0 + 2]) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) var_8))))));
        arr_3 [3U] [i_0 + 1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_4))));
    }
    var_15 *= ((/* implicit */_Bool) (((((((-(((/* implicit */int) var_7)))) + (2147483647))) << (((((/* implicit */int) var_7)) - (81))))) | (((/* implicit */int) ((short) var_6)))));
    var_16 = ((/* implicit */_Bool) var_6);
}
