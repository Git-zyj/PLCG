/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186487
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
    var_11 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? ((~((~(var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_5))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (+((-(((/* implicit */int) var_7))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))));
    }
    var_14 = (((((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned long long int) var_10)) : ((+(var_0))))) & (((/* implicit */unsigned long long int) (-(var_4)))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (var_1) : (var_1)))))) ? (((/* implicit */long long int) (~((-(((/* implicit */int) var_8))))))) : (((((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) % (((/* implicit */long long int) ((((var_10) + (2147483647))) >> (((((/* implicit */int) var_7)) - (12398))))))))));
    var_16 += ((/* implicit */signed char) var_0);
}
