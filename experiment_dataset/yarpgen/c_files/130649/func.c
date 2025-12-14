/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130649
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
    for (short i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (arr_1 [i_1 + 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)127))))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (signed char)-116))));
                            arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [(unsigned char)0] = min((((/* implicit */unsigned int) arr_0 [i_3])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -416098571)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) (signed char)-104))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)4]))) : (((((/* implicit */_Bool) var_6)) ? (293341794U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2]))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_1 [i_1]))));
                var_21 |= ((/* implicit */signed char) (~((~(((/* implicit */int) ((short) (_Bool)1)))))));
                var_22 = ((/* implicit */signed char) min((((/* implicit */unsigned int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max(((unsigned char)46), ((unsigned char)204))))))), (((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (758022876U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1] [i_1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204)))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))), (293341794U)));
}
