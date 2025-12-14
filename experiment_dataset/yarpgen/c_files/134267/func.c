/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134267
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_4 [i_1 - 2] [i_1 + 3]);
                    arr_9 [i_1] [(short)12] = min((((/* implicit */unsigned long long int) 1557205770U)), (((11752559081388912099ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(-4441678975356586387LL)))) + (((unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (38988840U) : (2496075199U))))));
}
