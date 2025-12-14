/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 176936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=176936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/176936
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
    var_16 = ((/* implicit */_Bool) (-(var_6)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_5);
        arr_3 [i_0] = ((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_1 [i_0])))));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        var_18 -= ((/* implicit */short) ((int) (short)-30231));
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)49)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-5453)))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (!(((/* implicit */_Bool) var_4)))))));
    }
    for (unsigned int i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        var_21 *= ((/* implicit */signed char) 2771633616352385256LL);
        var_22 -= ((/* implicit */unsigned int) (-(max((arr_9 [i_2 + 1] [i_2 + 1]), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))))));
    }
    var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)30255)) ? ((-(((/* implicit */int) (short)-13694)))) : (((/* implicit */int) var_1))));
    var_24 = ((/* implicit */short) var_8);
}
