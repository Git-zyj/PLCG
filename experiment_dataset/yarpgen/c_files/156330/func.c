/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156330
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
    var_13 ^= ((/* implicit */unsigned long long int) ((unsigned char) (~(var_0))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? ((-(arr_1 [i_0]))) : (17564741215175903242ULL))), (((/* implicit */unsigned long long int) (-(4294967295U))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */_Bool) (((+(((/* implicit */int) arr_6 [i_0 + 1] [7LL] [i_0 + 1])))) - (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0 - 1])))))));
            arr_8 [i_1] [18ULL] [18ULL] = ((/* implicit */unsigned long long int) (unsigned char)87);
        }
    }
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) var_1))));
}
