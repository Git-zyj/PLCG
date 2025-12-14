/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182611
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
    var_10 = ((/* implicit */unsigned long long int) 3584434296U);
    var_11 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (-577861328) : (var_8)))) ? (((/* implicit */int) (unsigned short)23)) : ((-(((/* implicit */int) var_3)))))));
    var_12 = ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) var_9)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_4 [i_0] = ((/* implicit */int) (((!(arr_1 [i_0 + 1]))) ? (((long long int) (((_Bool)1) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) 2074575557U))))) : (((/* implicit */long long int) ((/* implicit */int) max((var_4), (((/* implicit */short) var_0))))))));
        var_13 |= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 2220391754U)) ? ((~(2220391739U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)199)))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) min((((/* implicit */long long int) (unsigned short)0)), (var_6)));
        var_15 = ((/* implicit */unsigned short) (unsigned char)48);
        var_16 = ((/* implicit */unsigned int) ((long long int) (unsigned char)205));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_0))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 18; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((signed char) arr_9 [i_2] [i_2]));
        var_19 = ((/* implicit */short) (~(((int) 690655641))));
    }
    var_20 &= ((/* implicit */long long int) var_3);
}
