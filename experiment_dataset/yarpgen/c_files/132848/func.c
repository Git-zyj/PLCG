/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 132848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=132848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/132848
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
    var_16 = var_0;
    var_17 = ((/* implicit */unsigned long long int) var_5);
    var_18 = ((/* implicit */unsigned int) ((var_10) ^ (((int) (-(var_10))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_19 = var_6;
                var_20 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)30)), (536346624)));
                arr_4 [i_0] [10] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1]);
            }
        } 
    } 
}
