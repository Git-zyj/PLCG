/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117352
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
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = max((((/* implicit */unsigned int) arr_2 [3])), (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_4 [i_0])))) : (min((arr_5 [i_0] [i_1]), (((/* implicit */unsigned int) (_Bool)1)))))));
                var_12 = (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) : ((+(arr_5 [i_0] [i_1]))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_3);
    var_14 = ((/* implicit */unsigned long long int) var_1);
    var_15 = ((/* implicit */int) ((signed char) (-((~(((/* implicit */int) var_3)))))));
    var_16 = ((/* implicit */short) (-(var_10)));
}
