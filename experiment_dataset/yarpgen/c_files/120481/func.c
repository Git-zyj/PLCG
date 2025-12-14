/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120481
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned char)14] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-28792)), (((((/* implicit */_Bool) arr_3 [i_1] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) (unsigned char)99)) : (arr_3 [i_1] [i_1 + 2] [i_1 + 2])))));
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 + 1])) ? (min((((/* implicit */unsigned long long int) var_4)), (14ULL))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (14ULL) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (short)-28778)) : (((/* implicit */int) (unsigned char)215))))), (arr_4 [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_11);
    var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((int) -1)) : (((/* implicit */int) (_Bool)1))));
}
