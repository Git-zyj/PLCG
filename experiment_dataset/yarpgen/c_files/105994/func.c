/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105994
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
    var_14 &= var_3;
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((2592456892411708289LL) + (arr_1 [i_0]))) : (((/* implicit */long long int) (-(398120897U))))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(var_10))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (1698019152) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (unsigned char)255))) << (((/* implicit */int) (_Bool)1)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_0 [i_0])) : (arr_1 [i_0]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35184)))))))))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_0])) ^ (arr_1 [i_0])))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)16706)))))))));
        var_17 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (unsigned short)10)), (arr_1 [i_0]))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (unsigned char)223)) ? (arr_0 [i_0]) : (3907978938U))))))));
        arr_3 [i_0] &= ((((/* implicit */_Bool) arr_1 [i_0])) && (((6777885618503956160LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)63))))));
    }
    var_18 = ((/* implicit */signed char) min((-179079227), (((/* implicit */int) (unsigned short)65516))));
    var_19 = ((/* implicit */unsigned int) min((var_7), (min(((short)-10374), (((/* implicit */short) (unsigned char)125))))));
    var_20 = ((/* implicit */unsigned int) var_13);
}
