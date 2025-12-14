/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171345
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-124))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_20 = var_9;
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (unsigned short)28384))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */long long int) (~(var_8)))) != (8988815365977068649LL)));
    }
    var_22 = ((/* implicit */unsigned long long int) (unsigned short)15286);
    var_23 = (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : ((-(18446744073709551615ULL))));
    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(-1LL)))))))));
}
