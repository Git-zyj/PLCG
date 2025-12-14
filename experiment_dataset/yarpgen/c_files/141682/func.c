/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 141682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=141682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/141682
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
    var_19 -= ((/* implicit */unsigned long long int) ((((unsigned int) var_10)) * (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [4LL] |= ((/* implicit */long long int) var_9);
                    arr_9 [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) var_15))));
                    arr_10 [i_2] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)248)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)255))))))) != (min((((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 1])), (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (var_6)))))));
                }
            } 
        } 
    } 
}
