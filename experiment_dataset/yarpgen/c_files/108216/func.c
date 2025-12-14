/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108216
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
    var_10 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max((max(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_1))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) 33521664)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) (((~(1993797492470372610LL))) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)51))))))));
    }
}
