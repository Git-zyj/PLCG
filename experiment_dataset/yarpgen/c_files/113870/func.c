/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113870
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
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((unsigned int) (unsigned short)50544)) <= (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0])))))))))));
    }
    var_19 &= ((/* implicit */int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8557)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)-479))))) ? (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) (short)478))))), (((/* implicit */long long int) var_12))));
    var_20 &= ((/* implicit */int) var_6);
    var_21 += ((/* implicit */short) var_12);
    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_0)) : (var_4)))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13))));
}
