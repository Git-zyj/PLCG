/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 100295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=100295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/100295
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((arr_1 [i_1] [i_0]), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((var_2) > (((/* implicit */int) arr_3 [i_1])))))))) ? (8489193767842836480ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 3248703104451402978LL)) || (((/* implicit */_Bool) 1418582796))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_5 [i_0 + 2])) ? (3001096446U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 2]))))) != (((/* implicit */unsigned int) (+(max((2141075844), (((/* implicit */int) var_8)))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) var_2);
}
