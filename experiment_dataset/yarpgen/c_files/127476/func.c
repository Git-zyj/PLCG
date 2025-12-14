/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 127476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=127476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/127476
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned char) arr_2 [i_1]);
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (!((_Bool)1)))), (min((((/* implicit */unsigned short) var_3)), ((unsigned short)55646)))))) ? ((-(var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-15))) + (var_5)))) ? (((-7022573148917326242LL) + (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */long long int) 3962452591U))))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0 - 1]);
                arr_8 [10U] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_1])) && (((/* implicit */_Bool) var_2))));
                arr_9 [i_0] [(unsigned short)1] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (arr_3 [i_0] [i_0] [i_0]))));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) var_9))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16769024)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_0))))) % (((7022573148917326242LL) % (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) : ((-(min((var_1), (((/* implicit */unsigned long long int) var_11))))))));
}
