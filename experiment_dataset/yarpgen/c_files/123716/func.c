/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 123716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=123716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/123716
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
    var_17 = ((/* implicit */short) ((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_9)))) - ((+(((((/* implicit */_Bool) var_9)) ? (1551190969) : (var_16)))))));
    var_18 *= ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (9223372036854775807LL))))))) <= (var_13)));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)8] [i_1] = ((/* implicit */short) var_15);
                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)33)) : ((-(((/* implicit */int) (short)-32742))))));
                var_20 ^= var_4;
            }
        } 
    } 
    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31744)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_11)) + (((/* implicit */int) var_5)))) : (((/* implicit */int) ((_Bool) (_Bool)1))))) : (((/* implicit */int) var_9)))))));
}
