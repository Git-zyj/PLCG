/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112084
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
    var_11 |= ((/* implicit */long long int) var_8);
    var_12 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (max((var_9), (((/* implicit */unsigned int) var_3))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) arr_0 [i_0]);
        var_14 = ((/* implicit */int) ((max((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_3)))), ((~(((/* implicit */int) arr_1 [i_0] [i_0])))))) == (max((((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (unsigned short)65523))))), ((+(((/* implicit */int) var_2))))))));
        var_15 = ((/* implicit */unsigned short) 1204725972U);
        arr_2 [i_0] &= ((((/* implicit */_Bool) (~(((unsigned long long int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [(unsigned char)8] [i_0]))))) ? (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) arr_0 [i_0]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [(unsigned short)8])) : (var_8))))) : (((/* implicit */int) ((unsigned char) (unsigned short)65522))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        var_16 = ((/* implicit */int) var_2);
        var_17 ^= ((/* implicit */int) (-(min((((long long int) (signed char)-74)), (((/* implicit */long long int) arr_4 [6U]))))));
    }
}
