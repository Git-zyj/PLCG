/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12391
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_0) : (((/* implicit */int) var_13))))) ? ((+(var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_4)))))));
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9)))))));
    var_21 *= ((/* implicit */unsigned long long int) (-((-(var_18)))));
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_23 += ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_11);
    }
}
