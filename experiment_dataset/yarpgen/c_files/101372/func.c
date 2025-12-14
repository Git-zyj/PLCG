/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 101372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=101372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/101372
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 4; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
                    var_15 ^= ((/* implicit */unsigned int) (+(max((arr_2 [i_2 - 3] [(unsigned short)6]), (arr_2 [i_2 - 3] [0LL])))));
                }
            } 
        } 
    } 
    var_16 = -6235494425689090309LL;
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(max((4972252729632409317LL), (((/* implicit */long long int) (signed char)25)))))))));
}
