/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16160
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_2] [i_0])))) + (((long long int) (signed char)93))));
                    var_21 ^= ((/* implicit */_Bool) ((unsigned char) min(((~(((/* implicit */int) var_5)))), (((/* implicit */int) (signed char)93)))));
                }
            } 
        } 
    } 
    var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-96))))) ? ((~(((((/* implicit */_Bool) var_11)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)52357)) + (((/* implicit */int) var_15)))))))))));
    var_23 = ((/* implicit */unsigned char) var_9);
}
