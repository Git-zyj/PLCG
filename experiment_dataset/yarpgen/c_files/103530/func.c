/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103530
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
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_7))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_9))))))) & (((unsigned int) var_1))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) 2147483647);
        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-52))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) >= (-2147483630))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (1505234877U)));
        var_16 = ((/* implicit */long long int) ((arr_4 [i_1] [i_1]) > ((~(2789732418U)))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (var_1)));
    var_18 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned int) var_3)), (1505234883U))))) ? (((/* implicit */long long int) var_1)) : (var_2)));
}
