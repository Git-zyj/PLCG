/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 173493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=173493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/173493
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned char)99));
                var_13 = ((/* implicit */unsigned short) arr_2 [(signed char)3] [i_1] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (max((-9223372036854775776LL), (((/* implicit */long long int) -548090205)))))))));
    var_15 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) != (((int) var_8))));
}
