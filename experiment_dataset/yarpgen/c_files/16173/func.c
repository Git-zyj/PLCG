/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16173
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0] [i_0])) < (arr_0 [i_0])));
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)255)) ? (-233334341) : (((/* implicit */int) (unsigned char)240)))) % (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (9165447382142158535ULL))))));
        arr_5 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) 732521416)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((short) var_8)))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_20 = ((/* implicit */int) ((((var_17) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_7 [i_1])));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30)))))) > (arr_3 [i_1])));
        var_21 = ((arr_2 [i_1]) < (((/* implicit */int) arr_1 [i_1] [i_1])));
    }
    var_22 = ((/* implicit */unsigned long long int) ((var_18) | (var_18)));
    var_23 = min((((/* implicit */unsigned long long int) var_13)), (var_2));
}
