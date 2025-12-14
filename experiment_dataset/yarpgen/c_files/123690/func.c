/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123690
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) ((_Bool) arr_0 [i_0]))), ((+(arr_2 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (unsigned short)30617)))) : (var_10))))));
        arr_3 [i_0] = ((/* implicit */short) var_12);
        var_20 = ((/* implicit */int) ((arr_2 [i_0] [i_0 + 2]) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775802LL))))) : (1711623503))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) 0ULL);
    }
    var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_9)) ? (((var_4) & (((/* implicit */int) var_17)))) : (((/* implicit */int) (short)-32767)))), (((int) ((((var_4) + (2147483647))) >> (((((/* implicit */int) var_3)) - (1917))))))));
}
