/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148044
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
    var_12 = ((/* implicit */int) max((((/* implicit */long long int) var_1)), (var_6)));
    var_13 = ((/* implicit */short) var_9);
    var_14 = ((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) var_11)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_0] [i_0] [i_2] [i_2 - 1])), (1374973984U)))) ? (max((((/* implicit */unsigned int) var_2)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)1))))))));
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) 513528877U)))))));
                }
            } 
        } 
    } 
}
