/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15594
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
    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)137))) : (var_10))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)127)))) & (((((/* implicit */int) (signed char)108)) >> (((/* implicit */int) var_6))))))) : (var_5)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] [15LL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((arr_0 [7LL]), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) (signed char)99))))) : ((-(var_10))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((signed char) arr_2 [i_1] [i_1])))))));
                arr_5 [i_1] = ((/* implicit */short) ((signed char) ((((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) (short)29658)) - (29633))))) << (((((((var_5) + (9223372036854775807LL))) >> (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))) - (3063195002139810467LL))))));
            }
        } 
    } 
}
