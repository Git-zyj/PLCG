/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100888
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
    var_13 = ((/* implicit */short) var_12);
    var_14 = ((/* implicit */signed char) min((((unsigned int) (-(var_3)))), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_9))) & (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_12)) : (var_11))))))));
    var_15 *= ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? ((~(((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned long long int) var_0)))))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) (+((+(max((var_7), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (max((arr_0 [1ULL] [i_0]), (arr_0 [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))))) ? (arr_0 [i_0] [(signed char)13]) : (((/* implicit */long long int) (+(((int) var_5)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_2)) ? ((+(arr_0 [14ULL] [i_1]))) : (((/* implicit */long long int) arr_5 [i_1]))))))));
        var_17 ^= ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
    }
}
