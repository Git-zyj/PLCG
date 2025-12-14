/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135381
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) ((max((5562665279460056133ULL), (((/* implicit */unsigned long long int) 8160718001653602009LL)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 1])) == (((/* implicit */int) arr_0 [i_0 + 2]))))))));
        arr_2 [i_0 - 2] [i_0 + 2] = ((/* implicit */int) ((_Bool) ((((/* implicit */int) ((-8160718001653601998LL) > (((/* implicit */long long int) ((/* implicit */int) var_9)))))) / (arr_1 [i_0 + 4] [i_0]))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned short)65523)))) >= (((/* implicit */int) arr_4 [i_1]))));
        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_5) : (max((((/* implicit */int) ((((/* implicit */int) (signed char)60)) <= (((/* implicit */int) (_Bool)1))))), (var_8)))));
        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (-((-(((/* implicit */int) arr_5 [i_1 + 1])))))))));
    }
    for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */int) (((-(7067001032277505393LL))) & (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2 - 1])))));
        var_16 = ((/* implicit */signed char) 4356379235128170007LL);
    }
    var_17 = var_10;
}
