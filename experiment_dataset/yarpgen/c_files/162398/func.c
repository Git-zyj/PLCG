/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162398
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
    var_17 = ((/* implicit */unsigned short) (unsigned char)227);
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_16))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_2)))) ^ (((((/* implicit */_Bool) (~(var_12)))) ? (((int) var_15)) : (((/* implicit */int) var_15))))));
    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((((/* implicit */unsigned int) ((min((var_13), (var_5))) ? (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)0)) : (var_4))) : (((/* implicit */int) ((unsigned char) var_2)))))), (((((/* implicit */_Bool) var_2)) ? (min((var_7), (63U))) : (((((/* implicit */_Bool) 55613761U)) ? (var_7) : (55613775U))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((+(((/* implicit */int) arr_1 [i_0])))) + (((/* implicit */int) ((signed char) ((((/* implicit */int) var_3)) & (var_0)))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((var_6), (((/* implicit */unsigned char) arr_0 [i_0]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
    }
    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned long long int) 0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (unsigned short)15)))))) : (((((/* implicit */_Bool) 798442109)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (45U))))))));
}
