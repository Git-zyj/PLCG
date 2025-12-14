/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137065
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
    for (unsigned int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = var_13;
                var_18 ^= ((/* implicit */long long int) ((((/* implicit */int) var_7)) <= ((-(((/* implicit */int) (unsigned char)18))))));
                var_19 = ((/* implicit */unsigned int) (unsigned char)18);
            }
        } 
    } 
    var_20 = ((/* implicit */_Bool) var_8);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)-19704)) ^ (((/* implicit */int) var_2)))), (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) (((~(((/* implicit */int) var_7)))) ^ (((/* implicit */int) ((unsigned char) 3258322547260435810ULL)))))) : (((((var_6) << (((((/* implicit */int) (unsigned short)65520)) - (65508))))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32915)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (signed char)-57)))))))));
}
