/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15849
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
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)60))))) && (((/* implicit */_Bool) var_2))))) - (((/* implicit */int) var_15))));
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) > (((unsigned long long int) (signed char)-107))))), (max((((/* implicit */unsigned long long int) ((var_0) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))), (var_16)))));
    var_20 = ((/* implicit */signed char) var_9);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_21 |= ((/* implicit */short) ((((unsigned long long int) arr_4 [(signed char)17] [i_1] [(signed char)17] [i_1])) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)11557))))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1]))))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_13);
}
