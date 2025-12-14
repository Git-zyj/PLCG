/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103467
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
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((var_2) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)36271)))) <= (((var_5) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)64)))))))) : (((/* implicit */int) (unsigned short)49152))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_0 + 4] [i_2] [i_0] = min((((/* implicit */short) arr_8 [i_1] [i_2])), (((short) arr_2 [i_1 + 1] [i_0 + 2])));
                    arr_11 [i_2] [i_1 - 1] [i_1] [i_2] &= ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) var_9)) <= (var_8)))))));
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (unsigned char)120))));
                    var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)65)))))));
                }
            } 
        } 
    } 
}
