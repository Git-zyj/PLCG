/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169348
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
    var_19 = ((/* implicit */unsigned long long int) var_5);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)150)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)28))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)132))))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)246)) == (((/* implicit */int) (unsigned char)150))))) : (((/* implicit */int) (signed char)-81)))))));
        arr_3 [22U] &= ((/* implicit */short) max((((/* implicit */long long int) (signed char)-1)), (var_18)));
        var_22 = (unsigned char)15;
    }
}
