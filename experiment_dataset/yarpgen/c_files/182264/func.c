/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 182264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=182264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/182264
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_10 = ((/* implicit */int) ((((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) var_2)))) : (var_0))) < (((/* implicit */int) var_3))));
                    arr_7 [18ULL] [i_1] [i_1] &= ((/* implicit */unsigned short) var_2);
                    var_11 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_3 [16] [i_1] [i_2 + 1])) ? (((/* implicit */int) var_9)) : (arr_3 [3U] [i_2] [i_2 - 1]))), ((((((~(((/* implicit */int) (unsigned short)65535)))) + (2147483647))) >> (((/* implicit */int) ((_Bool) (short)-13944)))))));
                }
            } 
        } 
    } 
    var_12 ^= ((/* implicit */short) var_6);
    var_13 &= ((/* implicit */unsigned long long int) (((-(min((var_5), (6557716408382270735ULL))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86)))));
    var_14 ^= ((/* implicit */unsigned short) min((((/* implicit */short) (unsigned char)69)), ((short)-13947)));
}
