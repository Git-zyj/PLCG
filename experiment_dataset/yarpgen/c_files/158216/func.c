/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158216
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
    var_11 -= ((/* implicit */signed char) min(((+(((/* implicit */int) var_5)))), (((/* implicit */int) (short)29185))));
    var_12 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */unsigned long long int) (~(var_8)))) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_9))))) : (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_6)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0] [(signed char)16]), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : ((+(arr_1 [i_0] [i_0])))))))));
        arr_2 [i_0] = min(((+((-(((/* implicit */int) arr_0 [i_0] [i_0])))))), (((/* implicit */int) var_5)));
        arr_3 [i_0] [(signed char)11] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) >= (3346256719U)))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) arr_0 [i_0] [(short)8]))));
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_8))));
}
