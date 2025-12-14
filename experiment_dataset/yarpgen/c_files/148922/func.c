/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148922
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
    var_12 = ((/* implicit */short) max((min((((((/* implicit */_Bool) 2800322740U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_4))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */long long int) (unsigned char)0))))))), (var_5)));
    var_13 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (2004863092)))) ? (max((((/* implicit */unsigned long long int) -486797997)), (3515285894810953696ULL))) : (var_9))), (var_4));
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)65))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                arr_4 [(short)18] [(short)18] [i_1] = ((/* implicit */_Bool) arr_2 [i_0] [(_Bool)1] [i_1 - 1]);
                var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_11)), (var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24632)) ? (var_1) : (((/* implicit */long long int) 720334001U))))) : (max((var_4), (((/* implicit */unsigned long long int) (unsigned char)0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 3] [i_1])) : (((/* implicit */int) arr_0 [i_1 + 3] [i_1]))))) : ((-(((((/* implicit */_Bool) 14931458178898597905ULL)) ? (9493986065243282408ULL) : (14931458178898597899ULL)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_1);
}
