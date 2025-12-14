/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117431
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (max((((/* implicit */long long int) var_2)), (var_4)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) min((var_7), (var_5)))) : (((/* implicit */int) var_9)))) : (((/* implicit */int) var_2))));
    var_11 = ((/* implicit */short) min((var_11), (min((var_5), (var_0)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((short) min(((~(((/* implicit */int) var_7)))), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_7))))))))));
                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                var_14 -= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) min(((short)4094), ((short)22236)))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_2 [(short)12] [i_1] [(short)12]))))))) | (arr_3 [i_0] [i_1] [(short)2])));
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) arr_0 [i_0] [(short)9]))))) > (arr_3 [(short)8] [i_0 + 1] [(short)10])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) max((((/* implicit */long long int) (-(((((/* implicit */int) var_0)) & (((/* implicit */int) var_9))))))), (((max((var_1), (((/* implicit */long long int) var_9)))) | (((/* implicit */long long int) (+(((/* implicit */int) var_5))))))))))));
}
