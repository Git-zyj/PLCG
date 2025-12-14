/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167203
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
    var_20 = ((/* implicit */unsigned long long int) (unsigned char)248);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 15; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) ((unsigned int) min((arr_1 [i_1 + 1]), (arr_1 [i_0]))));
                    var_22 &= ((/* implicit */_Bool) ((((((var_15) + (9223372036854775807LL))) << (((var_4) - (2197212289U))))) + (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)243), (((/* implicit */unsigned char) (signed char)73))))))));
                    arr_8 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) arr_4 [i_1 + 2] [i_2 - 1]);
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_7))) & (((/* implicit */long long int) ((/* implicit */int) (short)-4806)))))) ? (((((((/* implicit */int) var_12)) >> (((((/* implicit */int) (unsigned char)234)) - (229))))) * ((~(((/* implicit */int) (unsigned char)0)))))) : (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) var_2))));
}
