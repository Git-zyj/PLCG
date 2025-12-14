/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135634
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 11; i_0 += 2) 
    {
        var_17 = 0U;
        var_18 = 101815636U;
    }
    var_19 = var_8;
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                var_20 = var_13;
                var_21 = arr_1 [i_2] [i_1];
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_22 = max((arr_1 [i_1] [6U]), (min((4294967295U), (15U))));
                            var_23 = min(((+(var_1))), ((-(arr_11 [i_1] [i_2] [i_3] [i_1]))));
                            var_24 = ((/* implicit */unsigned int) ((1448280919U) < (4294967295U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (var_12) : (var_1))), (var_15)))) ? (((unsigned int) ((0U) == (2U)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((16U), (3253654873U)))))))));
}
