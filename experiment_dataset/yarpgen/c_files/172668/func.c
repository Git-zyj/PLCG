/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172668
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
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 ^= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_0 [i_0] [(_Bool)1]))));
                var_13 ^= min((max((((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [(_Bool)1] [i_0 + 1])), (var_2))), (((/* implicit */unsigned long long int) ((arr_0 [i_0 - 3] [14ULL]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [(unsigned short)22] [i_0 - 1])))))));
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((unsigned short) ((unsigned int) arr_4 [(unsigned short)0] [i_1]))))));
            }
        } 
    } 
    var_15 |= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) 5U)), (-787853113564892165LL)))), (var_2)));
}
