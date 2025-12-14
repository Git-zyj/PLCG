/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141282
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141282 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141282
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
    var_14 = var_5;
    var_15 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */int) ((-479276724) <= (((/* implicit */int) (unsigned char)179))))) != ((+(((/* implicit */int) arr_0 [i_0 + 3]))))));
        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_1 [i_0 + 2]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (var_6)))))))));
        arr_2 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 137438953468ULL)) ? (((((/* implicit */int) (signed char)-16)) / (var_4))) : (((/* implicit */int) arr_0 [i_0 + 2]))))) >= (((((((/* implicit */_Bool) 7296245454070153740ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
    }
}
