/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184937
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
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) min(((unsigned short)40388), (((/* implicit */unsigned short) (signed char)94)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
    }
    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)43986)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_12))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_13))))))))));
    var_21 = ((/* implicit */unsigned short) (((!(((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (signed char)-94)))))) && (((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_17))))))));
}
