/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105855
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
    var_15 = ((/* implicit */unsigned int) var_5);
    var_16 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 16384U)))));
    var_17 = ((/* implicit */short) (+(((((var_14) >> (((var_0) - (3969036826U))))) << (((((/* implicit */int) ((signed char) var_11))) - (68)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 &= ((/* implicit */short) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) 583735127U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191))) : (5849016170928050752ULL)))));
                var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_11))));
            }
        } 
    } 
}
