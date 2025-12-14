/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113805
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
    var_18 = ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65526))))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15)))))));
    var_19 ^= ((/* implicit */long long int) var_4);
    var_20 = ((/* implicit */unsigned short) max(((short)23335), ((short)(-32767 - 1))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 ^= ((/* implicit */int) var_5);
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) (unsigned short)48457)) : (998320703)));
                    arr_8 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25411)) ? (((/* implicit */int) (short)-28691)) : (((/* implicit */int) (short)(-32767 - 1)))));
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (1U)))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) ((_Bool) (signed char)0)))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) var_14)) / (var_8)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_4))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                }
            } 
        } 
    } 
}
