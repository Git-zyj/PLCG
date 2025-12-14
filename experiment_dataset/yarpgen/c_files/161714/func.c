/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 161714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=161714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/161714
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
    for (int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_16 *= ((/* implicit */short) max((((/* implicit */int) (unsigned char)174)), ((+(((/* implicit */int) arr_3 [i_2] [i_1] [i_2]))))));
                    arr_9 [i_0] = ((/* implicit */_Bool) (unsigned char)160);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (unsigned char)92);
    var_18 = ((/* implicit */long long int) (~(1523051123)));
}
