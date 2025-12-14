/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156420
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_3 [(unsigned short)17] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0] [14ULL]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_6)) * (((/* implicit */int) (signed char)-32))))))), (arr_2 [i_0])));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */short) min((((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) ^ (((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])))), ((((!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))) ? (((((/* implicit */int) arr_1 [i_0] [i_0 + 1])) & (((/* implicit */int) arr_1 [i_0] [i_0 + 1])))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-32)) < (((/* implicit */int) var_11)))))))));
        var_14 = ((/* implicit */unsigned short) var_2);
    }
    var_15 &= ((/* implicit */unsigned char) var_2);
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) ((var_11) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((int) var_9))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((((/* implicit */_Bool) var_3)) ? (((var_2) / (1770116234308041316LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != (var_9))))))))))));
}
