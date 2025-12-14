/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112266
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned short)37012), ((unsigned short)28534)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_0])), ((-(((/* implicit */int) (unsigned short)28524))))))) : (((((/* implicit */_Bool) (-(arr_1 [i_0])))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
        var_14 -= ((/* implicit */unsigned int) arr_1 [(unsigned short)12]);
        var_15 ^= ((/* implicit */unsigned char) 4294967267U);
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) (unsigned short)37000))));
    }
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) var_13))));
}
