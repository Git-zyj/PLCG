/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116074
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) / ((-(max(((-2147483647 - 1)), (((/* implicit */int) (unsigned char)98))))))));
    var_21 = ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (((~(((/* implicit */int) arr_2 [i_0])))) & (((/* implicit */int) ((arr_1 [i_0 - 1]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-118))))))))), (((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) arr_0 [(unsigned char)14])))))));
                arr_6 [i_0] [(_Bool)1] = ((/* implicit */signed char) (_Bool)1);
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */int) var_15)) > (((/* implicit */int) var_15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))));
}
