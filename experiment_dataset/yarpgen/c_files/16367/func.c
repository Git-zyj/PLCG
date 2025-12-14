/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16367
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */signed char) ((((/* implicit */int) min((max((var_5), (((/* implicit */unsigned short) (signed char)32)))), (((/* implicit */unsigned short) ((short) var_0)))))) << (((1152919305583591424LL) - (1152919305583591411LL)))));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) ((unsigned char) -1152919305583591425LL))), (min((8456484233233121985ULL), (((/* implicit */unsigned long long int) var_2)))))), (((/* implicit */unsigned long long int) -7899635808658460403LL))));
            }
        } 
    } 
    var_12 |= ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (var_10)))) * (min((((/* implicit */long long int) var_10)), (962072674304LL))))));
}
