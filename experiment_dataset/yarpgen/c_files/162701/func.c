/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162701
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
    var_10 = ((/* implicit */_Bool) min((((((((/* implicit */int) var_8)) != (((/* implicit */int) var_9)))) ? (((/* implicit */int) var_8)) : ((+(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) var_1)) << (((/* implicit */int) (((_Bool)1) && (var_6)))))) : ((((!((_Bool)1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_10 [i_0]))))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_3] [i_3] = (_Bool)0;
                                var_12 |= ((/* implicit */_Bool) ((arr_17 [i_0] [i_3] [i_2] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1)))))));
                                var_13 = ((((arr_11 [i_1 - 1] [i_2] [i_3] [i_3]) ? (((/* implicit */int) arr_11 [i_3] [(_Bool)1] [i_0] [i_3])) : (((/* implicit */int) var_8)))) < (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
