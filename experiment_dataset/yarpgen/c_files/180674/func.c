/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180674
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
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            {
                var_10 *= ((/* implicit */signed char) min((((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_6 [i_1 + 1] [i_0])))), (((/* implicit */int) max(((unsigned short)63923), (((/* implicit */unsigned short) (short)14784)))))));
                var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) var_3)), ((+(((/* implicit */int) arr_1 [i_1]))))));
                var_12 = ((((/* implicit */_Bool) (+(min((3735180982605813275LL), (((/* implicit */long long int) (unsigned short)60621))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0]), (arr_5 [i_0]))))) : (((arr_3 [i_1 - 2]) + (arr_3 [i_1 + 4]))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) max((((/* implicit */long long int) ((signed char) var_8))), (min(((~(var_0))), (((/* implicit */long long int) var_7))))));
    var_14 = ((/* implicit */unsigned int) var_0);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) var_6)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_3)))))) : ((+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (var_0)))))));
}
