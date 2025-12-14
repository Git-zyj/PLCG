/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106835
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
    var_20 -= ((/* implicit */short) (-(((/* implicit */int) var_7))));
    var_21 |= ((/* implicit */_Bool) var_5);
    var_22 |= ((/* implicit */unsigned long long int) (-((~(((var_13) ^ (((/* implicit */int) var_1))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_23 = ((/* implicit */signed char) (-((+(max((var_11), (((/* implicit */long long int) arr_2 [i_0]))))))));
        var_24 = ((/* implicit */_Bool) max(((+(max((arr_1 [i_0]), (((/* implicit */unsigned int) var_2)))))), (((/* implicit */unsigned int) var_18))));
        arr_3 [i_0] [2U] |= ((/* implicit */unsigned char) var_9);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) >= (arr_4 [i_1])));
        arr_6 [(unsigned char)1] [(unsigned char)1] &= ((/* implicit */int) ((((arr_4 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11))))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : ((+(8ULL)))));
    }
    var_26 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */long long int) var_14)) - (8973857088279628372LL))), (((/* implicit */long long int) var_18))))) ? ((~(var_3))) : (((/* implicit */long long int) (-2147483647 - 1)))));
}
