/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108537
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
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((long long int) var_1))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) ^ (((((/* implicit */_Bool) (unsigned short)49592)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)127)))))))))));
    var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_14))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)4096)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = (+(((/* implicit */int) (_Bool)1)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_20 = ((/* implicit */unsigned int) (!((_Bool)1)));
    }
    for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_21 = ((/* implicit */short) (signed char)51);
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) ((_Bool) (unsigned short)26072))) + (((/* implicit */int) (_Bool)1))))));
    }
}
