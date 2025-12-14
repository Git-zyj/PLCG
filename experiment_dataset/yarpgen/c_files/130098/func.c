/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130098
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
    var_17 |= (-(max((var_2), (((/* implicit */unsigned int) var_11)))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            var_18 ^= arr_2 [i_0] [i_0] [i_0];
            arr_4 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1]))) - (1300163251U)))));
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (unsigned int i_4 = 3; i_4 < 23; i_4 += 2) 
                    {
                        {
                            arr_13 [i_0] [(unsigned short)0] [i_2] [i_3] [6U] = var_8;
                            var_19 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) min(((unsigned short)45169), ((unsigned short)22287))))))));
                        }
                    } 
                } 
            } 
        }
        arr_14 [i_0] [i_0] = ((((unsigned int) var_3)) / (401286309U));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) - (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
    }
    for (unsigned short i_5 = 1; i_5 < 14; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_6 = 4; i_6 < 13; i_6 += 2) 
        {
            var_21 += (-(((((/* implicit */_Bool) 1447988368U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (2846978929U))));
            var_22 = ((/* implicit */unsigned short) max((var_22), (((unsigned short) ((((/* implicit */_Bool) (unsigned short)11)) ? (1447988368U) : (var_1))))));
            arr_20 [i_5] = (~(((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 + 1]))) : (1447988385U))));
        }
        arr_21 [i_5] = ((/* implicit */unsigned int) (unsigned short)15360);
    }
    var_23 = ((((((/* implicit */_Bool) min((574649915U), (((/* implicit */unsigned int) (unsigned short)65535))))) ? ((~(var_8))) : (var_7))) & (2846978936U));
}
