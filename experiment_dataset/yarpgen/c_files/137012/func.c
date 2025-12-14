/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137012
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)48832)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) : (((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0]))))));
        var_15 = ((/* implicit */int) ((unsigned long long int) arr_0 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) var_12))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) arr_5 [0U]))));
        arr_6 [i_1] = (-((-(((/* implicit */int) (short)17021)))));
    }
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_1))))))), (((unsigned long long int) ((((/* implicit */int) var_2)) > (((/* implicit */int) (short)-19002)))))));
}
