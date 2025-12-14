/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 133728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=133728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/133728
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
    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? ((((~(((/* implicit */int) var_15)))) & (((((/* implicit */int) var_6)) - (((/* implicit */int) var_15)))))) : ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (-13LL)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_11))));
                var_22 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 9138758957237832532ULL))))))) - (9138758957237832532ULL)));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)248)))))));
    var_24 = ((max((((((/* implicit */_Bool) (unsigned short)15255)) && (((/* implicit */_Bool) 9138758957237832554ULL)))), (((((/* implicit */unsigned long long int) 3415203658U)) != (9138758957237832537ULL))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)));
}
