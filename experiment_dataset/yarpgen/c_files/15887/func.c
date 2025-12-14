/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15887
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
    var_10 = ((/* implicit */long long int) var_5);
    var_11 |= ((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned int) 1016279677))));
    var_12 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2129306285U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3882827038U)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((long long int) ((unsigned short) arr_1 [i_1 + 1]))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1]))))) : (-1821161487281283302LL)));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_5 [i_1] [i_0]))) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 2])) : (((((/* implicit */int) var_7)) >> (((var_2) - (3605809713U)))))))) <= (((min((1414406444U), (((/* implicit */unsigned int) (short)0)))) & (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)15)) : (var_9))))))));
            }
        } 
    } 
}
