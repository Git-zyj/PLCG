/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149232
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
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = (-((~(((/* implicit */int) var_13)))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_19 += (~((~(((/* implicit */int) arr_9 [i_0] [i_1] [i_0 - 3] [i_3])))));
                        var_20 = (~((~(var_0))));
                        var_21 = ((/* implicit */unsigned int) max(((!(var_12))), (max(((_Bool)1), (arr_9 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 + 3])))));
                        var_22 ^= (~(((/* implicit */int) (!(((/* implicit */_Bool) 511))))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_3 [i_0 - 3]))))));
        arr_11 [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */int) arr_4 [i_0] [i_0 - 1])), (var_2))), (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_4 = 1; i_4 < 8; i_4 += 2) 
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 + 2]))))))))));
        arr_14 [i_4] = (~(min((((/* implicit */unsigned int) (_Bool)1)), (31U))));
        var_25 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) var_4)), (var_2)))));
    }
    var_26 = var_14;
    var_27 = ((/* implicit */unsigned char) var_15);
    var_28 = ((/* implicit */unsigned short) var_7);
}
