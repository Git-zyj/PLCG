/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 114766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=114766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/114766
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
    var_16 = var_15;
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) arr_0 [i_0] [i_0])))) >> ((((~(((/* implicit */int) ((unsigned short) var_6))))) + (4)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)23917)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_1])))) : ((~(((/* implicit */int) var_13))))));
            var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((/* implicit */int) var_0))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_4)))))))));
        }
        arr_6 [i_0] = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_1 [i_0]))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0] [i_0])) > ((+(((/* implicit */int) var_15))))));
    }
}
