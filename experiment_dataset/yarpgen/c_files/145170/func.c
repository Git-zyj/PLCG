/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145170
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
    var_14 = ((unsigned int) max(((~(((/* implicit */int) (unsigned short)19996)))), ((-(((/* implicit */int) (signed char)60))))));
    var_15 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) max(((unsigned short)39038), ((unsigned short)14515))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) 58720256U)))))));
        var_17 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_18 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)15023))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)52762)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (max((var_7), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) max((-1856802943), (((/* implicit */int) (unsigned short)39057)))))))) | (((/* implicit */int) var_3))));
}
