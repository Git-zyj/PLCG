/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188903
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_16 = max(((~((~(var_12))))), (max((min((var_0), (var_11))), (var_0))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 24; i_2 += 4) 
                {
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), (((((/* implicit */_Bool) (+(min((var_2), (var_7)))))) ? (((((/* implicit */_Bool) var_14)) ? (var_12) : (var_0))) : ((~(min((var_1), (var_9)))))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 2; i_4 < 24; i_4 += 4) 
                            {
                                var_18 *= var_14;
                                arr_11 [i_0 - 1] [i_0] [i_2] [i_0 - 1] [i_0 - 1] = (~((-(var_10))));
                            }
                        }
                    } 
                } 
                arr_12 [i_0] [17U] = max((min((var_5), (var_14))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))));
    var_20 = (~(var_4));
}
