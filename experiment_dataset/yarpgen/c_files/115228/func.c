/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 115228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=115228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/115228
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
    var_10 = ((/* implicit */unsigned short) ((((max((((/* implicit */unsigned int) var_3)), (var_9))) | (((((/* implicit */_Bool) var_2)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) == (((/* implicit */unsigned int) (+(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) var_3))))))))));
    var_11 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))));
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) <= ((~(var_7)))))), (var_1)));
    var_13 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65535))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_5)))) ? (((var_5) >> (((((/* implicit */int) var_0)) - (51378))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (var_3))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))))) : (((max((var_9), (((/* implicit */unsigned int) var_7)))) << (((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (var_1))) - (7172540987933956915ULL)))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        arr_4 [i_1] [(short)11] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) var_3)))));
        var_16 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_9)) ? (((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))) : (var_1)))));
        var_17 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)21)) != (((/* implicit */int) (short)-7255)))))) ^ (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_5))))));
    }
    for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        var_18 = ((/* implicit */unsigned int) var_4);
        var_19 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) <= (var_6))))))));
    }
}
