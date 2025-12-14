/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148206
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */_Bool) max((((arr_1 [i_1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0)))), (((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) (_Bool)0))))));
                var_13 = (((+(((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) > (((((/* implicit */_Bool) arr_5 [i_1])) ? (110130863U) : (arr_5 [i_1]))));
                var_14 = ((/* implicit */_Bool) max((((/* implicit */int) ((((arr_1 [15U]) ? (4294967295U) : (10U))) == (((/* implicit */unsigned int) ((/* implicit */int) ((1U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))), (max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) 8U);
    var_16 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((4294967287U) == (var_4)))) : (((((/* implicit */int) var_0)) ^ (((/* implicit */int) (_Bool)1))))))), ((((_Bool)1) ? (((unsigned int) (_Bool)1)) : (((unsigned int) (_Bool)1))))));
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) arr_8 [i_4]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) ((min((4294967295U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1258742760U))))))) ^ (((((/* implicit */_Bool) arr_0 [i_2 - 1])) ? (((unsigned int) (_Bool)0)) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) ^ (2574081935U)))))));
                                var_19 = ((/* implicit */unsigned int) max((var_19), (1164337408U)));
                                var_20 = ((/* implicit */unsigned int) ((4294967295U) <= (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) (_Bool)1))))))));
                                arr_17 [i_6] [i_5] [1U] [i_3 + 1] [i_2 - 1] [i_2 - 1] = ((/* implicit */unsigned int) (_Bool)0);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) (_Bool)1);
                    arr_18 [i_3 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (3125102646U)))) ? (max((4113991342U), (((/* implicit */unsigned int) arr_7 [i_2 - 1])))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2 - 1])))))));
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3029417144U))));
                }
            } 
        } 
    } 
}
