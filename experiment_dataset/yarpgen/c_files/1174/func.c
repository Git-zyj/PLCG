/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1174
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_17 += ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))));
        var_18 = ((/* implicit */unsigned int) arr_2 [i_0 - 1]);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_19 += ((/* implicit */short) (+((-(var_11)))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((_Bool) arr_0 [i_0 + 1])))));
        }
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (((((/* implicit */int) (unsigned char)70)) << (((((/* implicit */int) var_14)) - (167))))) : ((-(((/* implicit */int) arr_0 [i_0]))))));
    }
    var_22 = ((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_11)) : (var_2))) | (((/* implicit */long long int) (~(((/* implicit */int) var_13)))))))));
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((~(((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)43661))) : (var_8))))) : (((/* implicit */long long int) min((var_5), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_2))))))))));
    var_24 = ((/* implicit */unsigned long long int) var_4);
}
