/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136543
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
    var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) || (((/* implicit */_Bool) var_7)))) ? (((min((var_8), (((/* implicit */unsigned long long int) (unsigned short)21806)))) << (((((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) - (1203813369U))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) var_1))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)179)))))))) ? (10435759639593407867ULL) : (((/* implicit */unsigned long long int) (+(2549998894U))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0 + 3] [i_0] [i_1] = min((((/* implicit */int) arr_5 [(short)8] [(short)8])), (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) arr_0 [i_1 - 1])))));
                arr_7 [i_0 + 1] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) var_11)) < ((~(((/* implicit */int) (unsigned short)43720)))))))));
            }
        } 
    } 
}
