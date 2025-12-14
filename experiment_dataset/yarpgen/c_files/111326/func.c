/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111326
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
    var_16 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? ((+(((/* implicit */int) var_5)))) : (max((var_9), (((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [14U] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) arr_4 [i_0] [i_1] [i_1 + 1])), (((((/* implicit */_Bool) var_7)) ? (arr_1 [i_1]) : (592431849474489308LL)))))));
                arr_6 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) 14050580895969372032ULL))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) arr_3 [i_0] [i_0] [(short)1]))))))), ((-(((long long int) arr_2 [i_1] [i_1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_11);
}
