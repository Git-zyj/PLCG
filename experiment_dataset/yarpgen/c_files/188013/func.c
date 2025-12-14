/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188013
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */short) max((max((((/* implicit */long long int) max((var_8), (var_13)))), (arr_1 [i_2] [i_2]))), (((/* implicit */long long int) min(((~(((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_2])) || (((/* implicit */_Bool) var_13))))))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) -1LL)) ? (3138501357443229917LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)118))))), (((/* implicit */long long int) var_11))))) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_1] [i_1] [i_2])))))) : (((/* implicit */int) var_6))));
                    var_17 = ((/* implicit */short) arr_2 [i_0]);
                    var_18 = ((/* implicit */short) min((max((((/* implicit */long long int) arr_2 [i_0])), (max((((/* implicit */long long int) var_7)), (arr_6 [i_0] [i_1]))))), (((/* implicit */long long int) arr_0 [i_0]))));
                }
            } 
        } 
    } 
    var_19 = var_1;
}
