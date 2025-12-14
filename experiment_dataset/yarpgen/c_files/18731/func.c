/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18731
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) min((arr_0 [i_0] [i_0]), (((((/* implicit */_Bool) (-(var_10)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_5)))))) : (arr_0 [i_0] [i_0])))));
        var_13 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-77)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16068))) : (376387819U)))), (var_3)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_14 = (~(((/* implicit */int) (short)-14079)));
        var_15 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1]))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16068)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) : (-8152010144844286140LL)));
    }
    /* vectorizable */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((arr_8 [i_2 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)21))) : (arr_6 [i_2 + 1] [i_2 + 1])));
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)216))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) arr_8 [i_2 - 1]))))) : (arr_6 [i_2 + 1] [i_2]));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_6 [i_2 + 1] [i_2])));
    }
    var_20 = ((/* implicit */unsigned int) min((var_2), (((/* implicit */unsigned long long int) -6086127522402642783LL))));
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) var_1)), (min((-3157546419205406238LL), (((long long int) var_6))))));
}
