/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 142955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=142955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/142955
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
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(1035470850)))) ? (max((((unsigned int) var_11)), (((/* implicit */unsigned int) ((1035470850) % (((/* implicit */int) (unsigned char)144))))))) : (((/* implicit */unsigned int) (~((-(((/* implicit */int) var_0)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 &= ((/* implicit */short) ((-1035470850) / (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned char)240))))))));
                var_17 = ((/* implicit */signed char) (((~(max((((/* implicit */int) (unsigned short)65535)), (var_1))))) ^ ((~(-1035470850)))));
                var_18 += ((((/* implicit */_Bool) ((max((0), (-2045241722))) - (((((/* implicit */_Bool) (unsigned char)115)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((((-1035470850) >= (2147483647))) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) var_12)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)28042))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_5);
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned char) (+((+(((/* implicit */int) var_4))))))))));
    var_21 = ((((/* implicit */int) var_12)) / (min((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), ((unsigned char)76)))), ((+(((/* implicit */int) var_14)))))));
}
