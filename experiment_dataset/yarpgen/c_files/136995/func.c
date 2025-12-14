/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136995
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
    var_12 = ((/* implicit */unsigned short) max((var_2), (((/* implicit */signed char) ((((/* implicit */int) min(((short)256), ((short)-258)))) <= (var_0))))));
    var_13 += ((/* implicit */unsigned int) (+((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_11)) : (6787616760631644424ULL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_14 += ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)60))))));
                var_15 = ((/* implicit */signed char) max(((short)32269), (((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-15431)), (arr_0 [i_0] [6LL])))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_5);
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)126)) | (((/* implicit */int) (short)32247))))))) ? (((/* implicit */unsigned long long int) min((max((var_11), (((/* implicit */unsigned int) var_7)))), (((/* implicit */unsigned int) var_2))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))) ? (4097680121580630949ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */int) var_7)))))))));
}
