/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113711
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
    var_12 = var_0;
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_1] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)30))))), (max((((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1]))))))));
                var_13 = ((/* implicit */_Bool) var_4);
                var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) & (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)30)))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0))))) : (var_7))))));
            }
        } 
    } 
}
