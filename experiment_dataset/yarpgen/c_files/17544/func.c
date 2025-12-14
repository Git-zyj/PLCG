/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 17544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=17544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/17544
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 -= ((/* implicit */_Bool) (+(5323589306650957209LL)));
                arr_4 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) min(((+(((/* implicit */int) (short)-30050)))), ((+(((/* implicit */int) var_7))))));
                var_21 ^= ((/* implicit */unsigned int) min((min((((/* implicit */long long int) ((signed char) var_15))), (2147352576LL))), (((long long int) arr_3 [(signed char)8] [(signed char)8]))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) var_19);
}
