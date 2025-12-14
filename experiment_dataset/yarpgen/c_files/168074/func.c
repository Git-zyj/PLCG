/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 168074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=168074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/168074
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
    var_13 = ((unsigned char) var_9);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) min((var_2), ((unsigned char)94))))) ? (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */int) (short)-9054))))) ? (min((arr_1 [10U] [10U]), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned char)255)))))) : (min((arr_1 [i_0] [(short)4]), (((((/* implicit */_Bool) (short)3793)) ? (arr_1 [(unsigned char)8] [(unsigned char)8]) : (4942501932851039643LL)))))));
        var_15 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
        var_16 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), ((unsigned short)56331)))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) arr_0 [i_0])))) : (arr_1 [i_0] [(signed char)11]))) > (((/* implicit */long long int) max((((((/* implicit */_Bool) 2048554998U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (2246412297U))), (((/* implicit */unsigned int) (unsigned short)30071)))))));
    }
}
