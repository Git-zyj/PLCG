/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114034
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 9826292279315414266ULL))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) | (arr_1 [i_0] [(unsigned char)10])));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) var_0))));
        arr_3 [i_0] &= ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    var_16 = ((/* implicit */unsigned char) (signed char)64);
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (-(((/* implicit */int) min((((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))))), (var_3)))))))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_7))));
    var_19 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */unsigned long long int) var_2)) : (9826292279315414266ULL))) & (5680021913129917309ULL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) var_9)))));
}
