/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 10330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=10330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/10330
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
    var_13 *= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (7459913942210340322LL)))) - (var_8)))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((((/* implicit */unsigned int) ((/* implicit */int) (short)32749))) + ((-(1073479680U))));
        arr_4 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-951))));
        var_14 &= ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) var_11)), (max((((/* implicit */long long int) (_Bool)1)), (arr_2 [i_0]))))) ^ ((((-(arr_2 [(unsigned short)11]))) - (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))));
        arr_5 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_8 [12LL])) : (arr_6 [i_1])))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (!((_Bool)1))))));
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_10);
    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_10) << ((((~(((/* implicit */int) (_Bool)1)))) + (19)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((var_6) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) (unsigned short)55569)))))))));
}
