/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181270
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (-((~(((/* implicit */int) var_10)))))))));
    var_21 ^= ((/* implicit */int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) var_18))))));
    var_22 = ((/* implicit */unsigned short) min((var_22), (((unsigned short) (~(((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_17))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_1 [i_0 + 1] [i_0])), (var_1)))) ? (((((/* implicit */int) var_1)) & (((/* implicit */int) arr_0 [15LL])))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)20))))))) ? (((/* implicit */int) arr_0 [i_0])) : (max((-929916993), (((/* implicit */int) (unsigned short)17064))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_2 [i_0]) : (((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) & (arr_2 [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (arr_2 [(unsigned char)6]))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_1 [i_0] [8ULL]))))) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) var_4)) - (arr_2 [19])))))));
        var_24 -= ((/* implicit */short) var_2);
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_9)))) : ((-(((/* implicit */int) (signed char)-64))))));
    }
}
