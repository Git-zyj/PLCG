/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 164249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=164249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/164249
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
    var_16 ^= ((/* implicit */unsigned long long int) var_4);
    var_17 = ((/* implicit */int) 3977380672U);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 7340032)) & (arr_1 [i_1 - 4])))) ? ((+(min((arr_3 [i_0]), (((/* implicit */unsigned long long int) 317586624U)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((317586624U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))))))))));
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) - (((var_13) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-123))))))))));
            }
        } 
    } 
}
