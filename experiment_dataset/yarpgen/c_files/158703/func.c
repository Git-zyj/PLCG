/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158703
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
    var_20 = ((/* implicit */long long int) var_15);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) -4170578256814121474LL);
                var_22 = ((/* implicit */long long int) ((signed char) max((arr_1 [i_1]), (4170578256814121478LL))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((unsigned long long int) max((-9223372036854775807LL), (((/* implicit */long long int) (short)18610))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((unsigned int) 6533497327028217285LL))) : (max((var_14), (var_3)))))))))));
    var_24 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))))), (var_9)));
}
