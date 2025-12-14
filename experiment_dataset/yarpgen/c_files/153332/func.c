/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 153332
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=153332 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/153332
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                arr_7 [i_1] = ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24))) : (var_6))), (((/* implicit */long long int) var_12)))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_12)))) : ((~(((/* implicit */int) var_4)))))))));
    var_14 = ((/* implicit */unsigned short) var_2);
    var_15 = ((/* implicit */signed char) ((max((((/* implicit */long long int) (~(((/* implicit */int) (short)6987))))), (var_8))) > (((/* implicit */long long int) min(((((_Bool)1) ? (((/* implicit */int) (unsigned short)65511)) : (((/* implicit */int) var_4)))), (((var_11) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))))))));
}
