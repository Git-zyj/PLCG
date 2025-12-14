/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124680
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
    var_18 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_17))))) | ((~(var_13)))))), (max((((/* implicit */long long int) var_10)), (min((0LL), (((/* implicit */long long int) 1065312061))))))));
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (10LL) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (var_7) : (((/* implicit */int) var_1))));
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) - (3LL)));
    var_21 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_22 &= ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                arr_6 [i_1] = (((((-(((/* implicit */int) arr_1 [i_1] [i_1])))) + (2147483647))) << (((((((/* implicit */_Bool) ((3LL) << (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))) : (var_7))) - (1))));
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) var_6);
            }
        } 
    } 
}
