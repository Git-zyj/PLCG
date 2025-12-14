/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134820
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
    for (long long int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_3)), ((short)15821)))) ? (((/* implicit */int) min(((unsigned char)7), (var_10)))) : (((((/* implicit */_Bool) ((var_7) - (((/* implicit */int) (unsigned short)23568))))) ? (((/* implicit */int) min((((/* implicit */short) var_5)), (arr_1 [i_0])))) : (-1704130166)))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) (unsigned short)23568));
        var_12 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_0 [i_0] [i_0 + 2])))) ? (((((/* implicit */_Bool) 520043951U)) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) var_10)))) : (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) arr_2 [i_0 + 1]))))));
    }
    var_13 |= ((/* implicit */int) ((long long int) var_0));
    var_14 = ((/* implicit */unsigned int) min((var_14), (min((((/* implicit */unsigned int) var_6)), (var_2)))));
}
