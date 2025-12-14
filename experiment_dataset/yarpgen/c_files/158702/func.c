/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158702
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) var_11))));
        arr_2 [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */long long int) arr_1 [i_0] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) var_0));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_17 += ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (var_10)));
        arr_9 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) arr_6 [i_1])) : (9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (arr_6 [i_1])))) ? ((+(((arr_6 [i_1]) & (((/* implicit */unsigned int) var_0)))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1])))));
        var_18 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
    }
    var_19 += ((/* implicit */unsigned int) min((((/* implicit */long long int) var_0)), (var_10)));
}
