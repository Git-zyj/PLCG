/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109084
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
    var_13 = ((/* implicit */short) min((var_10), (((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) < (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_5))) ? (min((max((var_12), (((/* implicit */unsigned long long int) var_0)))), (min((var_4), (((/* implicit */unsigned long long int) (signed char)-15)))))) : (((/* implicit */unsigned long long int) max((((var_10) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-15)) ? (3244340900U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */short) (signed char)15);
        var_16 = ((/* implicit */unsigned int) (-(min((((/* implicit */int) arr_0 [i_0])), (arr_3 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((var_0) >= (397531236U))))));
        var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
    }
}
