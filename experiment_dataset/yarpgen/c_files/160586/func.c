/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160586
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
    var_14 = (((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (1706815613294964872ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((var_1), (var_5))), (var_5))))));
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535))))) << (((((/* implicit */int) var_3)) - (159))))))))));
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) var_7))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = 18446744073709551615ULL;
        arr_3 [i_0] = arr_1 [i_0];
    }
}
