/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172519
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) (unsigned short)18883)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_21 = ((/* implicit */signed char) arr_0 [i_0]);
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0]))))) % (((arr_0 [i_0]) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
        var_23 *= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 1245278568U)) ? (((/* implicit */int) arr_0 [(unsigned short)10])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))));
    }
    var_24 = ((/* implicit */_Bool) var_14);
    var_25 -= ((/* implicit */signed char) (-(var_12)));
    var_26 = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) < ((~(var_5))))));
}
