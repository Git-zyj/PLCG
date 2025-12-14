/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148978
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
    var_11 = ((/* implicit */signed char) var_8);
    var_12 = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) (-(var_6)))) ? (((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) var_1))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0 + 2])) == (var_7)))), (arr_0 [i_0]))))));
        var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((var_7), (((/* implicit */int) arr_0 [(signed char)8]))))) | (min((arr_2 [i_0 - 1]), (((/* implicit */long long int) var_0))))));
        var_15 -= ((/* implicit */unsigned char) ((((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)0)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0))))))) >> (((((/* implicit */int) var_2)) - (35)))));
    }
}
