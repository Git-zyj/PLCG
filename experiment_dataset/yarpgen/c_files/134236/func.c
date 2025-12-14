/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134236
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
    var_20 = ((/* implicit */int) var_18);
    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))), (((/* implicit */unsigned long long int) var_16))))) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned int) var_10))))) ? (((((/* implicit */_Bool) 1690542892)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) var_3)))) : ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255))))))));
    var_22 = ((/* implicit */unsigned char) var_0);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0 + 2])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 2])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_2 + 1] [i_0 + 2])) & (((/* implicit */int) ((arr_5 [i_2 + 3] [i_0 + 1]) > (((/* implicit */unsigned long long int) var_17)))))));
                    var_25 = ((/* implicit */signed char) arr_4 [i_0]);
                    var_26 = ((/* implicit */signed char) var_1);
                }
            } 
        } 
    } 
}
