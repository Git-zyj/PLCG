/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175420
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
    var_14 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned short)24188)), (18446744073709551615ULL)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) 9223372036854775805LL);
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1] [i_1])) ? (((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) 9223372036854775802LL)) ? (3625628024U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))))))) : ((((((+(-9223372036854775806LL))) + (9223372036854775807LL))) >> (((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)32749)))) - (32717)))))));
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 247996824))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_9)), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (9223372036854775805LL)))) ^ ((-(((/* implicit */int) var_4))))))));
}
