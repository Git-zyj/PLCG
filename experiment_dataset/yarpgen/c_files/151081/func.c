/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151081
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))) && (((/* implicit */_Bool) max((arr_1 [(short)1]), (((/* implicit */unsigned char) (_Bool)1))))))))) + (arr_0 [i_0] [(signed char)9])));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)49118))))) != (arr_0 [i_0] [i_0]))))) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) & (arr_0 [i_0] [i_0]))) + (((/* implicit */unsigned int) (~(var_3))))))));
        var_14 = ((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) (~(var_1)))) : (((var_7) & (((/* implicit */long long int) 38259872)))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((int) var_3))) : (max((arr_0 [i_0] [(unsigned char)9]), (arr_0 [i_0] [i_0])))))));
    }
    var_15 ^= ((/* implicit */unsigned short) max((((((/* implicit */int) var_0)) - ((~(((/* implicit */int) var_5)))))), (((((/* implicit */_Bool) (~(3LL)))) ? (((/* implicit */int) ((unsigned char) var_5))) : (((/* implicit */int) (_Bool)1))))));
    var_16 = ((/* implicit */signed char) ((((unsigned int) var_6)) ^ (((/* implicit */unsigned int) var_1))));
}
