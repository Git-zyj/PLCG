/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 110611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=110611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/110611
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
    var_15 = var_2;
    var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_14), ((_Bool)1))))))) ? (max((((((/* implicit */_Bool) var_3)) ? (3U) : (4294443008U))), (max((var_5), (1559770805U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) min((var_17), (((((((_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_2]))))) : (((arr_0 [i_2]) ? (4294443008U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) | (((((unsigned int) var_3)) & (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_2])) & (((/* implicit */int) (_Bool)1)))))))))));
                    var_18 |= ((/* implicit */unsigned int) ((_Bool) ((((((/* implicit */_Bool) 2735196484U)) && (((/* implicit */_Bool) 4294967280U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_7 [i_1] [i_2])))) : (((((/* implicit */_Bool) 1559770801U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (2735196493U))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = min((((/* implicit */unsigned int) ((_Bool) ((unsigned int) 5U)))), (((unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [(_Bool)1] [(_Bool)1] [15U]))) : (var_8)))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 1559770811U)))) ? (0U) : (((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4])))))))) ? (arr_8 [i_1] [i_2] [i_3 - 1] [i_4] [i_4] [i_1]) : (((((((/* implicit */_Bool) 2735196495U)) || ((_Bool)0))) ? (((unsigned int) 4294967295U)) : ((-(arr_7 [i_2] [i_4])))))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((((_Bool) max((var_6), (arr_8 [(_Bool)1] [i_1] [i_2] [i_3] [11U] [i_4])))) ? ((~(((2735196492U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_3] [i_2]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_2])) ? (arr_7 [8U] [13U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_1] [i_3] [i_4]))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) && (((/* implicit */_Bool) arr_4 [11U] [i_2]))))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((((/* implicit */int) ((min((2735196484U), (var_7))) != (var_0)))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (var_9))))))));
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294443016U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) < (var_13))))) : ((-(var_12)))))))));
}
