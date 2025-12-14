/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135060
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
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (var_16) : (var_10))) <= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_13)) : (var_0))))))));
    var_19 *= ((/* implicit */unsigned int) var_16);
    var_20 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((var_16) + (((/* implicit */unsigned long long int) -1113933071))))))) ? (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) + (min((var_8), (((/* implicit */unsigned long long int) var_12)))))) : (((/* implicit */unsigned long long int) var_14))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_0 [i_0]))));
        var_22 = ((/* implicit */long long int) ((unsigned long long int) var_11));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1])))))));
        var_24 -= ((/* implicit */unsigned int) ((unsigned short) arr_3 [i_1]));
    }
    /* vectorizable */
    for (unsigned int i_2 = 3; i_2 < 14; i_2 += 1) 
    {
        arr_8 [7U] = ((/* implicit */_Bool) arr_5 [i_2 - 2]);
        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (((var_0) | (((/* implicit */unsigned long long int) 290344826)))))))));
    }
    var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_16)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)127))));
}
