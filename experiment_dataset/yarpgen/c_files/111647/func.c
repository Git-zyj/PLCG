/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111647
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
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((signed char) ((short) 2570724652U))))));
    var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (min((((/* implicit */long long int) (signed char)78)), (var_8))) : (max((8250613690684382646LL), (((/* implicit */long long int) (short)7866))))))) ? ((~(var_8))) : (((/* implicit */long long int) (((~(((/* implicit */int) (short)10469)))) ^ (((/* implicit */int) max(((short)-5901), (((/* implicit */short) (signed char)118))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-7866)) : (((/* implicit */int) var_6)))))) + (((/* implicit */int) min((arr_3 [(signed char)5] [i_0] [(signed char)5]), (arr_3 [i_0] [i_0] [i_1]))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (+(((var_11) ? ((-(arr_1 [i_0]))) : (max((((/* implicit */unsigned int) (short)32752)), (var_9))))))))));
            }
        } 
    } 
}
