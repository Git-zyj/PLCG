/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11252
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11252 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11252
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
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (_Bool)0)) >> ((-(-1LL))))) : ((~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (var_11))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (+(arr_2 [i_0] [i_1])));
                var_21 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0]))))));
                arr_5 [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_3 [i_0 - 2] [i_0 + 4] [i_0 + 4]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_19) <= (((/* implicit */unsigned long long int) -23LL))))))))) + ((+(((/* implicit */int) arr_0 [i_0]))))));
                var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))));
            }
        } 
    } 
}
