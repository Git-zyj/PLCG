/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118110
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) (signed char)79));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54875))) : (var_8)))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [(signed char)0])))) : (((/* implicit */int) (short)21731))));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) var_2);
}
