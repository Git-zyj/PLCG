/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151400
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
    var_12 |= ((/* implicit */long long int) min((((/* implicit */int) var_2)), ((+((+(((/* implicit */int) var_5))))))));
    var_13 = ((/* implicit */_Bool) max((198847332U), (((/* implicit */unsigned int) (_Bool)1))));
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((var_3) + (9223372036854775807LL))) >> (((((long long int) 198847342U)) - (198847282LL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-29932))) >= (0U)))) : (((/* implicit */int) var_0))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_15 |= ((/* implicit */unsigned char) ((2229266620U) >> (((((unsigned int) var_5)) - (57U)))));
        var_16 = max((((/* implicit */long long int) ((_Bool) min((arr_1 [i_0] [i_0]), (var_2))))), (max((((/* implicit */long long int) (_Bool)1)), (((long long int) 1073741823U)))));
        var_17 = 1073741821U;
        var_18 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4294967277U), (arr_0 [i_0] [i_0])))) ? (((/* implicit */int) ((arr_0 [i_0] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))) : (((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned char)250))))));
    }
}
