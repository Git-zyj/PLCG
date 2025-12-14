/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 130342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=130342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/130342
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
    var_20 ^= ((/* implicit */long long int) (signed char)10);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_21 *= min((arr_0 [i_0] [i_0]), ((~(arr_0 [i_1] [i_1 + 1]))));
                arr_4 [8U] |= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)63)) : (((/* implicit */int) arr_1 [(signed char)10]))))), (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (short)72))))))) << (((((/* implicit */int) (signed char)112)) - (85)))));
            }
        } 
    } 
    var_22 *= ((/* implicit */short) (unsigned char)240);
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) >> (((var_18) + (444677857)))));
}
