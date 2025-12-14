/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 119544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=119544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/119544
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
    var_20 = ((/* implicit */int) max((var_20), ((~(var_9)))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) ((int) ((var_18) ? (((/* implicit */int) var_10)) : (arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 |= ((unsigned int) arr_0 [i_0] [i_1]);
                    var_23 += ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) var_3)))));
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) / (var_16)));
                }
            } 
        } 
        var_25 &= ((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [12] [i_0] [(_Bool)1])))))) <= ((-(var_2))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) arr_3 [0U])))) : ((+(var_1))))));
    }
}
