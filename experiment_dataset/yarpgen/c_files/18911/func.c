/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18911
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
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
    var_17 = var_2;
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_13)))) ? (var_2) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)0)), (4294967295U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1438223128)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (15U)))) : (max((((var_8) ? (var_13) : (((/* implicit */long long int) 2423394309U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -894463968)) ? (2883266318U) : (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = arr_1 [i_0];
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) 2423394309U)) ? (min(((~(((/* implicit */int) var_1)))), ((+(((/* implicit */int) arr_1 [i_0])))))) : (((/* implicit */int) arr_1 [i_0])));
        var_19 = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned int) max((min((((/* implicit */long long int) arr_1 [i_0])), (min((1632847946828260595LL), (((/* implicit */long long int) arr_1 [i_0])))))), (((/* implicit */long long int) arr_2 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2423394309U), (((/* implicit */unsigned int) 2134649456))))) ? (arr_0 [i_0]) : (arr_2 [i_0])));
    }
    var_21 = ((/* implicit */_Bool) min((((((((/* implicit */_Bool) var_13)) ? (var_13) : (((/* implicit */long long int) var_7)))) / (min((var_13), (((/* implicit */long long int) var_15)))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9)))), (((/* implicit */int) var_14)))))));
}
