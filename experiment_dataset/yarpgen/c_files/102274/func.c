/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 102274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=102274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/102274
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_5 [i_1] [i_2 - 1] [i_2 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)-118)))) : (((((/* implicit */_Bool) ((unsigned int) var_1))) ? (max((var_1), (var_3))) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [7ULL] [(signed char)11])))))));
                    var_10 = ((/* implicit */unsigned long long int) arr_2 [i_2 + 1]);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_1))))), (min((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) 1331162602)), (var_5))))))))));
    var_12 = ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */unsigned char) max((max((min((((/* implicit */unsigned long long int) var_1)), (var_4))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))))));
}
