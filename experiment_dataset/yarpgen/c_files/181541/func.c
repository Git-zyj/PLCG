/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181541
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
                var_16 = ((/* implicit */_Bool) ((8504159004781951374LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-34)))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((min(((+(8504159004781951374LL))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) arr_2 [1ULL])) ? (((/* implicit */int) arr_3 [i_1 - 3] [i_1] [(unsigned char)2])) : (((/* implicit */int) var_5))))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_13);
}
