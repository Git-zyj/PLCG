/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170364
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
    var_20 = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)87), (((/* implicit */unsigned char) var_10)))))) < (((unsigned int) var_0))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 376676614)) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_0] [i_1])) : (((/* implicit */int) var_9))))) : (284019682U))), (((/* implicit */unsigned int) 818306421))));
                var_21 = ((/* implicit */unsigned char) (((+(((/* implicit */int) arr_3 [i_0] [5] [i_0])))) * (((/* implicit */int) min((((arr_3 [i_0 - 2] [i_0 + 1] [i_1]) && (((/* implicit */_Bool) var_14)))), ((!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                var_22 *= min((arr_2 [i_1]), (max((max((((/* implicit */unsigned int) var_12)), (var_2))), (((((/* implicit */unsigned int) -818306421)) ^ (var_2))))));
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (signed char)-96))) ^ (((/* implicit */int) ((signed char) var_19))))))));
            }
        } 
    } 
}
