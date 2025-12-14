/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 177870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=177870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/177870
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
    var_17 -= ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_16)), (var_14)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-42)))))))), (((/* implicit */int) var_15))));
    var_18 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_19 += ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) (short)7196))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (13246716000914960266ULL))));
        arr_2 [i_0] [i_0] = var_3;
        var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (max((((/* implicit */long long int) 49707782)), (arr_1 [i_0 + 2] [i_0]))) : (((long long int) (_Bool)1))));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)508)) ? (((/* implicit */long long int) var_5)) : (var_6)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (short)20082)), (min((((/* implicit */unsigned int) arr_3 [i_1])), (var_5)))))) : (var_11))))));
        arr_5 [i_1] = ((/* implicit */unsigned long long int) var_3);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_12))));
    }
}
