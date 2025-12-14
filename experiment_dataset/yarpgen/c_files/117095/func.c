/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117095
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
    for (short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))))));
        var_15 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((arr_0 [i_0 - 1] [i_0 + 2]), (arr_0 [i_0 + 1] [i_0 + 2]))))));
        arr_2 [(unsigned char)3] = (~((+(((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0]))) : (arr_1 [i_0 + 1]))))));
    }
    var_16 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)))), ((-(((/* implicit */int) var_11))))))));
    var_17 = ((/* implicit */long long int) var_8);
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (min((var_5), (((/* implicit */unsigned int) var_1))))))) ? (max((((/* implicit */int) min((var_10), (var_10)))), (((((/* implicit */_Bool) var_4)) ? (var_12) : (((/* implicit */int) var_11)))))) : (max((var_9), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3))))))));
}
