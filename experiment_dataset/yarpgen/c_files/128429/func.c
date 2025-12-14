/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128429
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
    var_11 ^= ((unsigned int) ((var_1) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)16256)))))));
    var_12 = (signed char)-64;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)64)) ? (arr_3 [i_0] [i_0] [(unsigned short)0]) : (arr_3 [(unsigned short)4] [i_1] [i_1]))), (arr_3 [i_0] [i_1] [i_1]))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-56)) ? (((/* implicit */int) (signed char)-1)) : (((((/* implicit */_Bool) arr_0 [i_1])) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_1 [i_0] [6ULL]))))));
            }
        } 
    } 
}
