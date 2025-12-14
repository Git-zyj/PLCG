/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 145823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=145823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/145823
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                var_16 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                arr_4 [i_1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) max((var_6), (((/* implicit */unsigned short) ((unsigned char) arr_2 [i_0] [i_1]))))))));
                var_17 = ((/* implicit */short) ((long long int) ((((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (signed char)37)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (signed char)-32))))) : (min((((/* implicit */long long int) var_11)), (arr_1 [i_0]))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_13), (((/* implicit */short) (_Bool)0))));
}
