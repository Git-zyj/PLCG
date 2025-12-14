/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 129931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=129931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/129931
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) (_Bool)1);
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(var_0))))));
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0] [i_0]))))))));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        var_20 = ((/* implicit */_Bool) (signed char)124);
        arr_6 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) (_Bool)1))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_5), (((/* implicit */short) arr_0 [i_1] [i_1]))))))))));
        arr_7 [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) - (var_12)))), (((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) + (min((var_3), (((/* implicit */unsigned long long int) (signed char)103)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), ((-(((unsigned long long int) var_15))))));
    var_22 = ((/* implicit */long long int) ((unsigned short) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)217)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_14))))));
}
