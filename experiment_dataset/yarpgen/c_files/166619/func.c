/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166619
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) 2877938939U));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned short) ((unsigned int) (~(var_2))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-9875)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60362))) : (((((/* implicit */_Bool) (unsigned char)237)) ? (-7749693472454966755LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2742997493U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))))))))));
        var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_1] [i_1]))));
    }
    var_21 &= ((/* implicit */signed char) (-(((/* implicit */int) var_15))));
    var_22 ^= ((/* implicit */unsigned short) var_13);
}
