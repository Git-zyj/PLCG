/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172583
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
    var_19 = ((1114173120U) * (1114173142U));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_5 [i_0 - 1] [i_0] = ((/* implicit */_Bool) (-((-(((/* implicit */int) var_13))))));
                var_20 += ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(-2028374545)))) + (((long long int) var_0))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) 13977395352953331088ULL)))))))) < (((((/* implicit */_Bool) ((var_9) ? (2028374544) : (-2028374539)))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_1))))))))));
            }
        } 
    } 
}
