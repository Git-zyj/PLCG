/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145267
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
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) max((var_9), (((/* implicit */short) (signed char)3)))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (signed char)83)) ? (0) : (1943025855)))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) var_6)) >= (((((/* implicit */_Bool) (+(((/* implicit */int) var_16))))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-60)))) : ((~(((/* implicit */int) var_6)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) var_13))));
    }
    for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) ((unsigned short) 8157183579046404454ULL))), (arr_7 [i_1] [i_1])));
        var_22 = ((/* implicit */int) (+(((unsigned long long int) ((arr_5 [i_1]) - (((/* implicit */unsigned long long int) arr_1 [i_1 + 1])))))));
    }
    var_23 = ((/* implicit */short) var_2);
}
