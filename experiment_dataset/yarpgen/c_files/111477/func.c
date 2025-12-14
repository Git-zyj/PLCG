/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111477
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
    var_16 &= ((/* implicit */unsigned int) var_15);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((arr_3 [i_0] [i_1] [i_2]) ? (((/* implicit */long long int) (~(var_8)))) : (((arr_5 [i_0] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))))))));
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_1] [i_2]))))), ((-(0LL)))));
                }
            } 
        } 
    } 
    var_19 |= ((/* implicit */int) 67108863U);
}
