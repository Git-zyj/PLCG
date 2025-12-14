/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171889
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
    var_16 = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) var_13)), (min((var_0), (((/* implicit */unsigned int) (short)18439))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [10LL] [10LL] [i_1] [i_2] = max((((((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2 - 2])) ^ (min((13150318444900103788ULL), (0ULL))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) var_13)))) & ((-(((/* implicit */int) (short)-31322))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = (+(((max((-1324220090), (((/* implicit */int) var_13)))) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
