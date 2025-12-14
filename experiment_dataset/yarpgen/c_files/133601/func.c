/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133601
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)17))))) ? (((/* implicit */int) (signed char)104)) : (((/* implicit */int) var_9))));
    var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_2)), (max((1668249706U), (((/* implicit */unsigned int) (short)29117))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_2 [i_0 - 3] [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */int) (signed char)30)) % (((/* implicit */int) (short)8898))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((((/* implicit */int) (signed char)61)) > (((/* implicit */int) arr_2 [i_0] [i_0])))))))) : (max((max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned int) var_11)))), (arr_0 [i_0] [i_0])))));
    }
}
