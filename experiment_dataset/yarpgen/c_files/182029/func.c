/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182029
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 0U)) ? (((((/* implicit */int) (unsigned char)238)) << (7U))) : (((/* implicit */int) arr_3 [i_1] [i_0])))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)0));
                arr_7 [(_Bool)1] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_2)))), (arr_3 [i_1] [i_0]))))) * (max((4294967288U), (4240469157U)))));
                arr_8 [i_0] [i_0] = ((/* implicit */signed char) (_Bool)0);
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) (~((-(((/* implicit */int) var_0))))));
}
