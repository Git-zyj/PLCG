/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114346
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) || (((/* implicit */_Bool) arr_2 [4ULL] [4ULL] [i_1])))) || (((/* implicit */_Bool) ((unsigned char) max((arr_0 [(short)15]), (var_5)))))));
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [(short)5])))))));
                arr_4 [(short)15] = ((/* implicit */long long int) 4294967295U);
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 3U)), (var_1)))) : (70093866270720ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((var_11) && (var_2)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_2)), (var_0)))) ? (((long long int) var_11)) : (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned int) var_15))))))));
    var_19 = ((/* implicit */short) var_4);
    var_20 = ((short) 17U);
}
