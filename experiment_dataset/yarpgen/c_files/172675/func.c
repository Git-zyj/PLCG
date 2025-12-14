/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172675
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) var_16)), ((signed char)-37)))) % (((/* implicit */int) ((signed char) -592710710)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) (short)-17273)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 2] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) 0);
                var_19 ^= ((/* implicit */long long int) ((((arr_3 [i_0 - 1] [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((-592710695) >= (var_9))))))) >> ((((((_Bool)0) ? (131071U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1008))))) - (1005U)))));
            }
        } 
    } 
}
