/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 184820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=184820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/184820
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
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((short) (short)14782)))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)38))));
                    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned char)0)) ? (arr_2 [i_0] [i_1 + 1]) : (((/* implicit */int) (_Bool)1)))))), (0ULL)));
                }
            } 
        } 
    } 
}
