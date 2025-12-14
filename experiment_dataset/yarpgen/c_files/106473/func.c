/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106473
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = min((((((/* implicit */int) var_4)) * (((/* implicit */int) (signed char)-106)))), (((((((((/* implicit */int) (short)-24542)) + (2147483647))) << (((((-840634099) + (840634106))) - (7))))) << (((((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)5)))) - (1))))));
                arr_5 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_2 [i_1 - 1] [i_1]), ((unsigned char)77)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)32), ((unsigned char)37))))) : (((unsigned long long int) (signed char)105))));
                var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (var_3) : (((/* implicit */unsigned int) 2097151))))) ? (((((/* implicit */_Bool) (unsigned short)58360)) ? (522107260487391875LL) : (8419379335821682132LL))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) var_2)) ? (var_3) : (3470635613U))), (((/* implicit */unsigned int) min((2097153), (((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((-1569127678) + (1689053219)))) ? (min((var_1), (-2097155))) : (min((((/* implicit */int) (unsigned char)164)), (-2097136))))), (((/* implicit */int) min(((unsigned short)60405), (var_2))))));
}
