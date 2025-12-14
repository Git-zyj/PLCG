/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138788
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
    var_10 += ((/* implicit */_Bool) var_5);
    var_11 = ((/* implicit */short) min((((/* implicit */long long int) ((min(((_Bool)0), ((_Bool)1))) && (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_1))))) ? (max((((/* implicit */long long int) 4294967287U)), (-8942449101978691517LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [20ULL] [i_0] = ((/* implicit */unsigned int) (signed char)-65);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_12 = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) (short)24406))))), (((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))) > (min((12324527663805524100ULL), (((/* implicit */unsigned long long int) 64421806U))))));
}
