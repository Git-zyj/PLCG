/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 121715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=121715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/121715
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
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_6))));
    var_19 = ((/* implicit */unsigned char) 3636581202U);
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((+(var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) 4294967287U)), (var_11)))))) : (var_15)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((unsigned int) var_13)))));
                    var_22 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 658386087U)))) != (var_16)))), (max((((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_5 [i_0 - 1] [i_0 + 1]))), (max((((/* implicit */unsigned long long int) var_4)), (var_0)))))));
                    arr_9 [i_0 + 1] [i_0] [i_2 + 2] [i_2 + 2] = ((/* implicit */long long int) var_3);
                    var_23 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [i_2])) : (var_0)))) ? ((~(arr_5 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_1] [i_2 - 2])) | (arr_4 [i_0 + 2] [i_1])))))), (((/* implicit */unsigned long long int) arr_6 [i_0]))));
                }
            } 
        } 
    } 
}
