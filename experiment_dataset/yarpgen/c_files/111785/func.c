/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111785
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
    var_18 = ((/* implicit */int) max((var_18), ((-(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)57216)) & (((/* implicit */int) (unsigned short)8319))))) ? (((/* implicit */int) (unsigned short)57216)) : (((((/* implicit */int) (unsigned char)244)) & (-1335021899)))))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_3))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0 + 1]) : (arr_3 [i_0])))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)2511))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((arr_7 [i_1]) / (((/* implicit */int) ((unsigned short) var_16))))) * ((-(((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */int) var_8)) : (arr_5 [0])))))));
    }
}
