/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 152669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=152669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/152669
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
    var_19 = ((/* implicit */signed char) ((unsigned short) (((~(-1474722955308707926LL))) >> (((((/* implicit */int) (short)-22441)) + (22456))))));
    var_20 = ((/* implicit */unsigned short) (short)31736);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (signed char)-92)) : (2035589403)))), (((((/* implicit */_Bool) 742373631U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (1474722955308707926LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : ((((-(3552593665U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))));
                arr_7 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) < (-6359018099880254756LL))))))) : (((arr_3 [i_0]) ? (2275639277574612075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))));
                var_21 = max(((-(16171104796134939541ULL))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */unsigned long long int) var_11)))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)31736)) || (((/* implicit */_Bool) var_0))))))))));
            }
        } 
    } 
}
