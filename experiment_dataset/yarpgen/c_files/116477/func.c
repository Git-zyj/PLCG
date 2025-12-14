/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116477
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
    var_17 = ((/* implicit */signed char) var_0);
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1)))), ((-(var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((((/* implicit */unsigned long long int) var_7)), (var_4)))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) (-(((arr_0 [i_0]) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) max((var_11), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_8))) <= (var_15))))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) >= (((((/* implicit */_Bool) arr_1 [(short)13])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)31744))) : (var_15))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) max((arr_0 [i_0]), (arr_2 [(unsigned short)3]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : ((((_Bool)1) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
}
