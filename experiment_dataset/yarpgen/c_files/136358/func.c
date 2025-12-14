/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136358
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
    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) max(((unsigned short)45424), ((unsigned short)20133)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) ((var_17) != (((/* implicit */unsigned int) arr_1 [i_0]))));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) 67108848)) - (((((/* implicit */_Bool) 67108848)) ? (arr_0 [i_1]) : (arr_0 [i_0]))))), (((((((/* implicit */int) (signed char)-6)) >= (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [8ULL] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) : (2630525320U)))) : (arr_0 [i_1 - 1])))));
            }
        } 
    } 
}
