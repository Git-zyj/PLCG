/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185434
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
    var_10 = ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) <= (221135459910424720LL)))), (min((((/* implicit */int) (unsigned short)58030)), (-1496816431))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)37))))), (var_2)))), (((unsigned long long int) (signed char)-1)))))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) / (1059215523U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_0)))) : (((((/* implicit */_Bool) 4222630938U)) ? (arr_3 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))) ? (max((((/* implicit */long long int) arr_0 [i_0 + 3])), (0LL))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
            }
        } 
    } 
    var_12 -= ((/* implicit */_Bool) var_1);
}
