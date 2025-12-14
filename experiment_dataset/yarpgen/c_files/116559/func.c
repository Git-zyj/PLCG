/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116559
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116559 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116559
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */long long int) var_5)), (var_8)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (4616710240325399293ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_12 ^= ((/* implicit */unsigned int) arr_0 [i_0 + 1]);
        arr_2 [i_0] [i_0 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) arr_0 [i_0 + 2])))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) <= (13830033833384152323ULL))) ? (min((1100219587U), (((/* implicit */unsigned int) (short)-14396)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) <= (4616710240325399293ULL))))))))));
        arr_3 [i_0] = ((/* implicit */short) min((min((13830033833384152321ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) (signed char)101)))) : (((/* implicit */int) (short)14263)))))));
    }
    var_13 = ((/* implicit */long long int) (-((~(min((((/* implicit */unsigned long long int) var_5)), (7272136046823058317ULL)))))));
    var_14 = ((/* implicit */short) var_8);
}
