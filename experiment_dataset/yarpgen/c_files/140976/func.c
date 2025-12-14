/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 140976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=140976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/140976
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
    var_19 = ((/* implicit */unsigned int) var_2);
    var_20 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) var_1))));
                var_22 = ((/* implicit */unsigned long long int) (-((+(max((arr_5 [i_0] [i_0]), (576425567931334656LL)))))));
                arr_6 [i_1] [i_1] [i_1] &= ((/* implicit */unsigned short) var_15);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) (!((_Bool)1)));
            }
        } 
    } 
    var_23 = ((/* implicit */short) var_8);
}
