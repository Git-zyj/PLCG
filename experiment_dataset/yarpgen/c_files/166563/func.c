/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166563
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
    var_20 = ((/* implicit */signed char) ((short) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1957033098U))) & (((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned int) 10510078871329690940ULL);
                    arr_10 [i_0] = (~(((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))) : (((((/* implicit */_Bool) 720213268U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0))))));
                    arr_11 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) (signed char)-27))) ? (((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */long long int) var_3)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)173)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((max(((-(720213268U))), (((((/* implicit */_Bool) (short)-16703)) ? (491520U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)65))))))) & (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 1306266758521634223ULL)) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) var_6)))))))));
}
