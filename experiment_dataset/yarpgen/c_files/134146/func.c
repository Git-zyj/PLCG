/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134146
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_12 ^= (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */long long int) var_7)))))));
                    arr_8 [i_0] [i_2] = arr_1 [i_0];
                }
            } 
        } 
    } 
    var_13 = ((((((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (var_2)))) == (((((/* implicit */_Bool) 294536197472922150LL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */long long int) ((unsigned int) max((var_9), (var_5))))) : ((~(min((var_5), (((/* implicit */long long int) var_0)))))));
    var_14 = ((/* implicit */int) ((var_2) > (var_2)));
}
