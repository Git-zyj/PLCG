/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120270
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
    var_12 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [3] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((short) var_6)))));
        var_13 = ((/* implicit */unsigned char) var_10);
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_1]), (arr_5 [i_1])))) ? (arr_5 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (short)6455))))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) arr_5 [(unsigned short)4])) || (var_10))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1]))) : ((~(arr_5 [i_1])))))));
        var_15 = ((/* implicit */int) ((min((((/* implicit */unsigned int) arr_3 [i_1])), (var_6))) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */short) arr_3 [i_1])))))))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_9)), (arr_5 [i_1])))) ? (((/* implicit */int) var_2)) : (((((/* implicit */_Bool) 131617162U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [i_1]))))))) ? (((((/* implicit */_Bool) ((signed char) var_2))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1])))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? ((+(((/* implicit */int) var_4)))) : (((/* implicit */int) ((_Bool) arr_5 [i_1])))))));
    }
    var_17 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_10))))));
}
