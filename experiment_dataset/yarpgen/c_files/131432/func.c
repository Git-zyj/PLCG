/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 131432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=131432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/131432
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = (!(((/* implicit */_Bool) ((max((var_5), (arr_7 [i_2] [i_3]))) ? (((/* implicit */int) var_2)) : ((~(((/* implicit */int) var_8))))))));
                            arr_11 [i_0] [i_1] = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_10 [i_0] [i_2] [i_3]))), ((~(((/* implicit */int) (_Bool)0))))));
                            var_12 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (_Bool)0))))));
                            arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) & (max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) max((var_0), (var_4))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((var_5) ? (((var_2) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_5)))))))));
                var_13 = ((/* implicit */_Bool) max((var_13), (max((max((arr_9 [i_0] [i_1]), (arr_9 [i_0] [i_1]))), (min(((_Bool)1), (arr_9 [(_Bool)1] [i_1])))))));
                arr_14 [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
            }
        } 
    } 
    var_14 = var_3;
}
