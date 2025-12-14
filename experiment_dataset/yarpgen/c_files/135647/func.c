/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135647
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
    var_18 = max((((max((var_15), (var_7))) >> (((var_0) - (1254903632U))))), (var_16));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = arr_4 [13U] [i_2];
                    var_20 |= ((unsigned int) ((signed char) max((((/* implicit */unsigned int) arr_3 [i_0] [i_2 + 1])), (var_14))));
                    var_21 += ((/* implicit */unsigned int) arr_2 [i_1] [4U]);
                }
            } 
        } 
        var_22 += ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-106))));
        var_23 *= ((/* implicit */unsigned int) max((((/* implicit */signed char) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-91))))) < (((unsigned int) arr_5 [i_0] [i_0]))))), (arr_3 [8U] [i_0 - 2])));
        var_24 *= ((/* implicit */unsigned int) var_8);
    }
}
