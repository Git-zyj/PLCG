/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104419
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
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_10 ^= ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (1792004444)))) != (((/* implicit */int) arr_0 [(unsigned short)6])))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(unsigned short)2])) : (((/* implicit */int) arr_0 [i_0])))) : ((-(((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) == (arr_2 [2ULL]))))))));
        arr_3 [i_0] = ((/* implicit */short) ((_Bool) ((_Bool) (signed char)-112)));
    }
    var_11 = ((/* implicit */unsigned long long int) 2147483647);
}
