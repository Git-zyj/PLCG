/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173655
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
    var_11 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((var_3), (var_3)))), (((long long int) var_7)))))));
    var_12 = var_9;
    var_13 -= ((/* implicit */long long int) var_2);
    var_14 = ((/* implicit */int) ((signed char) min((((/* implicit */int) min((var_1), (var_10)))), ((~(((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [11LL] = ((/* implicit */short) max(((~((-(var_4))))), ((+(((/* implicit */int) ((unsigned short) var_8)))))));
                    var_15 *= ((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) var_4))), (var_2)));
                }
            } 
        } 
    } 
}
