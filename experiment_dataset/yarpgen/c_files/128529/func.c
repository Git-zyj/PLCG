/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128529
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((unsigned short) (-(((/* implicit */int) arr_0 [i_0] [i_0])))));
        arr_3 [(short)0] &= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((1126207241U), (((/* implicit */unsigned int) arr_0 [10LL] [2U]))))) ? (min((var_11), (((/* implicit */long long int) 3066577009U)))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)9424))))) >= (((/* implicit */int) arr_0 [i_0] [i_0])))))));
    }
    for (unsigned int i_1 = 4; i_1 < 15; i_1 += 2) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(arr_1 [i_1]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_10))))))) ? (min((arr_5 [i_1 - 2]), (arr_5 [i_1 - 1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 4])))))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (1228390286U) : (835370836U)))))))));
    }
    var_15 &= ((/* implicit */unsigned int) (signed char)6);
}
