/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128918
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
    var_14 = ((/* implicit */signed char) var_2);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) arr_4 [i_1]);
                arr_5 [(_Bool)1] [i_0] = ((/* implicit */signed char) min((min((arr_1 [i_0 + 1]), (((/* implicit */unsigned short) var_5)))), (((/* implicit */unsigned short) var_7))));
                var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_1]), ((unsigned short)14149)))) ? (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)5))))) : ((-(9223372036854775807LL))))) : (((/* implicit */long long int) (-((-(((/* implicit */int) arr_0 [i_0 + 2])))))))));
            }
        } 
    } 
    var_17 = var_3;
}
