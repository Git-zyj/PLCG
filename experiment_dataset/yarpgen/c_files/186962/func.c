/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 186962
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=186962 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/186962
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_5 [i_1] [i_1] [i_2]), (arr_5 [12U] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_1])), (arr_1 [i_0]))))) : ((+(arr_2 [i_1])))));
                    arr_9 [i_1] [16] [16] = ((/* implicit */_Bool) (((+(((((/* implicit */int) (unsigned short)32781)) + (((/* implicit */int) (_Bool)1)))))) + (var_2)));
                    var_19 ^= ((/* implicit */short) (+(((int) arr_7 [i_2]))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */_Bool) var_7);
    var_21 = ((/* implicit */unsigned short) (+(max((((/* implicit */int) var_17)), ((~(((/* implicit */int) var_15))))))));
}
