/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136036
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
    var_20 = var_18;
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((arr_2 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
        arr_5 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_0 [i_0] [i_0]) < (((/* implicit */long long int) var_19))))) << ((((-2147483647 - 1)) ^ ((-2147483647 - 1))))));
    }
}
