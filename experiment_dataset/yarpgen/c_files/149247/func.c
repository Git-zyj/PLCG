/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149247
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
    var_20 = ((/* implicit */long long int) ((((-1137220520) + (2147483647))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) min((var_2), (((/* implicit */short) var_4))))), (((unsigned short) var_12))))) - (77)))));
    var_21 = ((/* implicit */_Bool) ((max((((/* implicit */long long int) var_14)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-8488132855572739169LL))))) % (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_22 *= min((((/* implicit */unsigned long long int) var_1)), (11297769330217803658ULL));
                arr_8 [i_0] = (!(((/* implicit */_Bool) max((arr_7 [i_0] [i_1]), (((/* implicit */int) ((unsigned char) arr_0 [i_0])))))));
            }
        } 
    } 
}
