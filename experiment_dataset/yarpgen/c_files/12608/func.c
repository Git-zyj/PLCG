/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12608
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) || (((/* implicit */_Bool) var_10))))), ((+(((((/* implicit */_Bool) var_6)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
        var_21 = ((/* implicit */_Bool) max((max((var_16), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) ((unsigned short) var_15)))));
        arr_3 [i_0] = ((/* implicit */long long int) ((unsigned short) max((((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])), ((+(((/* implicit */int) var_17)))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_19))));
        arr_6 [i_1] = ((/* implicit */unsigned char) arr_4 [(unsigned char)1]);
    }
    var_23 += ((/* implicit */unsigned char) var_1);
}
