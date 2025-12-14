/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18223
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
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_17 -= ((/* implicit */signed char) arr_1 [i_0]);
                arr_5 [i_0] [i_1] = (~(((((/* implicit */long long int) ((/* implicit */int) var_7))) & (var_5))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_7)))))))) ? (((((/* implicit */_Bool) var_14)) ? (max((((/* implicit */long long int) var_10)), (var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    var_19 &= ((/* implicit */short) (~(((/* implicit */int) var_9))));
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_9))))))) ? ((~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_4))))) : (((/* implicit */long long int) var_12))));
}
