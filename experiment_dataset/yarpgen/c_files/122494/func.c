/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 122494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=122494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/122494
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
    var_18 = ((/* implicit */short) ((var_16) == (((/* implicit */long long int) var_3))));
    var_19 = ((/* implicit */signed char) var_13);
    var_20 = ((/* implicit */unsigned int) ((var_11) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))));
    var_21 = ((/* implicit */int) var_9);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)243)) >= (((/* implicit */int) (signed char)-3))))) <= (((((/* implicit */int) var_10)) % (((/* implicit */int) arr_1 [i_0 - 1]))))));
                arr_4 [i_0] [(signed char)7] |= ((/* implicit */unsigned int) ((((arr_0 [i_0 + 1]) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))) | (((/* implicit */long long int) ((((/* implicit */int) var_0)) & (((/* implicit */int) (unsigned short)6984)))))));
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_13))) < (arr_0 [i_0 - 2])))) == (((((/* implicit */int) (short)32749)) - (((/* implicit */int) (unsigned char)160))))));
            }
        } 
    } 
}
