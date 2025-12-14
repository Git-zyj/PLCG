/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110084
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
    var_15 = ((/* implicit */unsigned short) (~(min((var_6), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) != (5360488876846408637ULL))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_2 [0U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(8459940764564906000LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 5360488876846408663ULL)))) : ((-(arr_0 [6U])))));
        arr_3 [(signed char)7] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */long long int) arr_0 [i_0]);
        arr_5 [i_0] = ((/* implicit */unsigned short) (~((+(arr_1 [i_0])))));
        arr_6 [(_Bool)1] = ((/* implicit */signed char) var_1);
    }
}
