/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104683
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
    var_17 += ((/* implicit */long long int) 0);
    var_18 = ((/* implicit */int) -4441234780578583711LL);
    var_19 = ((/* implicit */unsigned int) 4441234780578583711LL);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) var_2);
        arr_4 [i_0] = ((arr_1 [i_0]) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-96))))));
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_1 [16]))));
        var_21 *= ((/* implicit */unsigned long long int) -9084144239357561994LL);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(10197278210331211498ULL)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_7 [(signed char)16])) ? (((((/* implicit */_Bool) -4441234780578583703LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [(unsigned short)19]))) : (arr_5 [5]))) : ((~(var_9)))))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) - (((((/* implicit */_Bool) var_15)) ? ((-9223372036854775807LL - 1LL)) : (var_7))))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1]))))))))));
        var_23 = ((((/* implicit */_Bool) (unsigned short)49183)) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) 15)) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) var_12))))) / (var_7))) : (((/* implicit */long long int) (~(((((/* implicit */_Bool) -131072)) ? (((/* implicit */int) (_Bool)0)) : (-131051)))))));
    }
}
