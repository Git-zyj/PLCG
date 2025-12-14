/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128877
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
    var_14 = ((/* implicit */unsigned long long int) (-(var_6)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0])), ((short)17132)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_0]))))))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) var_13);
        arr_5 [i_0] = -7571839787239320085LL;
    }
    var_15 = ((/* implicit */signed char) ((unsigned long long int) (~(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))))));
}
