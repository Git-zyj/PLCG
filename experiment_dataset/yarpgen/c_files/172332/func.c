/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172332
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
    var_19 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) arr_4 [i_1] [i_0 - 1] [i_0 - 1])), (6877132170330381513ULL))))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) 659910372451945258LL))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)127))))) : (min((((/* implicit */long long int) var_2)), (var_17))))))));
                arr_5 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */int) (signed char)114);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_0 [i_0 - 1])), ((unsigned short)40244)))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (-759230549)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))) : ((~(-659910372451945258LL)))));
            }
        } 
    } 
}
