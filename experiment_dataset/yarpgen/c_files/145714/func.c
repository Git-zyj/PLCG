/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145714
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
    var_14 = ((/* implicit */short) (-((-(((/* implicit */int) var_7))))));
    var_15 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)12383)) * (((/* implicit */int) (signed char)127)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0 + 2] [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */_Bool) -5360566435162902110LL)) ? (((/* implicit */unsigned long long int) var_11)) : (var_2))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_6))));
        var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)3968)) % (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(((var_11) - (((/* implicit */int) (_Bool)1))))))) : ((((-(arr_1 [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 2926737490U))))))));
        var_19 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (arr_1 [i_0 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8700)) * (((/* implicit */int) var_5))))) : (arr_0 [i_0 - 1] [i_0 + 1])))));
    }
}
