/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104513
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) (unsigned short)65535);
                var_16 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 941801253U)) ? (3353166042U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (max((((/* implicit */unsigned int) (signed char)46)), (var_11))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_1])) * (((/* implicit */int) var_14)))))))), (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (arr_4 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) var_0);
}
