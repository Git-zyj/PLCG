/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 178263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=178263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/178263
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
    var_14 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_3 [(signed char)8] [(short)18] = ((/* implicit */long long int) arr_1 [i_0 + 3]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1877456355)) ? (3410390328U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (unsigned short)65535))))) : (max((((((var_12) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [i_1])) - (45))))), (((/* implicit */long long int) (unsigned short)65533))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) var_4);
    }
}
