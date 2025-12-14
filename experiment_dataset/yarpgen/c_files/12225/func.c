/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12225
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
    var_19 = ((/* implicit */unsigned short) ((max(((~(((/* implicit */int) (signed char)38)))), ((+(((/* implicit */int) var_4)))))) * (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) (signed char)31)) : (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (min((((/* implicit */long long int) var_14)), (var_1))))));
        var_21 -= min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (var_10)))), (min((((/* implicit */unsigned long long int) 1850208985)), (13989665420050996652ULL))));
        var_22 = ((unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) ? (var_1) : (((/* implicit */long long int) var_10))))) && (((/* implicit */_Bool) max(((short)13818), (((/* implicit */short) (unsigned char)176)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
}
