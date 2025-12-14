/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172185
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_13 = min((((long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (0ULL)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) var_6)) + (var_2)))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) max(((unsigned short)9972), (((/* implicit */unsigned short) (_Bool)1))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)40127)), (var_10)))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1 - 3])) < (((/* implicit */int) arr_1 [i_1 - 3]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 - 3]))))))))));
        var_15 = ((/* implicit */_Bool) min((((unsigned long long int) (-(0ULL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_1 - 1])) <= (((/* implicit */int) arr_1 [i_1 - 1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) arr_4 [i_1 - 1]);
    }
    var_16 = ((/* implicit */signed char) max((var_16), (((signed char) var_9))));
}
