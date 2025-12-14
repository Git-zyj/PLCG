/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187931
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
    var_15 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned int) min(((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (2558494790212892962LL))))), (((/* implicit */long long int) max((min((((/* implicit */int) var_10)), (var_9))), (((((/* implicit */int) (signed char)-5)) * (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])))))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) arr_1 [11LL]))) - ((-(((/* implicit */int) arr_0 [i_0]))))))) ? ((~(arr_3 [i_1]))) : (((/* implicit */int) (!(arr_5 [i_1] [i_0] [(_Bool)1]))))));
                var_17 *= ((/* implicit */long long int) (_Bool)1);
            }
        } 
    } 
    var_18 = ((/* implicit */short) var_1);
}
