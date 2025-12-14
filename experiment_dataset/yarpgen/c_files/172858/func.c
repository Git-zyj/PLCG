/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172858
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
    var_13 = ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 233780435U)) + (var_9)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_1);
        arr_3 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((short) (short)22536)))) >= (-6877643342767881913LL));
        var_14 = ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_0])));
        var_15 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((/* implicit */long long int) ((12073899329774108803ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
    }
}
