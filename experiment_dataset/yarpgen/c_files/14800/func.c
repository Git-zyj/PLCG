/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14800
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
    for (short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) -1700331468)) != (-5363304751401661344LL))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_5)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [(_Bool)1] [i_1])) < (arr_5 [i_0] [i_1] [19LL]))))))) : (((((/* implicit */_Bool) (signed char)-111)) ? (((long long int) (signed char)111)) : (((((/* implicit */_Bool) -1496760383)) ? (var_5) : (((/* implicit */long long int) arr_5 [i_0] [i_0] [i_1])))))))))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (short)1501)) ? (419864530) : (((/* implicit */int) (signed char)-124))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((var_14) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))));
}
