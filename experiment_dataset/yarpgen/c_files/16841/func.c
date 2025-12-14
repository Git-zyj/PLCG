/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 16841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=16841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/16841
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
    var_14 = ((/* implicit */unsigned short) var_13);
    var_15 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 -= ((/* implicit */signed char) var_5);
                arr_7 [i_0] = max((max((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_11)))), (((/* implicit */int) min(((unsigned char)38), (((/* implicit */unsigned char) arr_3 [i_1]))))));
                var_17 -= ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-349108626) : (((((/* implicit */int) arr_4 [i_0])) - (((/* implicit */int) (_Bool)1)))))));
                arr_8 [i_0] [i_1] |= ((int) ((((/* implicit */int) ((unsigned char) var_1))) - (((var_4) + (((/* implicit */int) arr_3 [i_1]))))));
                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) ((unsigned long long int) (signed char)0))))));
            }
        } 
    } 
}
