/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18672
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((var_2), (-1349461562))), (((/* implicit */int) min((((/* implicit */short) var_1)), (var_13))))))) ? (min((((/* implicit */unsigned int) var_7)), (1154438921U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_7)))))));
        arr_5 [i_0] = ((/* implicit */int) ((long long int) (+(((/* implicit */int) (_Bool)0)))));
        arr_6 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) var_5)))));
    }
    var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (~(min((2147483616U), (((/* implicit */unsigned int) -1607782571))))))), ((-(min((2129616928938094097ULL), (((/* implicit */unsigned long long int) var_1))))))));
    var_16 = (~(var_2));
}
