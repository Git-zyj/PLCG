/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 120298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=120298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/120298
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
    var_14 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
    var_15 = var_11;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_16 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])) & (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 2])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 2])))) : (((((/* implicit */_Bool) arr_1 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2]))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_17 = ((unsigned short) (!(((/* implicit */_Bool) ((unsigned short) (unsigned short)55086)))));
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)18650)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (unsigned short)65535))));
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)38432)) >= (((/* implicit */int) max(((unsigned short)26481), ((unsigned short)55099))))));
}
