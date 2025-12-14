/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109919
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            {
                var_20 &= ((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_1 - 2]))))));
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) min((((/* implicit */short) arr_1 [i_1 + 1])), (arr_3 [i_0] [i_1])))), (min(((unsigned short)61145), ((unsigned short)61145)))));
                var_22 = ((/* implicit */unsigned int) arr_1 [(_Bool)1]);
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_5);
    var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) ((int) (unsigned short)61145))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) : (var_12))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_6)))))));
    var_25 += ((/* implicit */int) max((((/* implicit */long long int) min((((/* implicit */int) ((signed char) var_4))), (((((/* implicit */_Bool) (unsigned short)61127)) ? (((/* implicit */int) (unsigned short)61145)) : (((/* implicit */int) (unsigned char)0))))))), (min((max((var_16), (var_15))), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)247))))))));
}
