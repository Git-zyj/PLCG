/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131479
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) var_4))));
    var_18 = (+(min((((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) var_4)))));
    var_19 |= ((/* implicit */int) (-(0U)));
    var_20 = var_0;
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_4 - 1] [i_1 + 1]))) | ((-(arr_2 [i_4 - 1])))));
                                var_22 += ((/* implicit */int) var_6);
                                var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_7 [i_4 - 1] [i_4 - 1] [i_4 - 1]), (((/* implicit */unsigned char) var_11)))))));
                            }
                        } 
                    } 
                    var_24 += ((/* implicit */_Bool) (+((((_Bool)1) ? (4294967271U) : (6U)))));
                }
            } 
        } 
    } 
}
