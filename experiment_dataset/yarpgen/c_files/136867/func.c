/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136867
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
    var_14 = ((/* implicit */unsigned int) (~(4290772992ULL)));
    var_15 ^= ((/* implicit */long long int) (unsigned short)32766);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            {
                arr_7 [i_1 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3057784568U)) ? (1237182740U) : (3057784555U)))) ? (((/* implicit */unsigned long long int) max((3377699720527872LL), (((/* implicit */long long int) (unsigned char)93))))) : (4622762495060230612ULL)));
                var_16 ^= ((/* implicit */unsigned int) arr_2 [i_0] [i_1 - 2]);
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_6));
            }
        } 
    } 
}
