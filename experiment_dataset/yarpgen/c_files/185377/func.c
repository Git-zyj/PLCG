/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 185377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=185377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/185377
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
    var_13 = ((/* implicit */long long int) (short)18113);
    var_14 = ((/* implicit */unsigned long long int) (~(min((((((/* implicit */_Bool) (signed char)-79)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)18102))) : (var_3))), (((/* implicit */unsigned int) var_0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0]);
                    arr_11 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((int) min((arr_0 [i_2 - 2] [i_1 - 1]), (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) * (arr_0 [i_0] [(signed char)9]))))));
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_4), (arr_5 [i_1 - 1] [i_1 - 1]))))) | ((((~(var_3))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) (short)-18095))))))))))));
                }
            } 
        } 
    } 
}
