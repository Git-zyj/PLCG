/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128216
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_7)))) ? (var_8) : (((((/* implicit */_Bool) (unsigned short)23168)) ? (((/* implicit */int) arr_0 [i_0])) : (-531616184)))))));
        var_10 = ((/* implicit */unsigned char) ((max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
    }
    var_11 = ((/* implicit */unsigned long long int) min((var_11), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3)))))));
}
