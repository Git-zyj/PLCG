/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180180
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned int) (short)19133)), (var_13))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))))))) ? (max((((/* implicit */unsigned int) 965361035)), (0U))) : (var_18)));
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_16))));
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
            {
                {
                    var_21 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1 + 2] [i_0 + 1])) | (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0 + 2]))))), (var_8)));
                    arr_8 [i_1] [i_0] = ((/* implicit */signed char) ((short) ((((/* implicit */unsigned long long int) var_10)) <= (((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))))));
                }
            } 
        } 
    } 
    var_22 += ((/* implicit */long long int) min((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (var_5))))))));
}
