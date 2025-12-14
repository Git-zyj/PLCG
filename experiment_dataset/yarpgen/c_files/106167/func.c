/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106167
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1] [i_2])))))));
                    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-43))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((arr_3 [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
    }
    var_20 = ((/* implicit */short) (+(var_15)));
}
