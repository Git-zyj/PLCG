/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113140
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
    var_13 = ((/* implicit */signed char) (unsigned char)0);
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) >= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)18172)) : (((/* implicit */int) var_0))))), (10094893059716845726ULL)))));
    var_15 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */short) arr_3 [i_0]);
                arr_5 [i_1] = ((/* implicit */signed char) arr_0 [i_1 - 1]);
                var_17 = ((/* implicit */short) (signed char)-44);
            }
        } 
    } 
}
