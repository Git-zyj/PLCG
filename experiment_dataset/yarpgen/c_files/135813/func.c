/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135813
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 = ((((/* implicit */_Bool) ((((arr_5 [i_0] [i_2]) % (((/* implicit */long long int) arr_0 [i_0] [(signed char)12])))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) arr_6 [i_0] [(signed char)5] [2U])) ? (((/* implicit */long long int) arr_2 [i_0])) : (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (-(2147479552U)))))));
                    var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0] [i_2 + 1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))))) >> (((arr_2 [i_1]) - (1501880483)))));
                    var_15 = ((/* implicit */signed char) ((arr_2 [i_0]) * (((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) (unsigned short)59203))))))));
                }
            } 
        } 
    } 
    var_16 ^= ((/* implicit */unsigned long long int) var_0);
    var_17 = ((/* implicit */unsigned int) var_3);
}
