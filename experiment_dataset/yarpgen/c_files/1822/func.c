/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 1822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=1822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/1822
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [16LL] [i_0] [10ULL] = min((arr_4 [i_0] [i_0] [i_0]), (((unsigned int) arr_4 [i_0] [i_0] [i_0])));
                arr_6 [11] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51024))) / (3709970403647411823LL)));
                var_16 = ((/* implicit */short) (-((+(((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) var_2))))), (var_15))), (((/* implicit */unsigned long long int) ((_Bool) ((short) var_1))))));
    var_18 |= ((/* implicit */unsigned char) (((~(((/* implicit */int) min((var_4), ((unsigned short)51038)))))) & (((/* implicit */int) var_4))));
}
