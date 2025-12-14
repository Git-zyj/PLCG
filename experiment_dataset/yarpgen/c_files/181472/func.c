/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181472
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
    var_10 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_8) : (((/* implicit */long long int) min((((unsigned int) var_5)), (((/* implicit */unsigned int) (unsigned char)255)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967292U)) ? (4U) : (4294967292U)));
        var_11 ^= ((/* implicit */signed char) arr_0 [i_0] [i_0 + 1]);
        var_12 = ((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1]))));
    }
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) 4U)) : ((-(var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(var_9)))))) : (((((/* implicit */_Bool) var_4)) ? (min((10U), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    for (int i_1 = 2; i_1 < 11; i_1 += 4) 
    {
        arr_8 [i_1 + 4] = ((/* implicit */unsigned short) max((arr_1 [i_1 - 1]), (((/* implicit */int) arr_3 [i_1 - 2] [i_1]))));
        var_14 = ((/* implicit */_Bool) 4294967292U);
    }
}
