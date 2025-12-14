/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167180
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
    var_11 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (+(max((arr_11 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_3]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) arr_4 [i_3 - 1] [i_2] [i_1 - 1]))))))))))));
                            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(max((arr_6 [i_3 - 1] [i_2] [i_2] [i_0]), (1059474240U)))))) ? (min((3235493055U), (((/* implicit */unsigned int) arr_5 [(short)1] [0U])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_0])))));
                        }
                    } 
                } 
                var_14 = ((/* implicit */short) 3235493069U);
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -251222259)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14440)))))) ? (((/* implicit */unsigned int) max((2132835136), (((/* implicit */int) var_2))))) : (((var_9) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))))))), (((/* implicit */unsigned int) (_Bool)1))));
}
