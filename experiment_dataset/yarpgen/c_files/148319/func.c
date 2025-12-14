/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148319
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_0 [i_1]);
                arr_5 [i_1] = ((/* implicit */int) arr_0 [i_1]);
                var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_0 [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (arr_1 [i_0])))) ? (((/* implicit */unsigned int) arr_1 [i_1])) : (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_2 [i_0] [i_1]))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) var_11)), (var_14))), (((/* implicit */unsigned long long int) ((signed char) (unsigned char)128)))))) ? (var_2) : (((/* implicit */unsigned int) max((((/* implicit */int) var_4)), ((~(((/* implicit */int) var_10)))))))));
}
