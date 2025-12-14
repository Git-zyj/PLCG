/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 160626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=160626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/160626
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [(unsigned char)13] [i_2 - 1] [i_3] [i_2] [i_1 - 1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 1] [i_2] [i_2 + 1])))));
                                var_17 = var_11;
                                arr_15 [i_0] [i_0] [i_2 - 3] [i_3] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((1695415578) << (((1695415598) - (1695415598)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) max((arr_8 [(unsigned char)22] [i_1] [i_2] [i_3] [i_4] [i_2]), (((/* implicit */int) var_3))))) : (max((((/* implicit */unsigned int) arr_11 [i_2] [i_3] [8U] [(unsigned char)9] [i_2])), (arr_0 [(_Bool)1] [(unsigned char)3]))))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 1])) && (arr_9 [i_1 - 1] [i_1 - 1] [i_1 - 1] [22] [i_1]))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) max((((/* implicit */int) (!(var_0)))), (max((((/* implicit */int) var_5)), ((~(var_4)))))));
    var_20 = ((/* implicit */unsigned char) var_15);
}
