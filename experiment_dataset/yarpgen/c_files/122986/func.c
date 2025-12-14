/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122986
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
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (signed char i_2 = 3; i_2 < 24; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_2] [i_2 - 1] [i_2 - 3])) ? (((/* implicit */int) ((arr_11 [i_2 - 1] [i_2 - 1] [i_2 - 3]) <= (arr_11 [i_2 - 3] [i_2 - 1] [i_2 - 3])))) : (((/* implicit */int) var_13))));
                    arr_12 [i_0] [i_1] = ((/* implicit */_Bool) var_4);
                }
            } 
        } 
        arr_13 [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-55))))))))), (((((/* implicit */_Bool) 512)) ? (((/* implicit */int) min(((signed char)48), (((/* implicit */signed char) (_Bool)1))))) : (arr_2 [i_0])))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((((/* implicit */_Bool) 2808528451U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_0)))));
    }
    var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_6))));
}
