/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138217
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
    var_17 = ((/* implicit */long long int) (unsigned char)74);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            {
                arr_7 [9ULL] [(_Bool)1] [9ULL] = ((/* implicit */signed char) max((((((/* implicit */_Bool) max((var_0), (((/* implicit */long long int) (short)32764))))) ? (min((((/* implicit */long long int) var_5)), (var_15))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1])))))));
                arr_8 [i_0] [(short)14] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [13LL]))))) % (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)85)) || ((_Bool)1)))))))));
            }
        } 
    } 
}
