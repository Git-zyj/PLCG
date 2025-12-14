/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 171812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=171812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/171812
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
    var_17 = ((/* implicit */int) var_12);
    var_18 = ((/* implicit */unsigned int) -76633083);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((((/* implicit */int) (unsigned char)255)) / (-76633083)))));
                var_20 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_1]))))) & (min((11ULL), (var_0)))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (2681018887U)))) ? (min((((/* implicit */unsigned long long int) (signed char)29)), (13ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))) ? (((unsigned int) (!(((/* implicit */_Bool) (short)31888))))) : (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) var_16)) : (76633082)))) : (0U)))));
}
