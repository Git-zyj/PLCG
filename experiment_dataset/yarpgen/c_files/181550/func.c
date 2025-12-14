/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 181550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=181550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/181550
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
    var_20 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_1 [i_1 - 1]))) > (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1])) == (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_1 - 1])))))));
                arr_5 [i_0] [i_0] [(signed char)14] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (min((((/* implicit */unsigned int) arr_4 [(short)7] [i_0] [i_1])), (var_19))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) > (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_1])), (arr_0 [i_0])))), (min((var_12), (((/* implicit */unsigned long long int) arr_0 [i_0])))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_1 [i_1 - 1])), (((((/* implicit */long long int) ((/* implicit */int) var_9))) * (var_18))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((arr_0 [i_0]) > ((+(arr_0 [i_1])))))), (var_14)));
            }
        } 
    } 
}
