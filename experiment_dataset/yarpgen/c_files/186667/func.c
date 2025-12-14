/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186667
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-((~(((-2797946774288121481LL) ^ (var_13))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) (unsigned short)43048);
        arr_2 [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2639892389U)));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */short) ((signed char) arr_3 [i_1] [i_1]));
        var_20 += ((/* implicit */signed char) var_4);
    }
}
