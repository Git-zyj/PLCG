/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17581
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
    var_13 = ((/* implicit */short) ((var_8) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (-1) : (((/* implicit */int) (_Bool)0)))))))) ^ (((/* implicit */int) var_9))));
                arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((max((17592186044415ULL), (((/* implicit */unsigned long long int) arr_2 [i_1])))), (((/* implicit */unsigned long long int) arr_4 [(short)6] [i_1]))))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) != (var_12))))))));
                var_15 ^= ((/* implicit */signed char) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    var_16 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((signed char) (short)12))) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_3)), (var_10)))) : (17592186044424ULL)))));
}
