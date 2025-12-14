/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188944
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
    var_14 = ((/* implicit */short) var_6);
    var_15 ^= ((/* implicit */int) (((+((+((-9223372036854775807LL - 1LL)))))) + (((((/* implicit */_Bool) ((long long int) 131071ULL))) ? (max((((/* implicit */long long int) (unsigned short)0)), (9223372036854775807LL))) : (((/* implicit */long long int) (-(var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */short) min((((unsigned long long int) arr_1 [i_0 + 1])), (((((/* implicit */unsigned long long int) (-(arr_2 [i_2] [i_2])))) % (((unsigned long long int) arr_6 [i_2] [i_0 + 1]))))));
                    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (+(131071ULL))))));
                    var_18 = ((/* implicit */int) arr_2 [i_1] [i_0]);
                }
            } 
        } 
    } 
}
