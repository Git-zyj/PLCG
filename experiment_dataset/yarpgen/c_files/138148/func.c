/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138148
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (signed char)47))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19685))) <= (arr_0 [i_0] [i_0]))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_2 [i_0]), (arr_2 [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_3 [i_0])), (((signed char) var_10)))))) : (((var_0) / (((unsigned long long int) (_Bool)1))))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_2 [i_0])))) + ((~(((/* implicit */int) (unsigned short)64649))))))) <= (var_1)));
    }
}
