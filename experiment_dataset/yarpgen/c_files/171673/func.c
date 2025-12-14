/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171673
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
    var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)162)) * (((/* implicit */int) var_1))))) & (((1152640029630136320LL) + (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? ((-(((/* implicit */int) var_1)))) : (((/* implicit */int) var_1))));
    var_14 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (-2076409981))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (var_10))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-2076409968) : (((/* implicit */int) var_0))))) ? (var_10) : (((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)162)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_8)))) <= (((((/* implicit */_Bool) var_4)) ? (2076409982) : (arr_0 [i_0] [i_0]))))))) : (min((5490021146857497110ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) / (-2076409968)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) var_12)))))));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_6 [(unsigned char)14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-16))) ^ (arr_3 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) (unsigned short)8765))));
    }
}
