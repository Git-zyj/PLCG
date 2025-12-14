/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 104927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=104927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/104927
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
    var_18 += ((/* implicit */_Bool) min((791494088U), (max((791494084U), (((/* implicit */unsigned int) (signed char)124))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) ((unsigned char) arr_1 [i_0])))));
                    arr_8 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((arr_3 [i_0] [i_1] [i_0]) % (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)112)))))));
                    arr_9 [i_0] [i_0] [20ULL] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) max((791494088U), (791494089U)))) && (((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) arr_6 [i_1] [i_2])))))))), (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) / (6545450587291230879ULL)))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */_Bool) (+(((/* implicit */int) ((var_15) != (((/* implicit */long long int) var_5)))))));
    var_21 -= var_11;
}
